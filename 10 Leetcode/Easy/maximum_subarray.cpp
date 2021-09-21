class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int max_so_far = INT_MIN;
        int curr_sum =0;
        for(int i=0;i<n;i++){
            curr_sum += nums[i];
            if(max_so_far < curr_sum) max_so_far = curr_sum;
            if(curr_sum<0) curr_sum= 0;
            
        }
        return max_so_far;
        
    }
};
