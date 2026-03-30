
#include <iostream>
using namespace std;

/*
========================================
        NODE STRUCTURE
========================================
Each node contains:
1. data
2. pointer to next node
*/

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {

private:
    Node* head;

public:

    // Constructor
    LinkedList() {
        head = NULL;
    }

    /*
    ========================================
        INSERT AT BEGINNING
    ========================================
    */
    void insertAtBeginning(int value) {

        Node* newNode = new Node(value);

        newNode->next = head;
        head = newNode;
    }

    /*
    ========================================
        INSERT AT END
    ========================================
    */
    void insertAtEnd(int value) {

        Node* newNode = new Node(value);

        if(head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    /*
    ========================================
        DELETE NODE
    ========================================
    */
    void deleteValue(int value) {

        if(head == NULL)
            return;

        // delete head
        if(head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;

        while(temp->next != NULL &&
              temp->next->data != value) {
            temp = temp->next;
        }

        if(temp->next == NULL)
            return;

        Node* deleteNode = temp->next;
        temp->next = temp->next->next;

        delete deleteNode;
    }

    /*
    ========================================
        SEARCH ELEMENT
    ========================================
    */
    bool search(int value) {

        Node* temp = head;

        while(temp != NULL) {

            if(temp->data == value)
                return true;

            temp = temp->next;
        }

        return false;
    }

    /*
    ========================================
        DISPLAY LIST
    ========================================
    */
    void display() {

        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

/*
========================================
            MAIN FUNCTION
========================================
*/

int main() {

    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtBeginning(5);

    list.insertAtEnd(20);
    list.insertAtEnd(30);

    cout << "Linked List:\n";
    list.display();

    cout << "\nSearching 20: ";
    cout << (list.search(20) ? "Found" : "Not Found");

    cout << "\nDeleting 20...\n";
    list.deleteValue(20);

    list.display();

    return 0;
}