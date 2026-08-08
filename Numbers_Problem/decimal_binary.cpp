#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int binary=0;
    int place=1;
    while (n>0)  
    {
        int rem=n%2;
        binary=binary+rem*place;
        place*=10;
        n=n/2;
    }
    cout<< binary;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int binary[32];
    int i=0;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<binary[j];
    }

    return 0;
}
    */