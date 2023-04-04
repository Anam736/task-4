#include <iostream>
using namespace std;

// node structure for linked list
struct Node {
    int data;
    Node* next;
};

// function to move all zeros to end
void moveZeros(Node* head) {
    Node* curr = head;
    Node* zeroPtr = NULL;
    
    // find the first zero node
    while (curr != NULL && curr->data != 0) {
        curr = curr->next;
    }
    zeroPtr = curr;
    
    // if no zeros found, return
    if (zeroPtr == NULL) {
        return;
    }
    
    // move all zeros to the end
    while (curr != NULL) {
        if (curr->data != 0) {
            zeroPtr->data = curr->data;
            curr->data = 0;
            zeroPtr = zeroPtr->next;
        }
        curr = curr->next;
    }
}

// function to print linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data;
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    // read input number as string
    string input;
    cout << "Enter a number: ";
    cin >> input;
    
    // create linked list from input number
    for (char c : input) {
        int digit = c - '0';
        Node* newNode = new Node{digit, NULL};
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    // move zeros to end
    moveZeros(head);
    
    // print modified number
    cout << "Modified number: ";
    printList(head);
    
    return 0;
}
