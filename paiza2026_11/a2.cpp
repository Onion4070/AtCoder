// A2 https://paiza.jp/works/mondai/vantan_2021/vantan_2021__q4_knn
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
template<typename T>
using v=vector<T>;
#define endl "\n"
#define int ll
#define rep(i,n) for (ll i=0; i<(ll)(n); ++i)
#define all(v) v.begin(),v.end()
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
template<typename T>inline bool chmin(T& a,const T& b){if(a>b){a=b;return 1;}return 0;}
void print(){cout<<endl;}
template<typename Head,typename... Tail>
void print(const Head &head,const Tail &... tail){cout<<head;((cout<<' '<<tail),...);cout<<endl;}

int sq(int x,int y) {
    return x*x+y*y;
}

signed main() {
    fastio();
    int n;
    cin>>n;
    // {x,y,c}
    vector<tuple<int,int,int>>t(n);

    // {r^2,class}
    vector<pair<int,int>> p(n);

    for (auto&[x,y,c]:t) cin>>x>>y>>c;

    int x0,y0;
    cin>>x0>>y0;

    rep(i,n) {
        auto[x,y,c]=t[i];
        auto&[d,cc]=p[i];
        d=sq(x-x0,y-y0);
        cc=c;
    }

    sort(all(p));

    int q;
    cin>>q;

    // n番目までに最も多く登場する色(等しい場合は最小の色)
    vector<int> majc(n);
    // RLE
    unordered_map<int,int> mp;
    int mx=0;
    int col=1e18;
    rep(i,n) {
        auto[d,c]=p[i];
        mp[c]++;
        if (mx==mp[c]) {
            chmin(col,c);
        }
        if (mx<mp[c]) {
            mx=mp[c];
            col=c;
        }
        majc[i]=col;
    }

    while (q--) {
        int k;
        cin>>k;
        print(majc[--k]);
    }
}