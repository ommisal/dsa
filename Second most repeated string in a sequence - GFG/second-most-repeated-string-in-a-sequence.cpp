// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        string ans="";
        int count = 0;
        unordered_map<string, int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            count = max(mp[arr[i]],count);
        }
        int maxi1 = 0;
        // int maxi2 = 0;
        for(auto it:mp)
        {
            if(it.second<count)
            {
                maxi1 = max(it.second,maxi1);
                if(it.second==maxi1)
                {
                    ans = it.first;
                }
            }
            
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends