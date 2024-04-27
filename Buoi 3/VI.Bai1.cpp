#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

void s(vector<int>& a){
    for(int i=0; i<a.size()-1; i++){
        for(int j=i+1; j<a.size(); j++){
            if((sum(a[i])>sum(a[j]))||(sum(a[i])==sum(a[j])&&a[i]>a[j]))
            swap(a[i],a[j]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int k; cin >> k;
        a.push_back(k);
    }
    s(a);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}
