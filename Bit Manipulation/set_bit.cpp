#include <bits/stdc++.h>
using namespace std;
/* n = 10
1010
Set bit 0
1011
Answer = 11
*/
int main() {
int n,i;
cin>>n>>i;
n=n|(1<<i);
cout<<n;
    

    return 0;
}