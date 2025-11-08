//https://codeforces.com/problemset/problem/670/D2
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int canMake(ll int x, ll int n,  int a[],  int b[], ll int k ){
    long long int needpowder=0;
    for(int i=0;i<n;i++){
        ll int need=a[i]*x;
        if(need>b[i]){
            needpowder+=(need-b[i]);
            if(needpowder>k) return 0;
        }
    }
    return 1;
}
int main(){
    int n,k;
    cin>>n>>k;
     int a[n],b[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){ cin>>b[i];}
    ll int l=0, r=2e9+1 ;
    while(l<r){
        ll int mid=(l+r)/2;
        if(canMake(mid,n,a,b,k)==1) l=mid+1;
        else r=mid;
    }
    cout<<l-1<<endl;
}