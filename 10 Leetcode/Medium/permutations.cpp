class Solution {
public:
   void solve(vector<int> nums, int s, int e, vector<vector<int>>&ans){
        if(s==e){
            ans.push_back(nums);
            return;
        }
       for(int i=s;i<=e;i++){
           swap(nums[s],nums[i]);
           solve(nums,s+1,e,ans);
           //backtrack
           swap(nums[s],nums[i]);
       }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums,0,nums.size()-1,ans);
        return ans;
    }
};
