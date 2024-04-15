#include <bits/stdc++.h>
using namespace std;

int num(int n){
	long long s=1;
	for(int i=2; i<=n; i++){
		s*=i;
		while(s%10==0) s/=10;
		s%=100;  
	} 
	while(s%10==0) s/=10;
	return s%10; 
} 

int main()
{
	int n;
	cin >> n; 
	cout << num(n); 
    return 0;
} 
