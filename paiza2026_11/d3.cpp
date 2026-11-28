// D3 https://paiza.jp/works/mondai/rank_test_problems_d_0002/rank_test_problems_d_0002__4
#include <bits/stdc++.h>
using namespace std;
template<typename T>
using v=vector<T>;
#define endl "\n"
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void print(){cout<<endl;}
template<typename Head,typename... Tail>
void print(const Head &head,const Tail &... tail){cout<<head;((cout<<' '<<tail),...);cout<<endl;}
template<typename T>
ostream &operator<<(ostream &os,const v<T> &v){for(size_t i=0;i<v.size();++i)os<<(i?" ":"")<<v[i];return os;}

signed main() {
    fastio();
    int n;
    cin>>n;
    print((char)('A'+n-1));
}