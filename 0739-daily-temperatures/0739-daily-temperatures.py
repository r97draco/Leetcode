class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        res = [0]* len(temperatures)
        stack  = []
        for index, val in enumerate(temperatures):
            if not stack:
                stack.append([val, index])
            else:
                item = [val, index]
                top = stack[-1]
                      
                while stack and item[0]>top[0]:
                    res[top[1]]= item[1]-top[1]
                    stack.pop()
                    if stack:
                        top = stack[-1]
                stack.append(item)
            
        return res
                    
        
        