class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        count = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j]=="1":
                    count += 1
                    def makeIslandSea(m, n):
                        if m>=0 and m<len(grid) and n>=0 and n<len(grid[0]) and grid[m][n]=="1":
                            grid[m][n]="0"
                            print("m :",m ,"  n: ",n)
                            makeIslandSea(m-1, n)
                            makeIslandSea(m, n-1)
                            makeIslandSea(m+1, n)
                            makeIslandSea(m, n+1)
                    makeIslandSea(i,j)
                            
        return count

                            
                 
                            
        