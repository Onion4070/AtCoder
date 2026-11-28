// B2 https://paiza.jp/works/mondai/forest_contest_016/forest_contest_016__b_group_popularity_easy
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
template<typename T>
using v=vector<T>;
#define endl "\n"
#define int ll
#define rep(i,n) for (ll i=0; i<(ll)(n); ++i)
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
template<typename T>inline bool chmax(T& a,const T& b){if(a<b){a=b;return 1;}return 0;}
void print(){cout<<endl;}
template<typename Head,typename... Tail>
void print(const Head &head,const Tail &... tail){cout<<head;((cout<<' '<<tail),...);cout<<endl;}

struct Edge {
    int to;
    int cost;
};

signed main() {
    fastio();
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<Edge>> g(n+1);

    rep(i,m) {
        int a,b,f;
        cin>>a>>b>>f;
        g[a].push_back({b,f});
        g[b].push_back({a,f});
    }
    set<int>st;

    int ans=0;
    while (q--) {
        char op;
        int qi;

        cin>>op>>qi;
        if (op=='+') st.insert(qi);
        if (op=='-') st.erase(qi);
    }
    for (const int& val:st) {
        for (auto [to,cost]:g[val]) {
            chmax(ans,cost);
        }
    }
    print(ans);
}