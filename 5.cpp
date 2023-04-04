// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main() {
//     string source_file_name, destination_file_name, content;
//     cout << "Enter the source file name: ";
//     cin >> source_file_name;
//     cout << "Enter the destination file name: ";
//     cin >> destination_file_name;

//     // write content to source file
//     ofstream source_file(source_file_name);
//     if (!source_file.is_open()) {
//         cout << "Failed to open source file!" << endl;
//         return 1;
//     }
//     cout << "Enter the content to write to the source file: ";
//     cin.ignore(); // clear input buffer
//     getline(cin, content);
//     source_file << content;
//     source_file.close();

//     // copy source file to destination file
//     ifstream source(source_file_name, ios::binary);
//     ofstream destination(destination_file_name, ios::binary);
//     if (!source.is_open() || !destination.is_open()) {
//         cout << "Failed to open file!" << endl;
//         return 1;
//     }
//     destination << source.rdbuf();
//     source.close();
//     destination.close();

//     // display contents of destination file
//     string line;
//     ifstream destination_file(destination_file_name);
//     if (!destination_file.is_open()) {
//         cout << "Failed to open destination file!" << endl;
//         return 1;
//     }
//     cout << "Contents of destination file:" << endl;
//     while (getline(destination_file, line)) {
//         cout << line << endl;
//     }
//     destination_file.close();

//     return 0;
// }
#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main() {
    string sourceFileName, destFileName, line;
    cout << "Enter the source file name: ";
    cin >> sourceFileName;
    cout << "Enter the destination file name: ";
    cin >> destFileName;

    ifstream sourceFile(sourceFileName);
    ofstream destFile(destFileName);

    if (sourceFile.is_open() && destFile.is_open()) {
        while (getline(sourceFile, line)) {
            destFile << line << endl;
        }
        sourceFile.close();
        destFile.close();
        cout << "File copied successfully." << endl;
    }
    else {
        cout << "Error: Unable to open file." << endl;
    }
    return 0;
}
