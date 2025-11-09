//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/
class Solution {

public:

    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        vector<int>ps (n+1,0);

        for (int i = 1; i <= n; i++) {
            ps[i] = ps[i - 1] + cardPoints[i-1];
        }
        int mxs = INT_MIN;
        int total_sum = ps[n];
        int window=n-k;

        for (int i = 1;  i + window-1 <= n ; i++) {
            int l = i-1 , r = i + window-1;
            int ws = ps[r] - ps[l];
            int actual = total_sum - ws;
            mxs = max(mxs, actual);
        }

        return mxs;

    }

};













//eita vs code e kora
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     int a[n+1];
//     int ps[n+1];
//     ps[0]=0;

//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }
//     for(int i=1;i<=n;i++){
//         ps[i]=ps[i-1]+a[i];
//     }
//     int total_sum=ps[n];
//     int mxs=INT_MIN;   // 1 2 3 4 5 6 1       3
//     int window=n-k;
//     for(int i=1; i+window-1 <=n; i++){

//         int l=i-1 , r=i+window-1;
//         int dws=ps[r]-ps[l];
//         int actual=total_sum-dws;

//         mxs=max(mxs,actual);
//     }
//     cout<<mxs<<endl;

// }