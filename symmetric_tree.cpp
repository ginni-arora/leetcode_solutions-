class Solution {
public:
bool solve(TreeNode* root1, TreeNode*root2){
    if(!root1 && !root2)
    return true;
    if(!root1 || !root2)
    return false;

    bool ans1= solve(root1->left,root2->right);
     bool ans2= solve(root1->right,root2->left);
    if(ans1 && ans2 && root1->val==root2->val)
    return true;
    return false;
}
    bool isSymmetric(TreeNode* root) {
        if(!root)
        return true;
        return solve(root->left,root->right);

    }
};
