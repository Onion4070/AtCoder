// https://atcoder.jp/contests/abc485/tasks/abc485_a

#include <bits/stdc++.h>
using namespace std;

void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void yesno(bool b) { cout<<(b?"Yes":"No")<<endl; }

signed main() {
    fastio();
    int a,b;
    cin>>a>>b;
    yesno(a*b>0);
}