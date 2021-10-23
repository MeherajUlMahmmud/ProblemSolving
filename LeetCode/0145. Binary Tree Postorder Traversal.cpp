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
class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> res; // res is the final result
        if(root == nullptr) return res; // if root is nullptr, return res
        stack<TreeNode*> st; // st is the stack
        st.push(root); // push root into st
        while(!st.empty()) { // while st is not empty
            TreeNode* cur = st.top(); // cur is the top of st
            st.pop(); // pop the top of st
            res.push_back(cur->val); // push the value of cur into res
            if(cur->left) st.push(cur->left); // if cur->left is not nullptr, push it into st
            if(cur->right) st.push(cur->right); // if cur->right is not nullptr, push it into st
        }
        reverse(res.begin(), res.end()); // reverse res
        return res;
    }
};