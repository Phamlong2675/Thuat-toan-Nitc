#include <bits/stdc++.h>
using namespace std;

int a[10000001]={0}; 
void snt(int n){
	a[0]=a[1]=1; 
	for(int i=2; i<=sqrt(n); i++){
		if(a[i]==0){
			int j=i*i;
			while(j<=n){
				a[j]=1;
				j+=i; 
			} 
		} 
	} 
} 

int main()
{
	int n;
	cin >> n;
	snt(n);
	int mod=22082018, d=0; 
	for(int i=2; i<=n; i++){
		if(a[i]==0) d=(d+i%mod)%mod; 
	} 
	cout << d; 
    return 0;
} 
