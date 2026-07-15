#include<bits/stdc++.h>
using namespace std;
//Implement a First-In-First-Out (FIFO) queue using a singly linked list
struct Node {
    int val;
    Node *next;
    Node(int d) {
        val = d;
        next = NULL;
    }
};

class Queue{
private:
    Node* start;
    Node* end;
    int size;
public:
    Queue(){
        start = nullptr;
        end = nullptr;
        size = 0;
    }

    void push(int x){
        Node* newNode = new Node(x);
        if (start == nullptr) {
            start = end = newNode;
        } else {
            end->next = newNode;
            end = newNode;
        }
        size++;
    }

    int pop(){
        if (start == nullptr) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        Node* temp = start;
        int dequeuedValue = start->val;
        start = start->next;
        if (start == nullptr) {
           end = nullptr;  
        }
        delete temp;
        size--;
        return dequeuedValue;
    }

    int peek(){
        if(start==nullptr){
            return -1;
        }
        return start->val;
    }

    bool isEmpty(){
        return (size == 0);
    }
};

int main(){
    Queue q;
    vector<string> commands = {"Queue", "push", "push", 
                               "peek", "pop", "isEmpty"};
    vector<vector<int>> inputs = {{}, {3}, {7}, {}, {}, {}};

    for (int i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            q.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            int result = q.pop();
            cout << result << " ";
        } else if (commands[i] == "peek") {
            int result = q.peek();
            cout << result << " ";
        } else if (commands[i] == "isEmpty") {
            bool result = q.isEmpty();
            cout << (result ? "true" : "false") << " ";
        } else if (commands[i] == "Queue") {
            cout << "null ";
        }
    }
    return 0;
}