#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c=='^')return 3;
    else if(c=='*' || c=='/')return 2;
    else if(c=='+' || c=='-')return 1;
    else return -1;
}

void infixtoprefix(string s){
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(')
            s[i] = ')';
        else if (s[i] == ')')
            s[i] = '(';
    }
    stack<char> st;
    string result;
    for(int i = 0;i<s.length();i++){
        char c = s[i];
        if(isalnum(c)){
            result+=c;
        }
        else if(c=='('){
            st.push('(');
        }
        else if(c==')'){
            while(!st.empty() && st.top()!='('){
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && (prec(st.top()) > prec(c) ||
                 (prec(st.top()) == prec(c) && c != '^'))){
                result+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());
    cout<<"Prefix Expression: "<<result<<endl;
}

int main(){
    string exp;
    cout<<"Enter Infix Expression: ";
    cin>>exp;
    infixtoprefix(exp);
    return 0;
}