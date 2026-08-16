// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);

//     string word = "";
// //eta word er revrse
//     for (int i = 0; i <= s.length(); i++)
//     {
//         if (i == s.length() || s[i] == ' ')
//         {
//             reverse(word.begin(), word.end());

//             cout << word;

//             if (i != s.length())
//                 cout << " ";

//             word = "";
//         }
//         else
//         {
//             word += s[i];
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
getline(cin,s);
int start=0;
for (int i = 0; i <=s.length(); i++)
{
    if(i==s.length()||s[i]==' '){
          reverse(s.begin()+start,s.begin()+i);
          start=i+1;
    }
}
cout<<s;   
    return 0;
}