"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        from collections import deque
        
        if not root:
            return 0
        
        depth = 0
        q = deque()
        q.append(root)
        
        while q:
            for ele in range(len(q)):
                cur = q.popleft()
                
                for child in cur.children:
                    q.append(child)
                    
            depth += 1
            
        return depth
        
        