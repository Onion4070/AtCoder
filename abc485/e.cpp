// https://atcoder.jp/contests/abc485/tasks/abc485_e

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
template<typename T>
using v=vector<T>;
#define endl "\n"
#define int ll
#define rep(i,n) for (ll i=0; i<(ll)(n); ++i)
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void yesno(bool b) { cout<<(b?"Yes":"No")<<endl; }
void print(){cout<<endl;}
template<typename Head,typename... Tail>
void print(const Head &head,const Tail &... tail){cout<<head;((cout<<' '<<tail),...);cout<<endl;}
template<typename T>
istream &operator>>(istream &is,v<T> &v){for(T &in:v)is>>in;return is;}
template<typename T>
ostream &operator<<(ostream &os,const v<T> &v){for(size_t i=0;i<v.size();++i)os<<(i?" ":"")<<v[i];return os;}

struct Edge {
    int to, color;
};

signed main() {
    fastio();
    int n,m;
    cin>>n>>m;

    vector<vector<Edge>> g(n+1);
    rep(i,m) {
        // u->vの辺の色:c
        int u,v,c;
        cin>>u>>v>>c;
        g[u].push_back({v,c});
    }

    // -1: 未訪問
    // -2: 探索済み
    // それ以外: 最初に到達した色
    vector<int> first_color(n+1,-1);

    // {現在の頂点,直前の色,距離}
    queue<tuple<int,int,int>> q;

    // 初めの色は無
    q.push({1,0,0});

    // BFS
    while (q.size()) {
        auto [v,c,d]=q.front();
        q.pop();

        // 頂点Nに到達
        if (v==n) {
            cout<<d<<endl;
            return 0;
        }

        // 全ての出辺を探索済み
        if (first_color[v]==-2) continue;

        // 初めてvに到達
        if (first_color[v]==-1) {
            first_color[v]=c;

            for (auto [to,color]:g[v]) {
                // 同じ色は続けて通れない
                if (color==c) continue;
                q.push({to,color,d+1});
            }
        }

        // 異なる色で頂点vに到達
        else if (first_color[v]!=c) {
            // 初回に通れなかった辺を探索
            for (auto [to,color]:g[v]) {
                // 異なる色は探索済み
                if (first_color[v]!=color) continue;

                q.push({to,color,d+1});
            }
            // 探索済み
            first_color[v]=-2;
        }
    }

    // 頂点Nに到達不可
    cout<<-1<<endl;
}