#include <bits/stdc++.h>
using namespace std;

int fact(int digit) {
    int fact = 1;

    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n;
    cin >> n;

    int original = n;
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum += fact(digit);
        n /= 10;
    }

    if (sum == original)
        cout << "True";
    else
        cout << "False";

    return 0;
}