#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n;
    cin >> n;

    map<string, string> ans;
    map<string, string> has;

    for(int i=0; i<n; i++)
    {
        string a, b;
        cin >> a >> b;

        if(has.find(a) != has.end())
        {
            string s = has[a];
            ans[s] = b;
            has.erase(a);
            has[b] = s;
        }
        else
        {
            ans[a] = b;
            has[b] = a;
        }
    }

    cout<<ans.size()<<'\n';
    for(auto value : ans)
    {
        cout<<value.first<<" "<<value.second<<'\n';
    }
    
    return 0;
}