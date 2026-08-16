/*
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
     if (n <2) {
        return false;
    }
    for (int i = 0; i*i <= n; i++)
    {
       if(n%i==0){
        return false;
       }
    }
    return true;
}
int main() {
    int n;
    cin >> n;
int cnt=0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            cnt++;
        }
    }

    cout << "Prime"<<cnt;

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    int count=0;
    for (int i = 0; i <=n; i++){
    bool prime=true;
    
      for (int j = 0; j < i; j++)
      {
        if(i%j==0){
        prime=false;
        break;
      }
    }
      if(prime) count++;  
    }
    
   cout<<count; 

    return 0;
}