/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 
    vector<int> rightSideView(TreeNode* root) 
    {
        if(!root)
            return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;   
        TreeNode* right = NULL;
        while( !q.empty() )
        {
            int size = q.size(); 
            for(int i = 0 ; i < size ; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp)
                {
                    right = temp;
                    if(temp->left) q.push(temp -> left);
                    if(temp->right) q.push(temp -> right);
                }
                
            }
            ans.push_back(right -> val);
        }

        return ans;
        
    }
};