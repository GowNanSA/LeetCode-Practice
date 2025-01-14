/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <iostream>
using namespace std; 

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        // LEFT look to the left node if the node is smaller than the root 
        if(p->val < root->val && q->val < root->val){
            // recursive call 
            return lowestCommonAncestor(root->left, p, q); 
        }

        // RIGHT if greater on right then traverse
        if(p->val > root->val && q->val > root->val){
            return lowestCommonAncestor(root->right, p, q); 
        }

        // base case
        return root; 
    }
};