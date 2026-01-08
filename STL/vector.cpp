#include<bits/stdc++.h>
using namespace std;

// using auto instead of defining , defines automatically

class Solution{
public:
void explainVector(){
    vector<int> v;
    v.push_back(1); // khali arr ch 1 add kr dindA, os ch jina mrji add krdo
    v.emplace_back(2); // nvi jgah bnakke osi arr ch add krdinda
    v.emplace_back(3);
    cout<<v[0]<<v[1]<<endl<<v.back()<<endl; // v.back() gives last element in { , , , }
    vector<int>::iterator s = v.begin();
    s++;
    cout<<*s<<" "<<endl;
    for (auto d = v.begin();  d != v.end(); d++) // ik ik krke elements ange
    {
       cout<<*(d)<<" ";
    }
    for (auto d:v)// same hi hai, ik ik krke element duga
    {
        cout<<d<<" "<<endl;
    }
    


    vector<pair<int,int>> vec;
    vec.push_back({1,3});
    vec.emplace_back(1,2); // emplace jdo pair de case ch use kriye ta ape 2 nu pair smjh lenda
    cout<<vec[0].second<<vec[1].second<<endl;
    


    vector<int> vec2(5,100); // {100,100,100,100,100}
    cout<<vec2[0]<<" "<<vec2[3]<<endl;
    vector<int> vec3(5); // { , , , , } garbage value 5 jgah te , ya fer 0-0-0-is trh
    cout<<vec3[2]<<" "<<vec3[4]<<endl;
    vector<int> v2(vec2); // v2 copies vec2
    cout<< v2[1];
}
};
int main(){
    Solution obj;
    obj.explainVector();


}


