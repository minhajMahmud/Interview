#include <bits/stdc++.h>
using namespace std;
struct Activity
{
   int start;
   int finish;
};
bool compare(Activity a, Activity b){
    return a.finish<b.finish;
}

int main() {

    int n;
    cin>>n;
    Activity arr[100];
for (int i = 0; i < n; i++)
{
    cin>>arr[i].start>> arr[i].finish;
}
sort(arr,arr+n,compare);
    cout << "Selected Activities:\n";

    cout << "(" << arr[0].start << "," << arr[0].finish << ")\n";

    int lastFinish = arr[0].finish;

    for (int i = 1; i < n; i++)
    {
        if (arr[i].start >= lastFinish)
        {
            cout << "(" << arr[i].start << "," << arr[i].finish << ")\n";
            lastFinish = arr[i].finish;
        }
    }
    return 0;
}