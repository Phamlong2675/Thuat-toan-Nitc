#include <bits/stdc++.h>
using namespace std;

int ucln(int a, int b){
	if(b==0) return a;
	return ucln(b,a%b); 
} 
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
	int x, y, dem=0;
	cin >> x >> y; 
	snt(ucln(x,y));
	for(int i=ucln(x,y); i>=1; i--){
		if(a[i]==0&&x%i==0&&y%i==0){
			cout << i;
			break; 
		} 
		else dem++; 
	} 
	if(dem==ucln(x,y)) cout << -1; 
	
    return 0;
} 
