#include<bits/stdc++.h>
using namespace std;

string prefixtopostfix(string prefix){
    stack<string> s;
    for(int i = prefix.length() - 1; i >= 0; i--){
        char c = prefix[i];
        if(isalnum(c)){
            s.push(string(1,c)); // we converted char to string and pushed it to stack 
        }
        else{
            string op1 = s.top(); s.pop();
            string op2 = s.top(); s.pop();
            string temp = op1 + op2 + c;
            s.push(temp);
        }
    }
    return s.top();
}
int main(){
    string prefix;
    cout<<"Enter Prefix Expression: ";
    cin>>prefix;
    string postfix = prefixtopostfix(prefix);
    cout<<"Postfix Expression: "<<postfix<<endl;
    return 0;
}