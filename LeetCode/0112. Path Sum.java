/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode() {}
 * TreeNode(int val) { this.val = val; }
 * TreeNode(int val, TreeNode left, TreeNode right) {
 * this.val = val;
 * this.left = left;
 * this.right = right;
 * }
 * }
 */
class Solution {
    public boolean hasPathSum(TreeNode root, int sum) {
        // if (root == null) return false;

        // if (root.left == null && root.right == null)
        // return sum - root.val == 0;

        // if (root.left != null && hasPathSum(root.left, sum - root.val))
        // return true;

        // if (root.right != null && hasPathSum(root.right, sum - root.val))
        // return true;

        // return false;

        if (root == null)
            return false;

        Stack<TreeNode> node_stack = new Stack();
        Stack<Integer> sum_stack = new Stack();

        node_stack.add(root);
        sum_stack.add(sum - root.val);

        while (!node_stack.isEmpty()) {
            TreeNode cur_node = node_stack.pop();
            int cur_sum = sum_stack.pop();

            if (cur_node.left == null && cur_node.right == null && cur_sum == 0)
                return true;

            if (cur_node.left != null) {
                node_stack.add(cur_node.left);
                sum_stack.add(cur_sum - cur_node.left.val);
            }

            if (cur_node.right != null) {
                node_stack.add(cur_node.right);
                sum_stack.add(cur_sum - cur_node.right.val);
            }
        }
        return false;
    }
}