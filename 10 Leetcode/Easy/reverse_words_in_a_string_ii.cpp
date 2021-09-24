class Solution {
public:
    
    string reverseWords(string s) {
        int n = s.length();
        int i=0; int k=0;
        while(n--){
            if(s[i]== 32){
                if(k!=0)
                reverse(s.begin()+k+1,s.begin()+i);
                if(k==0)
                reverse(s.begin()+k,s.begin()+i);
                k=i;
                i++;
            }
            else i++;
        }
        if(k==0)
        reverse(s.begin(),s.end());
        if(k!=0)
        reverse(s.begin()+k+1,s.end());
        return s;
    }
};
