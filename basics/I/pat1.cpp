#include<iostream>
using namespace std;


class Solution{
public:
       void pattern(int N){
        for(int i = 0 ;i < N; i++){
            for (int j = 0; j <= i; j++)
            {
                cout<< "* ";

            }
           cout<<endl; 
        }
       }
};

int main(){
    Solution obj;
    int N = 5;
    obj.pattern(N);
    return 0;
}
