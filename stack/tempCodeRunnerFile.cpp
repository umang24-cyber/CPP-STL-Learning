else{
            while(!st.empty() && (prec(st.top()) > prec(c) ||
                 (prec(st.top()) == prec(c) && c != '^'))){
                result+=st.top();
                st.pop();
            }
            st.push(c);
        }