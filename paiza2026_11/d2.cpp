// D2 https://paiza.jp/works/mondai/forest_contest_013/forest_contest_013__d_isosceles
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void yesno(bool b) { cout<<(b?"Yes":"No")<<endl; }

signed main() {
    fastio();
    int a,b,c;
    cin>>a>>b>>c;
    yesno(a==b||b==c||c==a);
}