#include<bits/stdc++.h>
using namespace std;
int a[100]={1,2,3,3,3,4,5,6};
//int a[100]={0,0,1,1,1,1,1,1};//eitar vetore asole eirokom hocche


int isOK(int idx,int x){
    if(a[idx] <x) return 0;
    else return 1;
}
int main(){
    int n=8;
    int l=0, r=n;
    int x=3;   //terget 3 .that means searching 3 lower bound.
    while(l<r){
        int mid=(l+r)/2;
        
        if(isOK(mid,x)==0) l=mid+1;
        else r=mid;
    }
    int ansL=l;
    cout<<ansL<<endl;

}