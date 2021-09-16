/// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    
    /* int getFirst(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;  /// (s+e)/2
            
            if(nums[mid]==target){
                ans = mid;
                e = mid -1 ; /// LHS for first pos
                ///return mid;
            } else if(nums[mid] < target){
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }
    
    int getLast(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;  /// (s+e)/2
            
            if(nums[mid]==target){
                ans = mid;
                s = mid + 1 ; /// RHS for last pos
                ///return mid;
            } else if(nums[mid] < target){
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }
    */
    int getIndex(vector<int>& nums, int target, bool getFirst){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s + (e-s)/2;  /// (s+e)/2
            
            if(nums[mid]==target){
                ans = mid;
                if(getFirst) {
                    e = mid -1 ;    /// LHS for first
                } else  {
                    s = mid +1 ;     /// RHS for last
                }
                ///return mid;
            } else if(nums[mid] < target){
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
          vector<int> v(2,-1);  
          int first = getIndex(nums,target,true);
          if(first == -1){
              return v;
          }
          int last = getIndex(nums,target,false);
        
          v[0] = first;
          v[1] = last;
        return v;
        
    }
};
