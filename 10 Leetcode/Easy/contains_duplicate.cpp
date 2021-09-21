class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //negative marking approach only works when there is surety of number being repeated
        //using approach of sorting or hashtable
        unordered_set<int> s;
        for(auto val : nums){
            if(s.find(val)!=s.end()){
                return true;
            }
            else{
                s.insert(val);
            }
        }
        return false;

    }
};
