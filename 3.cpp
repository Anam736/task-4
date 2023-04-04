// #include <iostream>
// #include <string>
// #include <bitset>
// #include <vector>

// using namespace std;

// int main() {
//     bitset<100> nums;
//     string input;
//     vector<int> missing_nums;

//     while (true) {
//         cout << "Enter an integer from 1 to 100 (inclusive), or type 'end' to stop: ";
//         cin >> input;

//         if (input == "end") {
//             break;
//         }

//         int num = stoi(input);
//         if (num < 1 || num > 100) {
//             cout << "Invalid input. Please enter an integer from 1 to 100." << endl;
//             continue;
//         }

//         nums.set(num - 1);
//     }

//     for (int i = 0; i < 100; i++) {
//         if (!nums.test(i)) {
//             missing_nums.push_back(i + 1);
//         }
//     }

//     if (missing_nums.empty()) {
//         cout << "No numbers are missing." << endl;
//     } else {
//         cout << "The missing numbers are: ";
//         for (int num : missing_nums) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>

int main() {
    const int SIZE = 100;
    int arr[SIZE] = { 0 };

    // read input from user
    int num;
    std::string input;
    int count = 0;
    std::cout << "Enter an integer from 1 to 100 (inclusive), or type 'end' to stop: ";
    while (count < SIZE - 1) {
        std::cin >> input;
        if (input == "end") {
            break;
        }
        num = std::stoi(input);
        if (num < 1 || num > 100) {
            std::cout << "Invalid input. Please enter an integer from 1 to 100." << std::endl;
            continue;
        }
        arr[num - 1] = num;
        count++;
    }

    // find missing number
    std::vector<int> missingNums;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == 0) {
            missingNums.push_back(i + 1);
        }
    }
    if (missingNums.empty()) {
        std::cout << "No missing numbers found." << std::endl;
    } else {
        std::cout << "The missing numbers are: ";
        for (int num : missingNums) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
