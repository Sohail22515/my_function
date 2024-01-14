
// TRY IT ONE MORE TIME !!


#include<iostream>
#include<vector>
#include<cmath>
#include<wchar.h>
#include <cstdio> 
#include<algorithm>
#include<string>
#include<set>
#include<map>
#include <utility>
#include <cstring>
//#include<bits/stdc++.h>
 
  #define loo(n)         for(int i=0;i<n;++i)
  #define loop(i,a,n)    for(int i=a;i<n;++i)
  #define lloo(n)        for(ll int i=0;i<n;++i)
  #define lloop(i,a,n)   for(ll int i=a;i<n;++i)
  #define all(v)         v.begin() , v.end()
  #define maxx(v)        *max_element(v.begin(),v.end())
  #define minn(v)        *min_element(v.begin(),v.end())
  #define ll             long long 
  #define in(x)          int x; cin>>x;
  #define pb             push_back
  #define nl             "\n"
  #define vi             vector<int>
  #define fast           ios::sync_with_stdio(false);cin.tie(NULL);
 
  using namespace std;
  
  void sub_arry_with_sum0(){
    ll int n;
    cin>>n;
    ll int arr[n];
    ll int sum=0,f=0;
    map<ll int,ll int>mp;
    mp[0]=1;
    loo(n){
      cin>>arr[i];
      sum+=(arr[i]);
      mp[sum]++;
      if(mp[sum]>=2){f++;}
    }
    if(f>=1){cout<<"YES\n"; }
    else if(f==0){cout<<"NO\n";}
  }
  
  int main(){
  fast
    
      sub_arry_with_sum0();
    


    
    return 0;
  }
