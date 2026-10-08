#include <iostream>
using namespace std;

struct Node {
    int rollNo;
    string name;
    Node *next;
};

Node *rear = NULL;

void addStudent() {
    Node *newNode = new Node;

    cout << "Enter Roll No: ";
    cin >> newNode->rollNo;
    cout << "Enter Name: ";
    cin >> newNode->name;

    if (rear == NULL) {
        rear = newNode;
        rear->next = rear;
    } else {
        newNode->next = rear->next;
        rear->next = newNode;
        rear = newNode;
    }

    cout << "Student added to waiting queue.\n";
}

void allocateEquipment() {
    if (rear == NULL) {
        cout << "No student in waiting queue.\n";
        return;
    }

    Node *temp = rear->next;

    cout << "Equipment allocated to: "
         << temp->name << " (Roll No: "
         << temp->rollNo << ")\n";

    if (rear == temp)
        rear = NULL;
    else
        rear->next = temp->next;

    delete temp;
}

void display() {
    if (rear == NULL) {
        cout << "Waiting queue is empty.\n";
        return;
    }

    Node *temp = rear->next;

    cout << "\nWaiting List:\n";
    do {
        cout << "Roll No: " << temp->rollNo
             << ", Name: " << temp->name << endl;
        temp = temp->next;
    } while (temp != rear->next);
}

int main() {
    int choice;

    do {
        cout << "\n--- Lab Equipment System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Allocate Equipment\n";
        cout << "3. Display Waiting List\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addStudent(); break;
            case 2: allocateEquipment(); break;
            case 3: display(); break;
            case 4: cout << "Exiting..."; break;
            default: cout << "Invalid choice!";
        }
    } while(choice != 4);

    return 0;
}
