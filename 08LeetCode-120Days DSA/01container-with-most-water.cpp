/*To do this problem we will combine two techniques: two-pointers and greedy strategy.

Time Complexity
We just go through all the elements of the height array so the time complexity is O(n).

Space Complexity
Because we use a constant number of variables so the space complexity is O(1).
*/class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int temp=0;
        int res=0;
        int right = height.size()-1;
        while(left<right){
            temp = min(height[left],height[right]);
            if(((right-left)*temp)>res) res = (right-left)*temp;
            if(height[right]<height[left])  right--;
            else left++;
        }
        return res;
    }
};
