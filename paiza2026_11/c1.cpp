// C1 https://paiza.jp/works/mondai/forest_contest_011/forest_contest_011__c_overwork
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
template<typename T>
ostream &operator<<(ostream &os,const v<T> &v){for(size_t i=0;i<v.size();++i)os<<(i?" ":"")<<v[i];return os;}

signed main() {
    fastio();
    vector<int>m(30);
    cin>>m;
    int ans=0;
    rep(i,30) {
        ans+=max(0,m[i]-8);
    }
    print(ans);
}