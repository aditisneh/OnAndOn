class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1hash(26,0);
        vector<int> s2hash(26,0);
        int s1len = s1.size();
        int s2len = s2.size();
        
        if(s2len<s1len) return false;
        int left=0, right=0;
        
        while(right<s1len){
            s1hash[s1[right]-'a']+=1;
            s2hash[s2[right]-'a']+=1;
            right++;
        }
        right--;
        while(right<s2len){
            if(s1hash==s2hash)
                return true;
            right++;
            if(right!=s2len)
                s2hash[s2[right]-'a']+=1;
            s2hash[s2[left]-'a']-=1;
            left++;
        }
        return false;
        
    }
};
