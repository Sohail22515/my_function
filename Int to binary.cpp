
// TRY IT ONE MORE TIME !!


#include<iostream>
#include<vector>
#include<cmath>
#include<wchar.h>
#include <cstdio> 
#include<algorithm>
#include<numeric>
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
  #define lloos()        for(auto it=s.begin();it!=s.end();++it)
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
  
  void int_to_binary(int a){
    int arr[32];
    int i=0;
    while(a>0){
      arr[i]=a%2;
      a/=2;
      i++;
    }
    for(int j=i-1;j>=0;j--){
      cout<<arr[j]<<" ";
    }
    
  }
  
  int main(){
  fast
    int a=1000;
    int_to_binary(a);
  }
