// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int n;
// cin >> n;

// int arr[n];

// for (int i = 0; i < n; i++)
//     cin >> arr[i];
// int minimum=arr[0];
// int secondMinimum=INT_MAX;
// for (int i = 1; i < n; i++){
//     if(arr[i]<minimum){
//         secondMinimum=minimum;
//         minimum=arr[i];
//     }else if(arr[i]<secondMinimum&&arr[i]!=minimum){
//         secondMinimum=arr[i];
//     }
// }  
//     cout<<secondMinimum;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
        int minimum=arr[0];
        int secondmin=INT_MAX;
    
    for (int i = 1; i < n; i++){
        if(arr[i]<minimum){
            secondmin=minimum;
            minimum=arr[i];
        }else if(arr[i]<secondmin&&arr[i]!=minimum){
            secondmin=arr[i];
        }

    }
       cout<<secondmin;

    return 0;
}