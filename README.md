# lab-equipment-allocation
College Lab Equipment Waiting and Allocation System using Circular Linked List
# College Lab Equipment Waiting and Allocation System

## Description
The College Lab Equipment Waiting and Allocation System is a menu-driven C++ program designed to manage lab equipment requests. It uses a Circular Linked List to organize students in a continuous waiting queue. The system provides options to add students, allocate equipment, cancel and display the queue. This project helps reduce manual management and demonstrates the practical implementation of dynamic data structures.
## Objective
To develop a C++-based system for managing students waiting for lab equipment. The system uses a Circular Linked List to maintain the waiting queue efficiently. It allows adding students, allocating equipment and displaying the waiting list. The project demonstrates the practical use of Circular Linked Lists in a real-world application.
## Data Structure Used
Circular Linked List

## Main Operations
- Add student to waiting queue
- Allocate equipment to the first student
- display waiting list

## Algorithm 

1. Start the program and initialize "rear = NULL".
2. Display the menu and accept the user's choice.
3. If the choice is 1, enter the student's roll number and name, create a new node, and insert it at the rear of the circular linked list.
4. If the choice is 2, allocate equipment to the first waiting student and remove that student from the queue.
5. If the choice is 3, display all students in the waiting queue.
6. If the choice is 4, exit the program.
7. Repeat the menu until the user selects Exit.
8. Stop the program.

## Conclusion

The College Lab Equipment Waiting and Allocation System is implemented using C++ and a circular linked list. It manages students in FIFO (First In, First Out) order and provides options to add students, allocate equipment, and display the waiting list. This project helps understand circular linked lists, pointers, and dynamic memory allocation.
