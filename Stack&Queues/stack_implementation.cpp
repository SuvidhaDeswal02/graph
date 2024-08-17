#include <iostream>
using namespace std;

class Stack {
public:
    int top=-1;
    int size=100;
    int* arr=new int[size];

    // // Constructor to initialize the stack
    // Stack() {
    //     top = -1;
    //     size = 1000;
        
    // }

    // Method to push an element onto the stack
    void push(int x) {
        if (top >= size - 1) {
            cout << "Stack is full" << endl;
            return;
        }
        top = top + 1;
        arr[top] = x;
    }

    // Method to get the top element of the stack
    int getTop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1; // Indicating stack is empty
        }
        return arr[top];
    }

    // Method to get the size of the stack
    int siz() {
        return top + 1;
    }

    // Method to pop an element from the stack
    void pop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        top = top - 1;
    }


};

int main() {
    Stack s;
    s.push(6);
    s.push(3);
    s.push(7);
    cout << "Top of stack before deleting any element: " << s.getTop() << endl;
    cout << "Size of stack before deleting any element: " << s.siz() << endl;
    s.pop();
    cout << "Size of stack after deleting an element: " << s.siz() << endl;
    cout << "Top of stack after deleting an element: " << s.getTop() << endl;
    return 0;
}