#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string,int> mp;
    mp["Mahmud"]=90;
    mp["Hasan"]=95;
    mp["Rakib"]=85;
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
}