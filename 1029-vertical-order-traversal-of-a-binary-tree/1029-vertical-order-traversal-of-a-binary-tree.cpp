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
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>> maps;
        vector<vector<int>> ans;
        q.push({root,{0,0}});
        while( !q.empty() )
        {
            pair<TreeNode*,pair<int,int>> temp = q.front();
            q.pop();
            maps[temp.second.first][temp.second.second].insert(temp.first -> val);
            
            if(temp.first)
            {
                if(temp.first -> left)
                    q.push({temp.first -> left,{temp.second.first-1 , temp.second.second+1}});
                if(temp.first -> right)
                    q.push({temp.first -> right,{temp.second.first+1 , temp.second.second+1}});         
            }
        }

        for (auto it : maps)
        {
            vector<int> column;
            for (auto inner_it : it.second)
            {
                for(auto val : inner_it.second)
                    column.push_back(val);
            }
            ans.push_back(column);
        }


        return ans;
        
    }
};