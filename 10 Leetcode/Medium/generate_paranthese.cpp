class Solution {
public:
    
    void solve(int n, vector<string> &ans, int open, int closed, string str){
        if(open+closed >= n){
            if(open==closed)
                ans.push_back(str);
        return;
        }
        if(closed < open) solve(n, ans, open, closed+1, str+ ")");
        solve(n,ans, open+1, closed, str+"(");
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(2*n, ans, 0, 0, "");
        return ans;
    }
};
