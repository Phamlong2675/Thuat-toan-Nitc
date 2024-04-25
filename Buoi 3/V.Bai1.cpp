#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int di1[]={1,-1}, di2[]={2,-2}, x=s[0]-96, y=s[1]-48, dem=0;
    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
            if((x-di2[i]<=8&&x-di2[i]>=1)&&(y-di1[j]<=8&&y-di1[j]>=1)) dem++;
        }
    }
    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
            if((x-di1[j]<=8&&x-di1[j]>=1)&&(y-di2[i]<=8&&y-di2[i]>=1)) dem++;
        }
    }
    cout << dem;
    
    return 0;
}
