#include<bits/stdc++.h>
using namespace std;    
class Stack{
private:
    int* stackArray;
    int capacity;
    int topIndex;

public:
    Stack(int size){
        capacity = size;
        stackArray = new int[capacity];
        topIndex = -1;
    }

    ~Stack(){
        delete[] stackArray;
    }
    bool isFull(){
        return topIndex == capacity - 1;
    }
    bool isEmpty(){
        return topIndex == -1;
    }

    void push(int value){
        if(isFull()){
            cout << "Stack Overflow" << value << endl;
            return;
        }
        stackArray[++topIndex] = value;
    }
    
    int pop(){
        if(isEmpty()){
            cout << "Stack Underflow" << endl;
            return -1; 
        }
        return stackArray[topIndex--];
    }
    
    int top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return stackArray[topIndex];
    }

    void display(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return ;
        }
        for(int i = topIndex; i >= 0; i--){
            cout<<stackArray[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);

    st.display();

    cout<<"Top element: "<<st.top()<<endl;  
    cout<<"Popped element: "<<st.pop()<<endl;
    st.display();

    cout<<(st.isEmpty()? "true":"false")<<endl;
    return 0;
}