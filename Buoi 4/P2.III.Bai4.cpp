#include <bits/stdc++.h>
using namespace std;

int a[20], b[20], n, c, stop=0, maxi=0;
void khoitao(){
    cin >> c >> n;
    for(int i=1; i<=n; i++){
        a[i]=0;
        cin >> b[i];
    }
}

void sinh(){
    int i=n;
    while(i>0&&a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) stop=1;
    else a[i]=1;
}

void ctrinh(){
    khoitao();
    while(stop==0){
        sinh();
        int s=0;
        for(int i=1; i<=n; i++){
            if(a[i]==1) s+=b[i];
        }
        if(s<=c&&s>maxi) maxi=s;
    }
}

int main()
{
    ctrinh();
    cout << maxi;
    
    return 0;
}
