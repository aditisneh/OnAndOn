class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > ans;
        for(int i=1;i<=numRows;i++){
            vector<int> res;
            if(i==1){
                res.push_back(1);
                ans.push_back(res);
            }
            else if(i==2){
                res.push_back(1);
                res.push_back(1);
                ans.push_back(res);
            }
            else if(i==3){
                res.push_back(1);
                res.push_back(2);
                res.push_back(1);
                ans.push_back(res);
            }
            else{
                vector<int> temp;
                temp = ans[ans.size()-1];
                
                res.push_back(1);
                
                for(int j=0;j<temp.size()-1;j++){
                    res.push_back(temp[j]+temp[j+1]);
                }
                
                res.push_back(1);
                ans.push_back(res);
            }
        }
        return ans;
    }
};
