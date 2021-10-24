//...............ZIG-ZAG TRAVERSAL.................

vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> ans;
    	
    	if(root==NULL)   return ans;
    	
    	queue<Node*> q;
    	q.push(root);
    	int flag=true;
    	
    	while(!q.empty())
    	{
    	    int size=q.size();
    	    vector<int> temp;
    	    
    	    while(size--)
    	    {
    	        Node*t=q.front();
    	        q.pop();
    	        temp.push_back(t->data);
    	        if(t->left!=NULL)   q.push(t->left);
    	        if(t->right!=NULL)  q.push(t->right);
    	    }
    	    
    	    if(!flag)  reverse(temp.begin(),temp.end());
    	    
    	    for(int i=0;i<temp.size();i++)
    	        ans.push_back(temp[i]);
    	       
    	   flag=!flag;    
    	}
    	return ans;
    }
