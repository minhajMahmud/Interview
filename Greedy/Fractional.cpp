#include <iostream>
#include <algorithm>
using namespace std;

struct Item
{
    int weight;
    int value;
    double ratio;
};
bool compare(Item a, Item b)
{
    return a.ratio > b.ratio;
}
int main()
{
    int n;
    cin >> n;
    Item arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].weight >> arr[i].value;
        arr[i].ratio = (double)arr[i].value / arr[i].weight;
    }
    int capacity;
    cin >> capacity;
    sort(arr, arr + n, compare);
    double totalValue = 0.0;
    cout << "Selected Items:\n";
    for (int i = 0; i < n; i++)
    {
        if (capacity == 0)
            break;
        if (arr[i].weight <= capacity)
        { cout << "Take Full Item (Weight="<< arr[i].weight<< ", Value="<< arr[i].value << ")\n";
            totalValue += arr[i].value;
            capacity -= arr[i].weight;
        }
        else
        {
            double fraction = (double)capacity / arr[i].weight;
            cout << "Take "  << fraction << " part of Item (Weight="<< arr[i].weight<< ", Value="<< arr[i].value<< ")\n";
            totalValue += arr[i].value * fraction;
            capacity = 0;
        }
    }

    cout << "\nMaximum Value = " << totalValue << endl;

    return 0;
}