class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m , n = len(matrix), len(matrix[0])
        print(m, n)
        ans = False
        for i in range(m):
            l = 0
            r = n-1
            if target >= matrix[i][l] and target <= matrix[i][r]:
                idx = bisect.bisect_right(matrix[i], target)
                if idx >0 and matrix[i][idx-1]==target:
                    ans = True
                    return ans
        
        return ans;
        