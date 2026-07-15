#include<bits/stdc++.h>
using namespace std;

string postfixtoprefix(string postfix){
    stack<string> s;
    for(int i = 0; i < postfix.length(); i++){
        char c = postfix[i];
        if(isalnum(c)){
            s.push(string(1,c)); // we converted char to string and pushed it to stack 
        }
        else{
            string op2 = s.top(); s.pop();
            string op1 = s.top(); s.pop();
            string temp = c + op1 + op2;
            s.push(temp);
        }
    }
    return s.top();
}