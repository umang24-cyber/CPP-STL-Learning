#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
      vector<int> printDivisors(int n){
        vector<int> res;
        for (int i = 1; i<sqrt(n) ; i++ ){
            if(n%i == 0){
                res.push_back(i);

                if(i != n/i){
                    res.push_back(n/i);
                }
            }

        }
        sort(res.begin(),res.end());
        return res;
      }
};

int main(){
    Solution obj;
    int n;
    cout<<"Enter no. : "<<endl;
    cin>>n;
    vector<int> result = obj.printDivisors(n);

    cout<<"Divisors of "<< n<< ": ";
    for (int val : result){
        cout << val<< " "; 
    }
    cout<< endl;
    return 0;
}