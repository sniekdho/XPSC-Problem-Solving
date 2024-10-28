#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;


    int multiple = 0;

    for(int i=1; i<=c; i++)
    {
        if((c*i)>=a && (c*i)<=b)
        {
            multiple = c*i;
        }
    }


    if(multiple > 0)
    {
        cout<<multiple<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    return 0;
}