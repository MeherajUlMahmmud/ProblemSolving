# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        if not root:
            return False;
        
        if root.left is None and root.right is None:
            return sum - root.val == 0
        
        left = self.hasPathSum(root.left, sum - root.val)
        
        right = self.hasPathSum(root.right, sum - root.val)
        
        return left or right
        