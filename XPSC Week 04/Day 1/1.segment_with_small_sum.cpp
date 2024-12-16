#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    long long int k;
    cin >> k;

    vector<long long int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int l=0, r=0, ans=0;
    long long int sum=0;

    while(r < n)
    {
        sum += v[r];

        if(sum <= k)
        {
            ans = max(ans, r-l+1);
        }
        else
        {
            sum -= v[l];
            l++;
        }
        r++;
    }

    cout << ans ;

    return 0;
}