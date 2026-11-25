// https://atcoder.jp/contests/abc485/tasks/abc485_d

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
template<typename T>
using v=vector<T>;

#define endl "\n"
#define int ll
#define rep(i, n) for (ll i=0; i<(n); ++i)
void fastio() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }
void yesno(bool b) { cout<<(b?"Yes":"No")<<endl; }

template<typename T>
istream &operator>>(istream &is,v<T> &v){for(T &in:v)is>>in;return is;}
template<typename T>
ostream &operator<<(ostream &os,const v<T> &v){for(size_t i=0;i<v.size();++i)os<<(i?" ":"")<<v[i];return os;}

signed main() {
    fastio();
    int n;
    cin>>n;
    string s;
    cin>>s;

    // 右からABCを含む最小のインデックスを検索
    int ca,cb,cc;
    ca=cb=cc=0;
    int maxi=-1e9;
    for (int i=s.size()-1;i;i--) {
        if(s[i]=='A')ca++;
        if(s[i]=='B')cb++;
        if(s[i]=='C')cc++;
        if (ca>0&&cb>0&&cc>0) {
            maxi=max(maxi,i);
            break;
        }
    }
    if(maxi<0) {
        cout<<0<<endl;
        return 0;
    }

    // 左からABCを探索
    ca=cb=cc=0;
    int mini=1e9;
    rep(i,s.size()) {
        if(s[i]=='A')ca++;
        if(s[i]=='B')cb++;
        if(s[i]=='C')cc++;
        if (ca>0&&cb>0&&cc>0) {
            mini=min(mini,i);
            break;
        }
    }

    if (mini==1e9) {
        cout<<0<<endl;
        return 0;
    }

    int r=mini;
    ca=cb=cc=0;
    int ans=0;
    // 尺取り法
    for (int i=mini; i<maxi; i++) {
        while ((ca<1||cb<1||cc<1) && r<maxi) {
            r++;
            if(s[r]=='A')ca++;
            if(s[r]=='B')cb++;
            if(s[r]=='C')cc++;
        }
        if (ca<1||cb<1||cc<1) break;
        ans+=maxi-r;
        if(s[i+1]=='A')ca--;
        if(s[i+1]=='B')cb--;
        if(s[i+1]=='C')cc--;
    }

    cout<<ans<<endl;
    return 0;
}