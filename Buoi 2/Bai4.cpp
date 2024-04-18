#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
	cin >> s;
	int a[125]={0}; 
	for(int i=0; i<s.length(); i++){
		a[s[i]]++; 
	} 
	for(int i=0; i<125; i++){
		if(a[i]>1) cout << char(i) << " "; 
	} 
    
    return 0;
}
