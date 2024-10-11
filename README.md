# Stack Implementation in C++

This project demonstrates the implementation of a **Stack** data structure in C++. A Stack is a data structure that follows the **LIFO (Last In, First Out)** principle, meaning the last element added is the first one removed. The operations performed on the Stack include **push**, **pop**, **peek/top**, and **isEmpty**.

## Table of Contents
- [Understanding the Stack](#understanding-the-stack)
- [Implemented Functionalities](#implemented-functionalities)
- [Time Complexity Analysis](#time-complexity-analysis)
- [Handling Stack Overflow](#handling-stack-overflow)

## Understanding the Stack

A Stack operates under the **LIFO** principle, which means:
- **Push**: Add an element to the top of the stack.
- **Pop**: Remove the top element from the stack.
- **Peek/Top**: View the top element without removing it.
- **isEmpty**: Check if the stack is empty.


## Time Complexity Analysis
**Push (Insertion): O(1)**
- Inserting a new element at the top of the stack takes constant time because the operation involves creating a new node and updating the pointer.

**Pop (Removal): O(1)**
- Removing the top element takes constant time since only the pointer to the top node needs to be updated.

**Peek/Top (Access): O(1)**
- Accessing the top element is an O(1) operation, as it involves checking the data in the top node.

**isEmpty (Check): O(1)**
- Checking whether the stack is empty is done in constant time by comparing the top node pointer to nullptr.

**Access/Search: O(n)**
- Searching through or accessing a non-top element can require up to n operations, as it involves going through all the elements.

## Handling Stack Overflow
In this implementation, the stack is dynamic (using a linked list), so there is no strict size limit unless we specify one.

For a fixed-size stack (implemented with an array):
- You must track the number of elements in the stack.
- Stack Overflow occurs when the number of elements exceeds the defined capacity of the stack. In such a scenario, the push operation should check if the stack is full before inserting a new element.
