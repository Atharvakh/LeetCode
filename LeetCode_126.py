from typing import List
import queue
def findLadders(self, beginWord: str, endWord: str, wordList: List[str]) -> List[List[str]]:
    wordSet = set(wordList)
    if endWord not in wordSet:
        return []

    # Queue stores paths, like your code, but the search must be level-based
    q = queue.Queue()
    q.put([beginWord])

    ans = []
    min_len = float('inf')

    # Store words visited in the current level to remove them ONLY for the *next* level
    # This prevents short paths from blocking other short paths on the same level
    visited_this_level = set([beginWord])

    while not q.empty():
        # Optimization: If the current path length is already > min_len, we can stop
        if len(q.queue[0]) > min_len:
            break

        # Process all paths on the current level
        for _ in range(q.qsize()):
            path = q.get()
            word = path[-1]

            if word == endWord:
                # We found the first shortest path, so update min_len and add it.
                # All remaining paths in the current level with this length are also shortest paths.
                min_len = len(path)
                ans.append(path)
                continue # No need to check friends if it's the endWord

            # Find unvisited friends
            for w in self.get_friends_from_set(word, wordSet):
                # Friends that have NOT been visited in previous levels

                # Add friend to the set to be removed for the *next* level
                visited_this_level.add(w)

                # Add the new path to the queue
                q.put(path + [w])

        # Remove all words visited on the just-completed level from the dictionary
        # This prevents longer paths from revisiting them in the next level
        wordSet -= visited_this_level
        visited_this_level = set()

    return ans


beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log","cog"]
solution_instance = Solution()
solution = solution_instance.findLadders(beginWord, endWord, wordList)
print(solution)