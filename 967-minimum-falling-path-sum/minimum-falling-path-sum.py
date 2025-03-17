class Solution(object):
    def minFallingPathSum(self, matrix: List[List[int]]) -> int:
        # DYNAMIC 
        totalLength = len(matrix)
        # iterate through row
        for row in range(1, totalLength):
            for col in range(totalLength):
                # middle value
                middle = matrix[row-1][col]
                # left 
                left = matrix[row-1][col-1] if col > 0 else float("inf")
                right = matrix[row-1][col+1] if col < totalLength-1 else float("inf")
                matrix[row][col] = matrix[row][col] + min(middle, left, right) # adding the next value of the matrix 
        return min(matrix[-1]) # this will give last array value 

        # RECURSIVE METHOD 
        """
        :type matrix: List[List[int]]
        :rtype: int
        """
        '''
        totalLength = len(matrix)
        cache = [] # empty array 

        # recursive depth first search to run on every column
        def depthSearch(row1, col1):
            # basecases
            # row outta bounds 
            if row1 == totalLength:
                return 0
            # col out of bounds 
            if col1 < 0 or col1 == totalLength:
                return float(inf)
            if(row1, col1) in cache:
                return cache[(row,col)]

            result = matrix[row1][col1] + min(
                depthSearch(row1 + 1, col1 - 1), 
                depthSearch(row1 + 1, col1), 
                depthSearch(row1 + 1, col1 + 1))
            return result



        # set final result to a big number 
        result = float(inf) 
        for col1 in range(totalLength):
            result = min(result, depthSearch(0,col1)) # go thru every col in first      row
        return result
        '''
   
        