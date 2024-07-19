class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        m = set()
        for i in range(len(matrix)):
            m.add(min(matrix[i]))
        
        ans=[]
        for j in range(len(matrix[0])):
            cand = matrix[0][j]
            for i in range(len(matrix)):
                if matrix[i][j]>cand:
                    cand = matrix[i][j]
            if cand in m:
                ans.append(cand)
        return ans
