class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        if endWord not in wordList:
            return 0
        pattern_dict = defaultdict(list)
        
        for word in wordList:
            for i in range(len(word)):
                pattern = word[:i] + '*' + word[i+1:]
                pattern_dict[pattern].append(word)

        q = [(beginWord, 1)]
        visited = set([beginWord])
        
        while q:
            current_word, depth = q.pop(0)
            for i in range(len(current_word)):
                pattern = current_word[:i] + '*' + current_word[i+1:]

                for neighbor in pattern_dict[pattern]:
                    if neighbor == endWord:
                        return depth + 1
                    if neighbor not in visited:
                        visited.add(neighbor)
                        q.append((neighbor, depth + 1))
        
        return 0
