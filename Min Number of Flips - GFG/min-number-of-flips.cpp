// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    int x=0,y=0;
    char s  = '0';
    for(int i=0;i<S.length();i++)
    {
        if(S[i]==s)
        {
            x++;
        }
        else
        {
            y++;
        }
        if(s=='0')
            s = '1';
        else
            s = '0';
    }
    return min(x,y);
}