#include<bits/stdc++.h>
using namespace std;
//Implement a Last-In-First-Out (LIFO) stack using a singly linked list
struct Node {
    int val;
    Node *next;
    Node(int d) {
        val = d;
        next = NULL;
    }
};

class Stack{
private:
    Node* head;
    int size;
public:
    Stack(){
        head = nullptr;
        size = 0;
    }

    void push(int x){
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
        size++;
    }
    int pop(){
        if (head==nullptr) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        Node* temp = head;
        int poppedValue = head->val;
        head = head->next;
        delete temp;
        size--;
        return poppedValue;
    }
    int top(){
        if(head==nullptr){
            return -1;
        }
        return head->val;
    }

    bool isEmpty(){
        return (size == 0);
    }
};

int main(){
    Stack st;
    vector<string> commands = {"LinkedListStack", "push", "push", 
                               "pop", "top", "isEmpty"};
    vector<vector<int>> inputs = {{}, {3}, {7}, {}, {}, {}};

    for (int i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            st.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << st.pop() << " ";
        } else if (commands[i] == "top") {
            cout << st.top() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (st.isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "Stack") {
            cout << "null ";
        }
    }

    return 0;  
}
