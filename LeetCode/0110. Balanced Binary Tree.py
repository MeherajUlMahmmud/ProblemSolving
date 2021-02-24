# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def DFS(node):
            if not node:
                return 0
            
            return 1 + max(DFS(node.left), DFS(node.right))
        
        if not root:
            return True
        
        return abs(DFS(root.left) - DFS(root.right)) <= 1 and self.isBalanced(root.left) and self.isBalanced(root.right)
        