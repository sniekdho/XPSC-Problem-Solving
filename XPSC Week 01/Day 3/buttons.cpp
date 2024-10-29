#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int a, b;
    cin>>a>>b;
    

    int op1 = a + (a-1);
    int op2 = b + (b-1);
    int op3 = a+b;

    int totalCoin = max({op1, op2, op3});
    
    cout<<totalCoin<<endl;
    
    return 0;
}