class Solution {
public:
    string convert(string s, int numRows) {
        //corner-case
        if(numRows==1)   return s;
        
        string ans="";
        int idx=2*(numRows-1);
        
        for(int i=0;i<numRows;i++) {
            
            for(int j=i;j<s.length();j+=idx) {
                
                ans.push_back(s[j]);
                
                //when the row number isn't 0th and last
                if(i>0 and i<numRows-1 and (j+idx-2*i)<s.length())
                     ans.push_back(s[j+idx-2*i]);
                     
            }
        }
        
        return ans;
    }
};
