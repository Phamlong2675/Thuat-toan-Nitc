#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int m,int r){
    vector<int> L(a+l,a+m+1);
    vector<int> R(a+m+1,a+r+1);
    int i=0, j=0, k=l;
    while(i<L.size()&&j<R.size()){
        if(L[i]>R[j]){
            a[k]=R[j];
            k++;
            j++;
        }
        else{
            a[k]=L[i];
            k++;
            i++;
        }
    }
    while(i<L.size()){
        a[k]=L[i];
        k++;
        i++;
    }
    while(j<R.size()){
        a[k]=R[j];
        k++;
        j++;
    }
}

void mergeSort(int a[],int l,int r){
    if(l<r){
        int m = l + (r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n], x[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> v;
    for(int i=0; i<n; i++){
        if(a[i]!=-1) v.push_back(a[i]);
    }
    int b[v.size()];
    for(int i=0; i<v.size(); i++){
        b[i]=v[i];
    }
    mergeSort(b,0,v.size()-1);
    int j=0;
    for(int i=0; i<n; i++){
        if(a[i]!=-1){
            x[i]=b[j];
            j++;
        }
        else x[i]=a[i];
    }
    for(int i=0; i<n; i++){
        cout << x[i] << " ";
    }
    return 0;
}
