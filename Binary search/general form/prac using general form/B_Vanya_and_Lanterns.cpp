//https://codeforces.com/problemset/problem/492/B
//eita ami korchi 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int lanton ,path;
    cin>>lanton>>path;

    int a[lanton+1];
    
    for(int i=1;i<=lanton;i++){
        cin>>a[i];
    }
    sort(a+1,a+lanton+1);
    double b[lanton+2];

    b[0]=a[1]-0.0;
    b[lanton]=path-a[lanton];

    for(int i=1;i<lanton;i++){
        b[i]=(double)(a[i+1]-a[i])/2.0 ;
    }
    double ans=0.0;
    for(int i=0;i<lanton+2;i++){
        if(b[i]>ans){
            ans=b[i];
        }
    }
     cout << fixed << setprecision(10) << ans << endl;
}


/*
//eita binary search diye korchiu 
#include <bits/stdc++.h>
using namespace std;

// ✅ canCover function returning 1 if mid radius covers whole path, else 0
int canCover(double mid, int a[], int lanthn, int path) {
    double reach = 0.0;

    for (int i = 1; i <= lanthn; i++) {
        // যদি এই ল্যাম্পের বাম দিক আগের reach থেকে দূরে থাকে → ফাঁকা
        if (a[i] - mid > reach)
            return 0; // false
        reach = a[i] + mid; // আলো পৌঁছানো সর্বশেষ জায়গা
    }

    // শেষ পর্যন্ত আলো পৌঁছেছে কিনা
    return (reach >= path) ? 1 : 0;
}

int main() {
    int lanton, path;
    cin >> lanton >> path; 

    int a[lanton + 1]; 
    for (int i = 1; i <= lanton; i++)
        cin >> a[i];

    sort(a + 1, a + lanton + 1);

    double L = 0.0;      
    double R = path;    

    for(int iter = 0; iter < 100; iter++){ 
        double mid = (L + R) / 2.0;
        if (canCover(mid, a, lanton, path) == 0)
            L = mid;  // radius ছোট, বাড়াতে হবে
        else
            R = mid;  // radius কাজ করছে, ছোট try করতে হবে
    }

    cout << fixed << setprecision(10) << R << endl;
    return 0;
}
*/