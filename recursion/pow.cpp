class Solution {
private:
    double power(double x,long long n){
        if(n==0){
            return 1;
        }
        if(n==1){
            return x;
        }
        if(n%2==0){
           return power(x*x,n/2);
        }
        else{
            return x*power(x*x,n/2);
        }
    }
public:
    double myPow(double x, int n) {
       long long N = n;
       if(N<0){
        return 1.0/power(x, -N);
       }
       else{
        return power(x,N);
       }
    }
};