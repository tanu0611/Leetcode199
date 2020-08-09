    vector<int> rightSideView(TreeNode* root) {
        
        if(!root) return {};
        vector<int> res;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty())
        {
            int n = q.size();
            
            for(int i = 1; i<=n; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                
                if(i==n) res.push_back(temp->val);
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return res;
    }