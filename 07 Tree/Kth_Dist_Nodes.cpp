//NODES KTH DISTANCE FROM THE TARGET NODE

//case-1
void printAtLevelK(node*root,int k)
{
    if(root==NULL or k<0)
      return;
    
    if(k==0)
    {
        cout<<root->data<<" ";
        return;
    }
    
    printAtLevelK(root->left,k-1);
    printAtLevelK(root->right,k-1);
}

//case-2
int printAtKthDist(node*root,node*target,int k)
{
    if(root==NULL)
      return -1;
    
    if(root==target)
    {
        printAtLevelK(root,k);
        return 0;
    }
    
    int dl=printAtKthDist(root->left,target,k);
    if(dl!=-1)
    {
        if(dl+1==k)
        {
            cout<<root->data<<" ";
        }else{
            printAtLevelK(root->right,k-dl-2);
        }
        return dl+1;
    }
    
    int dr=printAtKthDist(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k)
        {
            cout<<root->data<<" ";
        }else{
            printAtLevelK(root->left,k-2-dr);
        }
        return dr+1;
    }
    
    return -1;
}
