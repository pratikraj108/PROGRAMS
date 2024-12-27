#include <iostream>

using namespace std;

template <typename T>
class Stack {
private:
    struct Node {
        T data;
        Node* next;
        Node(T value) : data(value), next(NULL) {} // Replace nullptr with NULL
    };

    Node* topNode; // Pointer to the top of the stack

public:
    Stack() : topNode(NULL) {} // Replace nullptr with NULL

    // Push an element onto the stack
    void push(T value) {
        Node* newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;
    }

    // Pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }

    // Get the top element of the stack
    T top() {
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
            exit(1); // Exit in case of empty stack
        }
        return topNode->data;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return topNode == NULL; // Replace nullptr with NULL
    }

    // Display the elements of the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node* temp = topNode;
        cout << "Stack elements: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to free memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack<int> intStack;

    // Push elements onto the stack
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    // Display the stack
    cout << "Initial stack:" << endl;
    intStack.display();

    // Access the top elemen
    cout << "Top element: " << intStack.top() << endl;

    // Pop an element and display the stack
    intStack.pop();
    cout << "Stack after popping one element:" << endl;
    intStack.display();

    // Check if the stack is empty
    cout << "Is stack empty? " << (intStack.isEmpty() ? "Yes" : "No") << endl;

    // Push more elements
    intStack.push(40);
    cout << "Stack after pushing 40:" << endl;
    intStack.display();

    return 0;
}

