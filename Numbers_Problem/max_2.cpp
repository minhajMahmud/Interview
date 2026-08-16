#include <bits/stdc++.h>
using namespace std;
int main() {

    int a, b, c;
cin >> a >> b >> c;

int mx1 = max(a, max(b, c));
int mx2;

if (mx1 == a)
    mx2 = max(b, c);
else if (mx1 == b)
    mx2 = max(a, c);
else
    mx2 = max(a, b);

cout << mx1 << " " << mx2;

    return 0;
}