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
        int n;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int words;
        string s;
        for(int i=0; i<n; i++)
        {
            cin>>words>>s;

            for(char ch : s)
            {
                if(ch == 'U')
                {
                    a[i] = (a[i] - 1) + 10;
                }
                else if(ch == 'D')
                {
                    a[i] = (a[i] + 1) + 10;
                }
            }

            cout<< a[i] % 10 <<" ";
        }

        cout<<endl;

    }
    
    return 0;
}