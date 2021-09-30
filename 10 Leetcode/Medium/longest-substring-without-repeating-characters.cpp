class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256,-1); //a string can have 256 different characters
        //Each character is stored using eight bits of information, giving a total number of 256 different characters (2**8 = 256).
        
        int left=0;
        int right=0;
        int len=0;
        int n = s.size();
        while(right<n){
            if(map[s[right]]!=-1)
                left = max(left,map[s[right]]+1);
            
            map[s[right]] = right;
            
            len = max(len,right-left+1);
            right++;
            
        }
            return len;
    }
};
