// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int original = n;
//     int digits = 0;
//     int temp = n;

//     while (temp != 0) {
//         digits++;
//         temp /= 10;
//     }

//     int sum = 0;
//     temp = n;

//     while (temp != 0) {
//         int digit = temp % 10;
//         sum += pow(digit, digits);
//         temp /= 10;
//     }

//     if (sum == original)
//         cout << "Armstrong";
//     else
//         cout << "Not Armstrong";

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int orginal=n;
    int cnt=0;
    int temp=n;
    while (temp!=0)
    {
        cnt++;
        temp/=10;
    }
    
    int sum=0;
    while (n!=0)
    {
        int digit=n%10;
        sum=sum+pow(digit,cnt);
        n=n/10;
    }
    if(sum==orginal) cout<<"Yes";
    else cout<<"No";

    return 0;
}