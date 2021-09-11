/*Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

Constraints:

1 <= nums.length <= 10^4
-10^4 <= nums[i] <= 10^4
nums is sorted in non-decreasing order.

Approach - 

Use of abs() function -> returns the absolute value of element and filling the resultant array from the rear end
Time Complexity - as we are traversing once throughout the array - O(N)
Space complexity - as extra array is used so O(N)*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
         vector<int> res(A.size());
        int l = 0, r = A.size() - 1;
        for (int k = A.size() - 1; k >= 0; k--) {
            if (abs(A[r]) > abs(A[l]))
                res[k] = A[r] * A[r--];
            else
                res[k] = A[l] * A[l++];
        }
        return res;
    }
};
