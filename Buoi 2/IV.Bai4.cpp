#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n<4) cout << "NO SOLUTION";
	else if(n==4) cout << "3 1 4 2";
	else{
	    for(int i=1; i<=n; i++){
	        if(i%2==0) cout << i << " ";
	    }
	    for(int i=1; i<=n; i++){
	        if(i%2!=0) cout << i << " ";
	    }
	}
	return 0; 
} 
