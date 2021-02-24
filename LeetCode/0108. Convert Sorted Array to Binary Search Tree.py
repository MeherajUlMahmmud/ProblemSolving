# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> TreeNode:
        def constructBSTRec(nums, left, right):
            if left <= right:
                mid = (left + right) // 2
                cur = TreeNode(nums[mid])
                cur.left = constructBSTRec(nums, left, mid - 1)
                cur.right = constructBSTRec(nums, mid + 1, right)
                
                return cur
            
        return constructBSTRec(nums, 0, len(nums) - 1)
        