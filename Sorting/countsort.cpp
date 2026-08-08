#include<iostream>
using namespace std;

int main(){

    int n;

    cin >> n;

    int arr[n];

    int maximum = 0;

    for(int i = 0; i < n; i++){

        cin >> arr[i];

        maximum = max(maximum, arr[i]);

    }

    int count[maximum + 1] = {0};

    for(int i = 0; i < n; i++)

        count[arr[i]]++;

    for(int i = 0; i <= maximum; i++){

        while(count[i]--)

            cout << i << " ";

    }

}