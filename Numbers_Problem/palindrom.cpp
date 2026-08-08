// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int n;
// cin>>n;
// int orginal=n;
// int rev=0;
// while(n!=0){
//     rev=rev*10+n%10;
//     n=n/10;
// }
//   if(orginal==rev) cout<<"pal";
//   else cout<<" not";  

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int orginal=n;
    int rev=0;
    while (n!=0)
    {
   rev=rev*10+n%10;
      n=n/10;
    }
    if(orginal==rev)cout<<"yes";
    else cout<<"NO";

    return 0;
}