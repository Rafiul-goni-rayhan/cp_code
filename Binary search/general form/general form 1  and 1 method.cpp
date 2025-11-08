#include<bits/stdc++.h>
using namespace std;
int a[100]={0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};
int main(){
    int n=15;
    int l=0, r=n;
    while(l<r){
        int mid=(l+r)/2;
        
        if(a[mid]==0) l=mid+1;
        else r=mid;
    }
    int ansL=l-1;
    int ansR=l;
    cout<<ansL<<" "<<ansR<<endl;

}