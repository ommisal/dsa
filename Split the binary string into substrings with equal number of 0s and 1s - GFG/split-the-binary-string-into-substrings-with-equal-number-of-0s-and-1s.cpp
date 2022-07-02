// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int x =0;
        int y = 0;
        int ans = 0;
        bool flg = false;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0')
            {
                x++;
            }
            else
                y++;
            if(x==y)
            {
                ans++;
                //flg = true;
            }
            else if (x!=y)
            {
                
                continue;
            }
        }
        if(x!=y)
            return -1;
        
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends