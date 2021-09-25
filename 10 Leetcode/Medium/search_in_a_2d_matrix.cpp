class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
               int st = 0, end = matrix[0].size()-1;
        for(int i=0; i<matrix.size(); i++)
            if(target >= matrix[i][st] && target <= matrix[i][end]){
                return binary_search(matrix[i].begin(), matrix[i].end(), target);
            }
        
        return false;
    }
};
