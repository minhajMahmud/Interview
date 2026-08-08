#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int start[100];
    int end[100];

    for(int i=0;i<n;i++)
        cin>>start[i];

    for(int i=0;i<n;i++)
        cin>>end[i];

    sort(start,start+n);
    sort(end,end+n);

    int rooms=1;
    int answer=1;

    int i=1;
    int j=0;

    while(i<n && j<n)
    {
        if(start[i] < end[j])
        {
            rooms++;

            if(rooms>answer)
                answer=rooms;

            i++;
        }
        else
        {
            rooms--;
            j++;
        }
    }

    cout<<"Minimum Rooms = "<<answer;

    return 0;
}