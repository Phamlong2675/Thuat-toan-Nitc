#include <bits/stdc++.h>
using namespace std;

void phanso(int a, int b){
    if(a==0||b==0) return;
    if(b%a==0){
        cout << 1 << " " << b/a << endl;
        return;
    }
    int x=(b/a)+1;
    cout << 1 << " " << x << endl;
    phanso(a*x-b,b*x);
}

int main()
{
    int a, b;
    cin >> a >> b;
    phanso(a,b);
    
    return 0;
}
