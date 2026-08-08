#include <iostream>
#include <algorithm>
using namespace std;
struct Job
{
    char id;
    int deadline;
    int profit;
};
bool compare(Job a, Job b)
{
    return a.profit > b.profit;
}
int main()
{
    int n;
    cin >> n;
    Job jobs[100];
    int maxDeadline = 0;
//input niche 
    for (int i = 0; i < n; i++)
    {
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;

        if (jobs[i].deadline > maxDeadline)
            maxDeadline = jobs[i].deadline;
    }
//sort by profit
    sort(jobs, jobs + n, compare);

    char slot[100];

    for (int i = 1; i <= maxDeadline; i++)
        slot[i] = '-';

    int totalProfit = 0;

    cout << "Selected Jobs:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = jobs[i].deadline; j >= 1; j--)
        {
            if (slot[j] == '-')
            {
                slot[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    for (int i = 1; i <= maxDeadline; i++)
    {
        if (slot[i] != '-')
            cout << slot[i] << " ";
    }

    cout << "\nTotal Profit = " << totalProfit << endl;

    return 0;
}