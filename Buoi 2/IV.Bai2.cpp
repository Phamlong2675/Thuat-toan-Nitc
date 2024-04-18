#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
	cin >> n;
	int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i]; 
	} 
	int start=0, end=0, curstart=0, sum=a[0], maxsum=a[0]; 
    for(int i=1; i<n; i++){
        if(sum<0){
        	sum=a[i];
			curstart=i; 
		} else sum+=a[i]; 
		if(sum>maxsum){
			maxsum=sum;
			start=curstart;
			end=i; 
		} 
	} 
	cout << start+1 << " " << end+1 << " " << maxsum; 
    
    return 0;
}
