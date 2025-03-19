# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# utilizes Neetcode solution in python, I tried to convert it to c++ but it was a bit more complex
class Solution:
    def rob(self, root: Optional[TreeNode]) -> int:
        # depth first search for a tree
        def dfs(root):
            if not root:
                # null base case
                return [0,0]

            # consider the left and right sections of a tree
            leftPair = dfs(root.left)
            rightPair = dfs(root.right)


            # consider taking even or odd levels of a tree
            withRoot = root.val + leftPair[1] + rightPair[1]
            withoutRoot = max(leftPair) + max(rightPair)

            # return both in an array
            return [withRoot, withoutRoot]
        # take the maximum of final 
        return max(dfs(root))
        
