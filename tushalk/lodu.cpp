
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#ifndef ONLINE_JUDGE
#include "problem_setting/debug.hpp"
#else
#define debug(...) 8
#endif

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
template<class T> void print(vector<T> v){for(auto z:v)cout<<z<<" ";cout<<"\n";};

#define double long double
#define fo(i,a,b)   for(ll i=a;i<b;i++)
#define rfo(i,a,b)  for(ll i=a;i>=b;i--)
#define each(a) for(auto z:a)
#define pb emplace_back
#define ff first
#define ss second
#define rr return 
#define sz(v) (ll)(v.size())
#define vin(temp,n,T) vector<T> temp(n);fo(i,0,n)cin>>temp[i];
#define all(v)    v.begin(),v.end()
#define in(n) ll n;cin>>n;
#define sin(s) string s;cin>>s;
#define in2(a,b) ll a,b;cin>>a>>b;
#define on(n) cout<<n<<"\n";
#define yes  cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define mod 1000000007
#define inf 1e18

typedef long long ll;
typedef pair<ll, ll> pl;
typedef vector<ll> vl;

void solve(){
    
}

int main(){
    fastio()

    ll t=1;
    //cin>>t;
    while(t--){
        //debug(t);
        solve();
    }

    return 0;
}