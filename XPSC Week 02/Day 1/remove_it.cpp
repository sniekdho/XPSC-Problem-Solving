#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n;
    long long int x;
    cin>>n>>x;

    long long int value;

    queue<long long int> q;
    for(int i=0; i<n; i++)
    {
        cin>>value;

        if(value != x)
        {
            q.push(value);
        }
    }

    if(q.size() > 0)
    {
        while(!q.empty())
        {
            cout << q.front() <<" ";
            q.pop();
        }
    }
    else
    {
        cout<<" ";
    }
    
    
    return 0;
}