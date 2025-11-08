//https://codeforces.com/contest/600/problem/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a,b;
    

int isok(int m,int tr,int ar[]){
    if(ar[m]<=tr) return 0;
    return 1;
}

int main(){
    cin>>a>>b;
    int ar[a];
    ar[a]=INT_MAX;
    int br[b];
    
    for(int i=0;i<a;i++){
        cin>>ar[i];
    }
    sort(ar,ar+a);
    for(int i=0;i<b;i++){
        cin>>br[i];
    }
    for(int i=0;i<b;i++){
        int n=br[i];
        int l=0,  r=a;
        while(l<r){
            int mid=(l+r)/2;
            if(isok(mid,n,ar)==0) l=mid+1;
            else r=mid;
        }
        cout<<l<<" ";
    }
    cout<<endl;
}