class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i =0;
        long long ans = 0;
        int sign = 1;
        while(i<n && s[i]== ' '){
            i++;
        }
        if(s[i]=='-'){
            sign = -1;i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        while(i<n && isdigit(s[i])){
            int digit = s[i] - '0';

            if(ans > INT_MAX / 10 ||
              (ans == INT_MAX / 10 && digit > 7)) {

                if(sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            ans = ans * 10 + digit;
            i++;
        }
  
        return sign*ans ;
    }
};