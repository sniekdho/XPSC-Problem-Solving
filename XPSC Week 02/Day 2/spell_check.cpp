#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        if(s.length() != 5)
        {
            cout<<"NO"<<endl;
            continue;
        }

        int cntT=0, cntI=0, cntM=0, cntU=0, cntR=0;

        for(auto ch : s)
        {
            if(ch == 'T') cntT++;
            else if(ch == 'i') cntI++;
            else if(ch == 'm') cntM++;
            else if(ch == 'u') cntU++;
            else if(ch == 'r') cntR++;
        }

        if(cntT==1&&cntI==1&&cntM==1&&cntU==1&&cntR==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}