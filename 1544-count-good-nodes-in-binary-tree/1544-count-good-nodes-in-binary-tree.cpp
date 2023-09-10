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
    int goodNodes(TreeNode* root) 
    {
       return countGoodNodes(root, root -> val);
    }

    int countGoodNodes( TreeNode* root, int maxVal)
    {
        //initially, maxVal = the value of root
        int count = 0;

        if( !root )
            return 0;  //base case
        
        if( root -> val >= maxVal)
        {
            count++;
            maxVal = root -> val;
        }

        count += countGoodNodes( root -> left, maxVal);
        count += countGoodNodes( root -> right, maxVal);

        return count;
    }
};