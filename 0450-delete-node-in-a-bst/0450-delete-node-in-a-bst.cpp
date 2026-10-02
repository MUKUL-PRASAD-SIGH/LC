class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root == nullptr)
            return nullptr;

   
        if(root->val == key) {

       
            if(root->left == nullptr)
                return root->right;

            if(root->right == nullptr)
                return root->left;

          
            TreeNode* temp = root->left;

            while(temp->right)
                temp = temp->right;

            temp->right = root->right;

            return root->left;
        }

        TreeNode* cur = root;
        TreeNode* parent = nullptr;

        while(cur != nullptr) {

            if(key < cur->val) {

                parent = cur;
                cur = cur->left;

                if(cur != nullptr && cur->val == key) {

                  
                    if(cur->left == nullptr && cur->right == nullptr) {
                        parent->left = nullptr;
                    }

                  
                    else if(cur->right == nullptr) {
                        parent->left = cur->left;
                    }

                   
                    else if(cur->left == nullptr) {
                        parent->left = cur->right;
                    }

                 
                    else {
                        TreeNode* temp = cur->left;

                        while(temp->right)
                            temp = temp->right;

                        temp->right = cur->right;
                        parent->left = cur->left;
                    }

                    return root;
                }
            }

            else {

                parent = cur;
                cur = cur->right;

                if(cur != nullptr && cur->val == key) {

                
                    if(cur->left == nullptr && cur->right == nullptr) {
                        parent->right = nullptr;
                    }

                  
                    else if(cur->right == nullptr) {
                        parent->right = cur->left;
                    }

                   
                    else if(cur->left == nullptr) {
                        parent->right = cur->right;
                    }

                  
                    else {
                        TreeNode* temp = cur->left;

                        while(temp->right)
                            temp = temp->right;

                        temp->right = cur->right;
                        parent->right = cur->left;
                    }

                    return root;
                }
            }
        }

        return root;
    }
};