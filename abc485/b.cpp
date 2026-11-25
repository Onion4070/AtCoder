// https://atcoder.jp/contests/abc485/tasks/abc485_b

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
template<typename T>
using v=vector<T>;
#define rep(i,n) for (ll i=0; i<(ll)(n); ++i)
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void print(){cout<<endl;}
template<typename Head,typename... Tail>
void print(const Head &head,const Tail &... tail){cout<<head;((cout<<' '<<tail),...);cout<<endl;}
template<typename T>
istream &operator>>(istream &is,v<T> &v){for(T &in:v)is>>in;return is;}

signed main() {
    fastio();
    int n,m;
    cin>>n>>m;
    string x(m,'x');
    vector<string> s(n);
    cin>>s;
    rep(i,n) {
        if(s[i]==x) {
            print("Faucet ",i+1);
            return 0;
        }
    }
    rep(j,m) {
        if(s[0][j]=='x') {
            print("Drain ",j+1);
            return 0;
        }
    }
}