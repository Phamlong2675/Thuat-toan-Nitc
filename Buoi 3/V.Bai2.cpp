#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][n];
	int r1=0, r2=n-1, c1=0, c2=n-1, dem=1;
	while(dem<=n*n){
		for(int i=c1; i<=c2; i++){
			a[r1][i]=dem;
			dem++; 
		} 
		r1++;
		for(int i=r1; i<=r2; i++){
			a[i][c2]=dem;
			dem++; 
		} 
		c2--;
		for(int i=c2; i>=c1; i--){
			a[r2][i]=dem;
			dem++; 
		}  
		r2--; 
		for(int i=r2; i>=r1; i--){
			a[i][c1]=dem;
			dem++; 
		} 
		c1++; 
	} 
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << " "; 
		} 
		cout << endl; 
	} 
	
	return 0; 
}
