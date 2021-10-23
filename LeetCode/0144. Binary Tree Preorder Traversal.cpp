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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res;
        if(root == nullptr) return res;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()) {
            TreeNode* cur = st.top();
            st.pop();
            res.push_back(cur->val);
            if(cur->right) st.push(cur->right);
            if(cur->left) st.push(cur->left);
        }
        return res;
    }
};/**
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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res; // res is the return value
        if(root == nullptr) return res; // if root is null, return res
        stack<TreeNode*> st; // st is the stack
        st.push(root); // push root into the stack
        while(!st.empty()) { // while the stack is not empty
            TreeNode* cur = st.top(); // cur is the top of the stack
            st.pop(); // pop the top of the stack
            res.push_back(cur->val); // push the value of the node into the return value
            if(cur->right) st.push(cur->right); // if the right child of the node is not null, push the right child into the stack
            if(cur->left) st.push(cur->left); // if the left child of the node is not null, push the left child into the stack
        }
        return res;
    }
};