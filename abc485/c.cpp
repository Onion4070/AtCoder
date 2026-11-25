// https://atcoder.jp/contests/abc485/tasks/abc485_c

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
template<typename T>
using v=vector<T>;
#define int ll
#define endl "\n"
#define rep(i,n) for (ll i=0; i<(ll)(n); ++i)
#define rep1(i,n) for (ll i=1; i<=(ll)(n); ++i)
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void yesno(bool b) { cout<<(b?"Yes":"No")<<endl; }
template<typename T>
istream &operator>>(istream &is,v<T> &v){for(T &in:v)is>>in;return is;}
template<typename T>
ostream &operator<<(ostream &os,const v<T> &v){for(size_t i=0;i<v.size();++i)os<<(i?" ":"")<<v[i];return os;}
void print(){cout<<endl;}
template<typename Head,typename... Tail>
void print(const Head &head,const Tail &... tail){cout<<head;((cout<<' '<<tail),...);cout<<endl;}

signed main() {
    fastio();
    int n;
    cin>>n;
    vector<int>c(n);
    cin>>c;

    // ランレングス圧縮({値,数})
    vector<pair<int,int>>p;
    int cur=c[0];
    int cnt=1;
    rep1(i,n-1) {
        if(c[i]==cur) cnt++;
        else {
            p.push_back({cur,cnt});
            cur=c[i];
            cnt=1;
        }
    }
    p.push_back({cur,cnt});
  
    vector<int>ans;
    rep(i,p.size()) {
        // 両端->隣が最短
        if(i==0) {
            rep(j,p[i].second) {
                ans.push_back(p[i].second-j);
            }
            continue;
        }
        if(i==p.size()-1) {
            rep(j,p[i].second) {
                ans.push_back(j+1);
            }
            continue;
        }
        // 連続数1->隣が最短
        if(p[i].second==1) {
            ans.push_back(1);
        }
        // 真ん中で分けてそれぞれの端が最短
        else {
            rep(j,p[i].second) {
                if(j<p[i].second/2) {
                    ans.push_back(j+1);
                }
                else {
                    ans.push_back(p[i].second-j);
                }
            }
        }
    }
    print(ans);
    cout<<endl;
}