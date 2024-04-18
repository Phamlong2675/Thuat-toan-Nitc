#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    string s1=s;
    reverse(s.begin(),s.end());
    if(s1==s) return true;
    return false;
}

int main()
{

    string s;
    cin >> s;
    if(palindrome(s)) cout << "YES";
    else cout << "NO";
    
    return 0;
}
