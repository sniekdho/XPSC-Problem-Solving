#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    if(n == 0)
    {
        cout<<0<<endl;
    }
    else
    {
        long long int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        long long int sum = 0;
        long long int minOdd = INT_MAX;
        bool isOdd = false;

        for(int i=0; i<n; i++)
        {
            if(a[i] %2 != 0 && a[i] < minOdd)
            {
                minOdd = a[i];
            }
            
            sum = sum + a[i];
        }

        if(sum %2 != 0) isOdd = true;

        if(isOdd) cout<<sum-minOdd<<endl;
        else cout<<sum<<endl;

    }

    return 0;
}