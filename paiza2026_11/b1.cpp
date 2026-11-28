// B1 https://paiza.jp/works/mondai/forest_contest_008/forest_contest_008__task_scheduling
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
template<typename T>
using v=vector<T>;
#define endl "\n"
#define rep(i,n) for (ll i=0; i<(ll)(n); ++i)
#define all(v) v.begin(),v.end()
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void print(){cout<<endl;}
template<typename Head,typename... Tail>
void print(const Head &head,const Tail &... tail){cout<<head;((cout<<' '<<tail),...);cout<<endl;}
template<typename F,typename S>
istream &operator>>(istream &is,pair<F,S> &p){is>>p.first>>p.second;return is;}

bool cmp(pair<int,int>a, pair<int,int>b) {
    if (a.second!=b.second) return a.second<b.second;
    else return a.first<b.first;
}

signed main() {
    fastio();
    int n;
    cin>>n;
    vector<pair<int,int>>time(n);
    rep(i,n) cin>>time[i];
    sort(all(time),cmp);
    int cur=0,ans=0;
    rep(i,n) {
        auto[s,t]=time[i];
        if(cur<=s) {
            cur=t;
            ans++;
        }
    }
    print(ans);
}