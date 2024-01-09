class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) {
            return;
        }
        inorder(root->left, ans);
        if (!root->left && !root->right) {
            ans.push_back(root->val);
        }
        inorder(root->right, ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1;
        vector<int> ans2;
        inorder(root1, ans1);
        inorder(root2, ans2);

        if (ans1 == ans2)
            return true;

        return false;
    }
};