#include <bits/stdc++.h>
using namespace std;

int a[10], n, stop=0;
void khoitao(){
    cin >> n;
    for(int i=1; i<=n; i++){
        a[i]=i;
    }
}

void xuat(){
    for(int i=1; i<=n; i++){
        cout << a[i];
    }
    cout << endl;
}

void sinh(){
    int i=n-1;
    while(i>0&&a[i]>a[i+1]){
        i--;
    }
    if(i==0) stop=1;
    else{
        int k=n;
        while(a[i]>a[k]){
            k--;
        }
        swap(a[i],a[k]);
        int l=i+1, r=n;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
}

void ctrinh(){
    khoitao();
    while(stop==0){
        xuat();
        sinh();
    }
}

int main()
{
    ctrinh();
    
    return 0;
}
