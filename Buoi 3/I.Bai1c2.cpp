#include <bits/stdc++.h>
using namespace std;

long fibo(long long n){
    vector<long long> v(n+1);
    v[0]=0;
    v[1]=1;
    for(int i=2; i<=n; i++){
        v[i]=(v[i-1]+v[i-2])%100000007;
    }
    return v[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
    
    return 0;
}
