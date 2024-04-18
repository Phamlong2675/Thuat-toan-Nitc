#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
	cin >> n >> m;
	int a[n][m];
	string s=""; 
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j]; 
		} 
	} 
	for(int i=0; i<n-1; i++){
		for(int j=0; j<m-1; j++){
			s+=char(a[i][j]+48); 
			s+=char(a[i][j+1]+48); 
			s+=char(a[i+1][j]+48); 
			s+=char(a[i+1][j+1]+48); 
			s+=" "; 
		} 
	} 
	int dem=0; 
	string sub; 
	for(int i=0; i<s.length(); i+=5){
		sub=s.substr(i,4);
		if(s.find(sub)==i) dem++; 
	} 
	cout << dem; 
    
    return 0;
}
