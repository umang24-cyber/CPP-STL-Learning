#include<bits/stdc++.h>
using namespace std;

class Queue{
private:
    int *arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int size){
        capacity = size;
        arr  = new int[capacity]; 
        front = -1;
        rear = -1;
    }

    ~Queue(){
        delete[] arr;
    }

    bool isFull(){
        return rear == capacity - 1 ;
    }
    bool isEmpty(){
        return front == -1 || front > rear;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        arr[++rear] = value;
        cout << value << " inserted into queue" << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        return arr[front++];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    q.display();

    cout << "Front element: " << q.peek() << endl;

    return 0;
}