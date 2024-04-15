#include <bits/stdc++.h>
using namespace std;

string truncateString(string s){
    bool check=true;
    while(check&&s.length()>0){
        check=false;
        if((s[0]-'0')%3==0){
            s.erase(0,1);
            check=true;
        }
        else if((s[s.length()-1]-'0')%3==0){
            s.erase(s.length()-1,1);
            check=true;
        }
        else if(((s[0]-'0')+(s[s.length()-1]-'0'))%3==0){
            s.erase(0,1);
            s.erase(s.length()-1,1);
            check=true;
        }
    }
    return s;
}

int main()
{

    string s;
    cin >> s;
    cout << truncateString(s);
    
    return 0;
}
