// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> mergeLists(const vector<int>& list1, const vector<int>& list2) {

//     vector<int> mergedList(list1.size() + list2.size());
//     copy(list1.begin(), list1.end(), mergedList.begin());
//     copy(list2.begin(), list2.end(), mergedList.begin() + list1.size());
//     sort(mergedList.begin(), mergedList.end());

//     return mergedList;
// }

// int main() {
//     int n1, n2, num;
//     vector<int> list1, list2;

//     cout << "enter the size of the 1st unsorted list: ";
//     cin >> n1;

//     cout << "enter " << n1 << " integers for the 1st unsorted list:\n";
//     for (int i = 0; i < n1; i++) {
//         cin >> num;
//         list1.push_back(num);
//     }
//     cout << "enter the size of the 2nd unsorted list: ";
//     cin >> n2;

//     cout << "enter " << n2 << " integers for the 2nd unsorted list:\n";
//     for (int i = 0; i < n2; i++) {
//         cin >> num;
//         list2.push_back(num);
//     }

//     vector<int> aftermerge = mergeLists(list1, list2);

//     cout << "the merged and sorted list is :\n";
//     for (int num : aftermerge) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

vector<int> mergeLists(const vector<int>& list1, const vector<int>& list2) {

    vector<int> mergedList(list1.size() + list2.size());
    copy(list1.begin(), list1.end(), mergedList.begin());
    copy(list2.begin(), list2.end(), mergedList.begin() + list1.size());
    sort(mergedList.begin(), mergedList.end());

    return mergedList;
}

int main() {
    string input;
    vector<int> list1, list2;

    cout << "Enter the first unsorted list, type 'end' to stop: " << endl;
    while (cin >> input && input != "end") {
        int num = stoi(input);
        list1.push_back(num);
    }

    cout << "Enter the second unsorted list, type 'end' to stop: " << endl;
    while (cin >> input && input != "end") {
        int num = stoi(input);
        list2.push_back(num);
    }

    vector<int> aftermerge = mergeLists(list1, list2);
    cout<<"ther merged list is ";
    for (int i = 0; i < aftermerge.size(); i++)
    {
        int num = aftermerge[i];
        cout  <<num << " ";
    }
    cout << endl;

    return 0;
}
