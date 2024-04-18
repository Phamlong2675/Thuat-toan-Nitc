#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    string s1=s;
    reverse(s.begin(),s.end());
    if(s1==s) return true;
    return false;
}

bool xau(int l, int r, string s){
    string s1=s.substr(l,r-l+1);
    if(palindrome(s1)) return true;
    return false;
}

int main()
{

    string s;
    cin >> s;
    int l, r;
    cin >> l >> r;
    if(xau(l,r,s)) cout << "YES";
    else cout << "NO";
    
    return 0;
}
