# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isMirror(self, r1: TreeNode, r2: TreeNode) -> bool:
        if r1 == None and r2 == None:
            return True
        if r1 == None or r2 == None:
            return False
        
        return (r1.val == r2.val) and self.isMirror(r1.left, r2.right) and self.isMirror(r1.right, r2.left)
        
    def isSymmetric(self, root: TreeNode) -> bool:
        return self.isMirror(root, root)
        