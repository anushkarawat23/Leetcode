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
    int findBottomLeftValue(TreeNode* root) 
    {
        int ans;
        vector<vector<int>> arr; //just to store the tree level wise
        queue<pair<TreeNode*,int>> q;  //node and level
        map<int,vector<int>> maps;  //level maps to vector of nodes ki value
        q.push({root,0});
        while( !q.empty() )
        {
            pair<TreeNode*,int> temp = q.front();
            q.pop();
            if(temp.first)
            {
                maps[temp.second].push_back(temp.first -> val);
                if(temp.first -> left)
                    q.push({temp.first -> left , temp.second+1});
                if(temp.first -> right)
                    q.push({temp.first -> right , temp.second+1});
            }
        }
        for(auto it : maps)
        {
            vector<int> level;
            for(auto val : it.second)
            {
                level.push_back(val);
            }
            arr.push_back(level);
        }

        return arr[arr.size()-1][0];
    }
};