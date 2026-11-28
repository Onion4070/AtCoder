// D1 https://paiza.jp/works/mondai/forest_contest_005/forest_contest_005__d_hitter
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void yesno(bool b) { cout<<(b?"Yes":"No")<<endl; }

signed main() {
    fastio();
    int n,m;
    cin>>n>>m;
    yesno(10*m>=3*n);
}