#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
	cin >> s;
	int count=0; 
	for(int i=0; i<s.length(); i++){
		string sub=""; 
		for(int j=i; j<s.length(); j++){
			sub+=s[j]; 
			if(s.find(sub)==i) count++; 
		}
	} 
	cout << count; 
    
    return 0;
}
