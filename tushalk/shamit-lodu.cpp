/***                                                ***
 *    author:  tushal_07                              *
 *    created: 17.09.2025 13:08:14                    *
 *                                                    *
 ***                                                ***/

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

#define int long long

void solve(){
    
}

int32_t main(){
    fastio()

    int t=1;
    //cin>>t;
    while(t--){
        //debug(t);
        solve();
    }

    return 0;
}