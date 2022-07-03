// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        int count1=0;
        int count2 = 0;
        // flg = false;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='[')
            {
                count1--;
            }
            else
            {
                count1++;
                if(count1>0)
                    count2+=count1;
            }
            
            
        }
        
        return count2;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends