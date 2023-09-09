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

    void dfs(TreeNode* &root, unordered_set<int> &s, vector<TreeNode*> &result)
    {
        if( root == NULL)
            return;
        
        dfs(root->left, s, result);
        dfs(root->right, s, result);

        if( s.find(root->val) != s.end() )
        {
            if( root -> left)
                result.push_back( root->left );
            if( root -> right)
                result.push_back( root->right );

            root = NULL;
        }
    }
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) 
    {

        unordered_set<int> s;

        for(auto it : to_delete)
        {
            s.insert(it);
        }

        vector< TreeNode* > result;

        dfs(root, s, result);
      

        if (root)
            result.push_back(root);

        return result;
            
    }
};