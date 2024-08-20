#include <iostream>
using namespace std;

class queue {
public:
    int start = -1;
    int end = -1;
    int count = 0;
    int size = 100;
    int* arr = new int[size];

    void push(int element) {
        if (count == size) {
            cout << "Queue is full." << endl;
            exit(1);
        }
        if (end == -1) {  // Corrected from end=-1 to end== -1
            start = 0;
            end = 0;
        } else {
            end = (end + 1) % size;
        }
        arr[end] = element;
        cout << "Element pushed!" << endl;
        count++;
    }

    void pop() {
        if (start == -1) {
            cout << "Queue is empty" << endl;
            return;  // Added to avoid further execution when queue is empty
        }
        if (count == 1) {
            start = -1;
            end = -1;
        } else {
            start = (start + 1) % size;
        }
        count--;
    }

    int top() {
        if (start == -1) {
            cout << "Queue is empty." << endl;
            return -1;  // Returning -1 if the queue is empty
        }
        return arr[start];  // Corrected to return the front element
    }

    int siz() {
        return count;
    }
};

int main() {
    queue q;  // Changed from 's' to 'q' for clarity
    q.push(6);
    q.push(3);
    q.push(7);

    cout << "Top of queue before deleting any element: " << q.top() << endl;
    cout << "Size of queue before deleting any element: " << q.siz() << endl;

    q.pop();
    cout << "Size of queue after deleting an element: " << q.siz() << endl;
    cout << "Top of queue after deleting an element: " << q.top() << endl;

    return 0;
}
