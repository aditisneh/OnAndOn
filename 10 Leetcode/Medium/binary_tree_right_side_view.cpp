class Solution {
public:
    
    void rightfn(int level , TreeNode* root){
        if(root==NULL){
            return;
        }
        
            if(ans.size()==level){
                ans.push_back(root->val);
            }
            rightfn(level+1,root->right);
            rightfn(level+1,root->left);
        
    }
   vector<int> ans;
    vector<int> rightSideView(TreeNode* root) {
  
        rightfn(0 , root);
        return ans;
    }
};