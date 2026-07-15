#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c == '^') return 3;
    else if(c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    else return -1;
}

string prefixtoinfix(string prefix){
    stack<string> s;
    for(int i = prefix.length() - 1; i >= 0; i--){
        char c = prefix[i];
        if(isalnum(c)){
            s.push(string(1,c)); // we converted char to string and pushed it to stack 
        }
        else{
            string op1 = s.top(); s.pop();
            string op2 = s.top(); s.pop();
            string temp = "("+ op1 + c + op2 + ")";
            s.push(temp);
        }
    }
    return s.top();
}

int main(){
    string prefix;
    cout<<"Enter Prefix Expression: ";
    cin>>prefix;
    string infix = prefixtoinfix(prefix);
    cout<<"Infix Expression: "<<infix<<endl;
    return 0;
}