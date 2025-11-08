//https://codeforces.com/contest/474/problem/B
//eita ami buje buje korchi
#include<bits/stdc++.h>
using namespace std;

int isOk(int psEle,int x,int ps[]){
    if(ps[psEle]>=x) return 1;
    return 0;

}
int main(){
    int n;cin>>n;
    int a[n+1];
   
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ps[n+1];
    ps[0]=0;
    for(int i=1;i<=n;i++){
        ps[i]=a[i] + ps[i-1];
    }
   
    int q;
    cin>>q;
    while(q--){
        int qe;
        cin>>qe;
        int l=1, r=n;
        while(l<r){
            int mid=(l+r)/2;
            if(isOk(mid,qe,ps)==0) l=mid+1;
            else r=mid;
        }
        cout<<l<<endl;
    }

}
//na buje 
// #include<bits/stdc++.h>
// using namespace std;
// const int mx=1e5+123;
// int a[mx];

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     vector<pair<int ,int >>v;
//     v.push_back({1, a[0]});

//     for(int i=1;i<=n;i++){
//         v.push_back({v[i-1].second+1,v[i-1].second+a[i]});
//     }

//     int q;cin>>q;
    
//     while(q--){
//         int m;
//         cin>>m;
//         int l=0, r=n-1;
//         int ans;
//        while(l<=r){
//             int mid=(l+r)/2;
            
//             if(v[mid].first <= m  &&  m <=v[mid].second ){
//                 ans=mid;
//                 break;
//             }
//             else if(m < v[mid].first){
//                 r=mid-1;
//             }
//             else{
//                 l=mid+1;
//             }
//         }
//         cout<<ans+1<<endl;
//     }
 
// }