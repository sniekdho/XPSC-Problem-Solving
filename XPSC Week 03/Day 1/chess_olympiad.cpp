#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int x,y,z;
    cin>>x>>y>>z;

    int matchPlayed = 4 - (x+y+z);

    double pointTeamA = x + (y * 0.5);
    double pointTeamB = z + (y * 0.5);
    
    double pointDeff = abs(pointTeamA - pointTeamB);
    double totalPointTeamA = matchPlayed + pointTeamA;
    
    if(totalPointTeamA > pointTeamB)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}