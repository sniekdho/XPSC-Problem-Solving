#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int sum = 0, ans = 0, l = 0, r = 0;

    while(r < n)
    {
        sum += v[r];
        if(sum <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while(sum > k)
            {
                sum -= v[l];
                l++;
            }

            if(sum <= k && l <= r)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans ;
    
    return 0;
}