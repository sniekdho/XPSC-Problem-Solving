#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int a,b,t;
    cin>>a>>b>>t;

    double totalTime = t + 0.5;

    int eachBiscuit = totalTime / a;

    int totalBiscuit = eachBiscuit * b;

    cout<<totalBiscuit<<endl;
    
    return 0;
}