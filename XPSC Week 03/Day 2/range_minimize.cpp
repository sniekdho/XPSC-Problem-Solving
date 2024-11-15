#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        long long int n;
        cin>>n;

        vector<long long int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(), v.end());

        if(n==3)
        {
            cout<<0<<endl;
        }
        else
        {
            long long int op1 = v[n-1] - v[2];
            long long int op2 = v[n-3] - v[0];
            long long int op3 = v[n-2] - v[1];
            
            cout<<min({op1, op2, op3})<<endl;
        }

    }
    
    return 0;
}