// A1 https://paiza.jp/works/mondai/forest_contest_009/forest_contest_009__a_egg4
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
template<typename T>
using v=vector<T>;
#define endl "\n"
#define rep(i,n) for (ll i=0; i<(ll)(n); ++i)
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void print(){cout<<endl;}
template<typename Head,typename... Tail>
void print(const Head &head,const Tail &... tail){cout<<head;((cout<<' '<<tail),...);cout<<endl;}
template<typename T>
istream &operator>>(istream &is,v<T> &v){for(T &in:v)is>>in;return is;}

signed main() {
    fastio();
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    cin>>a;
    int ans=0;
    rep(bit,1<<n) {
        int s=0;
        rep(i,n) {
            if (bit&(1<<i)) {
                s+=a[i];
            }
        }
        if (s==k) ans++;
    }
    print(ans);
}