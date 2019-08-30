/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root)
{
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return 1;
    int left = 1;
    int right = 1;
    if(root->left)
        left = minDepth(root->left) + 1;
    if(root->right)
        right = minDepth(root->right) + 1;
    if(left == 1 && right >= 1)
        return right;
    if (right ==1 && left >= 1)
        return left;
    if(left < right)
        return left;
    else
        return right;
}

