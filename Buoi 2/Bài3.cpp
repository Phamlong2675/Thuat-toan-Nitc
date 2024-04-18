#include <bits/stdc++.h>
using namespace std;

string chuanhoa(string s){
    string v="";
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A'&&s[i]<='Z'){
            v+=(s[i]+32);
        }
        else if(s[i]=='?') continue;
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')) v+=s[i];
        else if(s[i]==',') v+=", ";
        else v+=" ";
    }
    int tmp1=0, tmp2=0;
    string x="";
    for(int i=0; i<v.length(); i++){
        if(v[i]!=' '&&v[i]!=','){
            x+=v[i];
            tmp1=0;
            tmp2=0;
        }
        else if(v[i]==' '){
            if(tmp1==0){
                x+=v[i];
                tmp1=1;
            }
        }
        else{
            if(tmp1==1){
                x.erase(x.length()-1);
                tmp1=0;
            }
            if(tmp2==1){
                x.erase(x.length()-1);
            }
            x+=v[i];
            tmp2=1;
        }
    }
    if(tmp1==1) x.erase(x.length()-1);
    if(tmp2==1) x.erase(x.length()-1);
    x[0]-=32;
    x+="?";
    return x;
}

int main()
{
    string s;
    getline(cin,s);
    cout << chuanhoa(s);
    
    return 0;
}
