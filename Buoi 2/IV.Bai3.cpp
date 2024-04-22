#include <bits/stdc++.h>
using namespace std;

int find(vector<int> a, int i, int j){
	int k = a[j]-a[i], dem=2;
	for(int x=j+1; x<a.size(); x++){
		if(a[x]-a[i]==k*dem) dem++; 
	} 
	return dem; 
} 

int day(vector<int> a){
	int max=0;
	for(int i=0; i<a.size()-1; i++){
		for(int j=i+1; j<a.size(); j++){
			if(max<find(a,i,j)) max=find(a,i,j); 
		}
	} 
	return max; 
} 

int main(){
	int n;
	cin >> n;
	vector<int> a;
	for(int i=0; i<n; i++){
		cin >> a[i]; 
	} 
	int s=day(a);
	cout << s; 
	return 0; 
} 
