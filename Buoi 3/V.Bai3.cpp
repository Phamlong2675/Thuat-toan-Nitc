#include <bits/stdc++.h>
using namespace std;

int find(vector<vector<int>>& a){
    int c=a[0].size();
    int r=a.size();
    int r1=-1, c1=-1, dem=2;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j]==1){
                r1=i;
                c1=j;
            }
        }
    }
    if(r1==-1&&c1==-1) return false;
    while(dem<=c*r){
        if(r1+1>=0 && r1+1<r && a[r1+1][c1]==dem){
            dem++;
            r1++;
        }
        else if(r1-1>=0 && r1-1<r && a[r1-1][c1]==dem){
            dem++;
            r1--;
        }
        else if(c1+1>=0 && c1+1<c && a[r1][c1+1]==dem){
            dem++;
            c1++;
        }
        else if(c1-1>=0 && c1-1<c && a[r1][c1-1]==dem){
            dem++;
            c1--;
        }
        else return false;
    }
    return true;
}

int main()
{
    vector<vector<int>> a;
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        vector<int> b;
        for(int j=0; j<m; j++){
            int t;
            cin >> t;
            b.push_back(t);
        }
        a.push_back(b);
    }
    if(find(a)) cout << "true";
    else cout << "false";
    
    return 0;
}
