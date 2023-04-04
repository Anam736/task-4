#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     unordered_set<int> s;
//     for (int i = 0; i < n; i++) {
//         s.insert(arr[i]);
//     }

//     vector<int> uniqueVec(s.begin(), s.end());
//     sort(uniqueVec.begin(), uniqueVec.end());

//     cout << "Array without duplicate is: ";
//     for (int num : uniqueVec) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<int> arr;
    string input;

    cout << "Enter the elements of the array (type 'end' to stop): ";
    while (cin >> input && input != "end") {
        int num = stoi(input);
        arr.push_back(num);
    }

    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++) {
        s.insert(arr[i]);
    }

    vector<int> uniqueVec(s.begin(), s.end());
    sort(uniqueVec.begin(), uniqueVec.end());

    cout << "Array without duplicate is: ";
    for (int num : uniqueVec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
