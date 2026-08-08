#include <bits/stdc++.h>
using namespace std;
int main() {

    int binary;
    cin>>binary;
    int decimal=0;
    int power=0;
    while (binary>0)
    {
       int digit=binary%10;
       decimal=decimal+digit*pow(2,power);
       power++;
       binary=binary/10;

    }
    cout<<decimal;

    return 0;
}