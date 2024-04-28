#include <bits/stdc++.h>
using namespace std;

long giaithua(int n){
    if(n==0) return 1;
    return (n*giaithua(n-1))%100000007;
}

int main()
{
    int n;
    cin >> n;
    cout << giaithua(n);
    
    return 0;
}
