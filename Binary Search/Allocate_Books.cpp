   #include <bits/stdc++.h>
using namespace std;
bool possible(int arr[],int n,int m,int limit){
    int student=1;
    int pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>limit)
        return false;
    if(pages+arr[i]<=limit){
        pages+=arr[i];

    }else{
        student++; 
        pages=arr[i];
        if(student>m){
            return false;
        }
    }
}
return true;
}
int main() {

     int n, m;//n hocce pages  m hochhe student
    cin >> n >> m;

    int arr[1000];

    int low = 0, high = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        high += arr[i];//sum of pages
        low = max(low, arr[i]); //maximum pages
    }

    int ans = high;//initial 

    while (low <= high) {
        int mid = (low + high) / 2;

        if (possible(arr, n, m, mid)) {
            ans = mid;
            high = mid - 1;
        } else
            low = mid + 1;
    }

    cout << ans;

    return 0;
}