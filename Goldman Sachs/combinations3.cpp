class Solution {
public:
    void solve(int i,int k,vector<int>&sub,int n,vector<vector<int>>&ans)
    {
        if(k==0 && n==0)
        {
            ans.push_back(sub);
            return;
        }
        if(k<0 || n<0)
        {
            return;
        }
        if(i>9)
        {
            return;
        }
        //take
        sub.push_back(i);
        solve(i+1,k-1,sub,n-i,ans);
        //not take
        sub.pop_back();
        solve(i+1,k,sub,n,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
            vector<vector<int>>ans;
            vector<int>sub;
            solve(1,k,sub,n,ans);
            return ans;
    }
};
