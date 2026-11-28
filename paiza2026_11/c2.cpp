// C2 https://paiza.jp/works/mondai/rank_test_problems_c_0001/rank_test_problems_c_0001__3
#include <bits/stdc++.h>
using namespace std;
template<typename T>
using v=vector<T>;
#define endl "\n"
#define all(v) v.begin(),v.end()
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
template<typename T>
T sum(const v<T>& v){return accumulate(all(v),T{});}
template<typename T>
istream &operator>>(istream &is,v<T> &v){for(T &in:v)is>>in;return is;}

signed main() {
    fastio();
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    cin>>a;
    cout<<(sum(a)<=m?"OK":"NG")<<endl;
}