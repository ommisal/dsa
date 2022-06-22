class Solution {
public:
    int tribonacci(int n) {
        if(n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 1;
        vector<int> v(n+1,-1);
        
        // return tribonacci(n-2)+tribonacci(n-3)+tribonacci(n-1);
        // return solve(n,v);
        return tabu(n,v);
    }
//     int solve(int n, vector<int> &v){
//         if(n==0)return 0;
//         if(n==1)return 1;
//         if(n==2)return 1;
//         if(v[n]!=-1)return v[n];
        
//         return v[n] = solve(n-3,v)+solve(n-2,v)+solve(n-1,v);
//     }
    int tabu(int n,vector<int> &v){
           v[0]=0;
            
        for(int i=1;i<=n;i++){
            if(i==1)v[i]=1;
            else if(i==2)v[i]=1;
            else v[i] = v[i-3]+v[i-2]+v[i-1];
        }
          return v[n]; 
           
    }
};