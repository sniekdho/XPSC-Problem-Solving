#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    string n;
    cin>>n;

    string st;

    if(n.size() == 4)
    {
        cout<<n<<endl;
    }
    else if(n.size() == 3)
    {
        st = "0" + n;
        cout<<st<<endl;
    }
    else if(n.size() == 2)
    {
        st = "00" + n;
        cout<<st<<endl;
    }
    else if(n.size() == 1)
    {
        st = "000" + n;
        cout<<st<<endl;
    }
    
    return 0;
}