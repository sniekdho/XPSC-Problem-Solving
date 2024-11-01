#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n;
    cin>>n;

    deque<int> dq(n);
    for(int i=0; i<n; i++)
    {
        cin>>dq[i];
    }

    int sereja = 0, dima = 0, whosMove = 1;

    while(!dq.empty())
    {
        int leftValue = dq.front();
        int rightValue = dq.back();
        int mx = max(leftValue, rightValue);

        if(whosMove %2 != 0)
        {
            sereja += mx;
        }
        else
        {
            dima += mx;
        }
        
        if(mx == leftValue)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }

        whosMove++;
    }

    cout << sereja << " " << dima << endl;
    
    return 0;
}