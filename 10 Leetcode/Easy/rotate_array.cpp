class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int n = arr.size();
        // if(k>n)k=k%n;
        // while(k--){
        // for(int i=1;i<arr.size();i++){
        // swap(arr[0],arr[i]);\
        //gives TLE
        k %= nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    
    }
};
