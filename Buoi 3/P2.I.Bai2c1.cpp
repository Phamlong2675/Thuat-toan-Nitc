#include <bits/stdc++.h>
using namespace std;

long fibo(long long n){
    if(n<=1) return n;
    return (fibo(n-1)+fibo(n-2))%100000007;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
    
    return 0;
}
