#include <bits/stdc++.h>
using namespace std;

int product(int n){
	if(n==1) return 1;
	if(n==0) return 10;
	int a=0, b=0;
	for(int i=9; i>=2; i--){
		while(n%i==0){
			a=a*10+i;
			n/=i; 
		} 
	} 
	while(a>0){
		b=b*10+a%10;
		a/=10; 
	} 
	if(n>1) return -1;
	return b; 
} 

int main()
{
	int n;
	cin >> n;
	cout << product(n); 
	
    return 0;
} 
