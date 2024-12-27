#include <iostream>

using namespace std;

template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(T value) : data(value), next(NULL) {} // Replace nullptr with NULL
    };

    Node* frontNode; // Pointer to the front of the queue
    Node* rearNode;  // Pointer to the rear of the queue

public:
    // Constructor
    Queue() : frontNode(NULL), rearNode(NULL) {} // Replace nullptr with NULL

    // Enqueue (add an element to the rear of the queue)
    void enqueue(T value) {
        Node* newNode = new Node(value);
        if (rearNode == NULL) {
            frontNode = rearNode = newNode;
        } else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
    }

    // Dequeue (remove an element from the front of the queue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        Node* temp = frontNode;
        frontNode = frontNode->next;

        if (frontNode == NULL) {
            rearNode = NULL;
        }

        delete temp;
    }

    // Get the front element of the queue
    T front() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element." << endl;
            exit(1); // Exit if the queue is empty
        }
        return frontNode->data;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return frontNode == NULL; // Replace nullptr with NULL
    }

    // Display the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp = frontNode;
        cout << "Queue elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to free memory
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue<int> intQueue;

    // Enqueue elements into the queue
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);

    // Display the queue
    cout << "Initial queue:" << endl;
    intQueue.display();

    // Access the front element
    cout << "Front element: " << intQueue.front() << endl;

    // Dequeue an element and display the queue
    intQueue.dequeue();
    cout << "Queue after dequeuing one element:" << endl;
    intQueue.display();

    // Check if the queue is empty
    cout << "Is queue empty? " << (intQueue.isEmpty() ? "Yes" : "No") << endl;

    // Enqueue more elements
    intQueue.enqueue(40);
    cout << "Queue after enqueuing 40:" << endl;
    intQueue.display();

    return 0;
}

