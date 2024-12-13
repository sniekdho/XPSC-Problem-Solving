#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin >> n >> k;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int l=0, r=0, sum=0, ans=0;

    while(r < n)
    {
        sum += v[r];

        if(r - l + 1 == k)
        {
            ans = max(ans, sum);
            sum = sum - v[l];
            l++, r++;
        }
        else
        {
            r++;
        }
    }

    cout << ans ;
    
    return 0;
}