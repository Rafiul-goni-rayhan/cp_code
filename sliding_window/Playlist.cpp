//https://cses.fi/problemset/task/1141
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> x(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    deque<int> dq;
    map<int, int> mp;
    int ans=INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (mp[x[i]] == 1)
        {
            while (1)
            {
                int v = dq.front();
                dq.pop_front();
                mp[v] = 0;
                if (v == x[i])
                {
                    break;
                }
            }
        }
        dq.push_back(x[i]);
        mp[x[i]]=1;

        ans=max(ans,(int)dq.size());
    }
    cout<<ans<<endl;
}
