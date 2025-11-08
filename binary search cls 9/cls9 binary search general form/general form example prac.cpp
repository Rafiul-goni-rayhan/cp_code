#include<bits/stdc++.h>
using namespace std;
#define ll long long

//  let n==28    28 er cheye choto borgo songkha ber korte hobe 
//  0  1  2  4  9  16  25  36  49  64
//  0  0  0  0  0   0  >0   1  1   1    amar kolponar array.karon 10e18 array banano popssible na 
  
int isOK(ll int idx,ll int x){
    if(idx*idx <=x) return 0;
     return 1;
}

int main(){
    ll int n;
    cin>>n;
    ll int l=0,r=1e9+1;
    while (l<r){
        ll int mid=(l+r)/2;
        if(isOK(mid,n)==0) l=mid+1;
        else r=mid;
    }
    cout<<(l-1)*(l-1)<<endl;
    return 0;
}
