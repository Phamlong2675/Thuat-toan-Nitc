#include <bits/stdc++.h>
using namespace std;

int num(int n){
    if(n<=5) return n;
    int x=1;
    while(n>0){
        n-=5*x;
        x*=2;
    }
    if(n==0) return 5;
    x/=2;
    n+=5*x;
    int dem=0;
    while(n>0){
        n-=x;
        dem++;
    }
    return dem;
}

int main()
{
    int n;
    cin >> n;
    cout << num(n);

    return 0;
}
