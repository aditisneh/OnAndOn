class Solution {
public:
    void moveZeroes(vector<int>& nums) {
          int i=0;
        int n = nums.size();
        if(n==0) return ;
        for(int j=0; j<n ;j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i++]);
            }
        }
        
    }
};
