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

        string s;
        cin>>s;

        int firstPosOfB = -1;
        int lastPosOfB = -1;

        firstPosOfB = s.find('B');
        lastPosOfB = s.rfind('B');

        int minLength = lastPosOfB - firstPosOfB + 1;
        cout<< minLength <<endl;

    }

    return 0;
}