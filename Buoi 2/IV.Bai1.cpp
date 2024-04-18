#include <bits/stdc++.h>
using namespace std;

int search(int x, int n, int a[]){
	int l=0, r=n-1;
	while(l<=r){
		int mid=(l+r)/2; 
		if(x==a[mid]) return mid;
		else if(x>a[mid]) l=mid+1;
		else r=mid-1; 
	} 
	return -1;
} 

int main()
{
    int x, n;
    cin >> x >> n; 
	int a[n]; 
	for(int i=0; i<n; i++){
		cin >> a[i]; 
	} 
	if(search(x,n,a)>0) cout << "true";
	else cout << "false"; 
    
    return 0;
}
