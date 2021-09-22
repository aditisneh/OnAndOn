class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> s;
        for(int i=0;i<nums.size();i++){
          auto x = s.find(target-nums[i]);
          if(x!=s.end()){
            res.push_back(x->second);
            res.push_back(i);
          }
            else s[nums[i]] =i;
        }
        return res;
    }
};
