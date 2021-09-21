class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //first implelement binary search
        int s=0;
        int e = nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){ return mid;break;}
            if(nums[mid]<target) s=mid+1;
            else e =mid-1;
        }
        return s; //imp step
    }
};
