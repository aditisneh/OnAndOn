class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k=n-1;
        
        while(k > 0)
        {
            if(nums[k] <= nums[k-1])
                k--;
            else
                break;                           //finding where the descending order stars
        }
        if(k==0)
        {
            reverse(nums.begin(),nums.end());    //if the given permutation is last, just return the                                                        reverse string
            return;
        }


        
        int a = nums[k-1];                        //number to be swapped (just before the start of                                                         desceding order)
        
        int i;
        for(i=n-1;i>=k;i--)                         //find the next greater element of 'a' which lies                                                   on the right side of a 
        {
            if(nums[i] > a)                   
                break;
        }
        swap(nums[k-1], nums[i]);                          //swap 'a' with that next greater element
        reverse(nums.begin()+k, nums.end());       //reverse the string from k to n-1 to make is                                                            ascending 
    }
};
