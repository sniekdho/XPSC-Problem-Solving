#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--)
    {
        string s; 
        cin >> s;

        int smlCh=0;
        int capCh=0;
        deque<char> dq;

        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='B')
            {
                capCh++;
                continue;
            }
            if(s[i]=='b')
            {
                smlCh++;
                continue;
            }
            if((capCh > 0) && (s[i]>='A' && s[i]<='Z'))
            {
                capCh--;
                continue;
            }
            if((smlCh > 0) && (s[i]>='a' && s[i]<='z'))
            {
                smlCh--;
                continue;
            }
            dq.push_front(s[i]);
        }

        for(auto it:dq)
        {
            cout << it;
        }
        cout << endl;
    }
    return 0;
}