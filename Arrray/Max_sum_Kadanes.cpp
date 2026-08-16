#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
//kadanes algo
int arr[n];

for (int i = 0; i < n; i++)
    cin >> arr[i];
int current=arr[0];
int maxSum=arr[0];
for (int i = 1; i < n; i++)
{
    current=current+arr[i];
    if(current>maxSum){
        maxSum=current;
    }if(current<0) current=0;
}
cout<<"Maximu"<<maxSum;
    return 0;
}






/*
jodi subarray ta print korte bole
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int currentSum = 0;
    int maxSum = arr[0];

    int start = 0;
    int end = 0;
    int tempStart = 0;

    for(int i = 1; i < n; i++) {

        currentSum += arr[i];

        if(currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }

        if(currentSum < 0) {
            currentSum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Maximum Sum = " << maxSum << endl;

    cout << "Subarray : ";

    for(int i = start; i <= end; i++)
        cout << arr[i] << " ";

    return 0;
}
*/