// A3 https://paiza.jp/works/mondai/rank_test_problems_s_0002/rank_test_problems_s_0002__3
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
template<typename T>
using v=vector<T>;
#define endl "\n"
#define int ll
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void print(){cout<<endl;}
template<typename Head,typename... Tail>
void print(const Head &head,const Tail &... tail){cout<<head;((cout<<' '<<tail),...);cout<<endl;}
template<typename T>
istream &operator>>(istream &is,v<T> &v){for(T &in:v)is>>in;return is;}

signed main() {
    fastio();
    int n,c;
    cin>>n>>c;
    vector<int>a(n);
    cin>>a;
    int l,r;
    l=0;
    r=1e18;

    while(l<r) {
        int mid=(l+r)/2;
        int s=0;
        for (auto ai:a) s+=mid/ai;
        if (s>=c) r=mid;
        else l=mid+1;
    }
    print(l);
}