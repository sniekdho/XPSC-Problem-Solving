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

        string s1,s2;
        cin>>s1>>s2;

        for(char &ch1 : s1)
        {
            if(ch1 == 'G' || ch1 == 'B')
            {
                ch1 = 'X';
            }
        }

        for(char &ch2 : s2)
        {
            if(ch2 == 'G' || ch2 == 'B')
            {
                ch2 = 'X';
            }
        }

        if(s1 == s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    return 0;
}