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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res; // res is the return value
        if(root == nullptr) return res; // if root is nullptr, return res
        stack<TreeNode*> st; // st is the stack
        TreeNode* cur = root; // cur is the current node
        while(cur || !st.empty()) { // while cur is not nullptr or st is not empty
            while(cur) { // while cur is not nullptr
                st.push(cur); // push cur into st
                cur = cur->left; // cur is the left child of cur
            }
            cur = st.top(); // cur is the top of st
            st.pop(); // pop the top of st
            res.push_back(cur->val); // push the value of cur into res
            cur = cur->right; // cur is the right child of cur
        }
        return res; // return res
    }
};