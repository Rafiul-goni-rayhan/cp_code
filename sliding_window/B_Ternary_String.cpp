//https://codeforces.com/problemset/problem/1354/B
#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    int left = 0;
    map<char, int> cnt;
    int min_len = INT_MAX; 

    for (int right = 0; right < n; right++)
    {
        cnt[s[right]]++;
 
        if (cnt['1'] > 0 && cnt['2'] > 0 && cnt['3'] > 0)
        {
            while (cnt['1'] > 0 && cnt['2'] > 0 && cnt['3'] > 0)
            {
                min_len = min(min_len, right - left + 1);
                cnt[s[left]]--;
                left++;
            }
        }
    }

    if (min_len == INT_MAX)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << min_len << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
