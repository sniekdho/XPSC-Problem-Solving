#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    sort(s.begin(), s.end());

    set<char> cSet;

    for(char ch : s)
    {
        cSet.insert(ch);
    }

    for(char c = 'a'; c <= 'z'; c++)
    {
        if(cSet.find(c) == cSet.end())
        {
            cout<< c << endl;
            return 0;
        }
    }

    cout<<"None"<<endl;

    return 0;
}