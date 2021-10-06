class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,bool> um;
        for(auto& i:nums){
            um[i]=true;
        }
        int count, res=0;
        
        for(auto& i:nums){
            if(um.find(i-1)!=um.end())
                um[i]=false;
        }
        for(auto& i:um){
            if(i.second==true){
                int temp = i.first, count=0;
                while(um.find(temp) != um.end()){
                    count++;
                    temp++;
                }
                res=max(res,count);
            }
        }
        return res;
    }
};
