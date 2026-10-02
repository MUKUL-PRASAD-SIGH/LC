class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        if(root == nullptr)
            return -1;

        int ans = -1;

        inorder(root, k, ans);

        return ans;
    }

    void inorder(TreeNode* curr, int& k, int& ans) {

        if(curr == nullptr)
            return;
        inorder(curr->left, k, ans);
        k--;

        if(k == 0) {
            ans = curr->val;
            return;
        }
        inorder(curr->right, k, ans);
    }
};