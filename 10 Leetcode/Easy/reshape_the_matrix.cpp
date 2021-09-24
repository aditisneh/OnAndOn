 class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         vector<vector<int> > ans(r, vector<int>(c));
        vector<int> temp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                temp.push_back(mat[i][j]);
            }
        }
        if(r*c != mat.size()*mat[0].size()){
            return mat;
        }
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j] = temp[count++];
            }
        }
        return ans;
    }
};
