class Solution:
    def snakesAndLadders(self, board: List[List[int]]) -> int:
        n = len(board)
        board.reverse()

        new_board = []
        for i in range(n):
            if i % 2 == 0:
                new_board.extend(board[i])
            else:
                new_board.extend(board[i][::-1])

        q = deque([(1, 0)])  
        visited = {1}

        
        while q:
            cur, moves = q.popleft()
            
            if cur == n * n:
                return moves
            
            for i in range(1, 7):
                next_square = cur + i
                if next_square <= n * n:
                    final_square = new_board[next_square - 1] if new_board[next_square - 1] != -1 else next_square
                    
                    if final_square not in visited:
                        visited.add(final_square)
                        q.append((final_square, moves + 1))
        
      
        return -1
