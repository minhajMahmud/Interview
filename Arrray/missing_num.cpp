// brute froce 
#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n - 1];

//     for (int i = 0; i < n - 1; i++)
//         cin >> arr[i];

//     for (int i = 1; i <= n; i++) {

//         bool found = false;

//         for (int j = 0; j < n - 1; j++) {
//             if (arr[j] == i) {
//                 found = true;
//                 break;
//             }
//         }

//         if (!found) {
//             cout << i;
//             break;
//         }
//     }

//     return 0;
// }
using namespace std;
#include <bits/stdc++.h>
int main(){
int n;
cin >> n;

int arr[n - 1];
int sum = 0;

for (int i = 0; i < n - 1; i++) {
    cin >> arr[i];
    sum += arr[i];
}

int total = n * (n + 1) / 2;

cout << "Missing Number = " << total - sum;
}
/*
int main(){
int n;
cin >> n;

int arr[n - 1];

for (int i = 0; i < n - 1; i++) {
    cin >> arr[i];
  
}
int j=0;
for (int i = 1; i <=n; i++)
{    
    if(arr[j]==i){
        j++;

    }else{
        cout<<"missing number"<<i<<endl;
    }
}
}
*/