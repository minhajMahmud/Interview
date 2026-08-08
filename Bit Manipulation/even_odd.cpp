#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    /*If the last bit is 1, the number is Odd.
If the last bit is 0, the number is Even.
    */
if(n & 1){
    cout<<"odd";
}else {
    cout<<"even";
}
    return 0;
}