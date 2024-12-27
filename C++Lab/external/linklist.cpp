#include <iostream>

using namespace std;

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(T value) : data(value), next(NULL) {}
    };

    Node* head; // Pointer to the first node

public:
    LinkedList() : head(NULL) {} // Constructor initializes the list as empty

    // Insert a node at the head of the list
    void insertAtHead(T value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert a node at the tail of the list
    void insertAtTail(T value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Delete a node with the given value
    void deleteNode(T value) {
        if (!head) {
            cout << "List is empty. Nothing to delete." << endl;
            return;
        }

        // If the head node holds the value to be deleted
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Traverse the list to find and delete the node
        Node* temp = head;
        while (temp->next && temp->next->data != value) {
            temp = temp->next;
        }

        if (temp->next) {
            Node* nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            delete nodeToDelete;
        } else {
            cout << "Value not found in the list." << endl;
        }
    }

    // Search for a value in the list
    bool search(T value) {
        Node* temp = head;
        while (temp) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // Display the contents of the list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList<int> intList;

    intList.insertAtHead(10);
    intList.insertAtHead(20);
    intList.insertAtTail(30);
    intList.insertAtTail(40);

    cout << "Linked list: ";
    intList.display();

    cout << "Search for 20: " << (intList.search(20) ? "Found" : "Not Found") << endl;
    cout << "Search for 50: " << (intList.search(50) ? "Found" : "Not Found") << endl;

    intList.deleteNode(20);
    cout << "Linked list after deleting 20: ";
    intList.display();

    intList.deleteNode(50); // Attempt to delete a non-existent node
    cout << "Linked list after deleting 50: ";
    intList.display();

    return 0;
}

