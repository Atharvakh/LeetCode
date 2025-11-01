class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        alphadig = {'2': 'abc', '3': 'def', '4': 'ghi', '5': 'jkl', '6': 'mno', '7': 'pqrs', '8': 'tuv', '9': 'wxyz'}
        l=[]
        for i in digits:
            if i in alphadig:
                l.append(alphadig[i])
        results = ['']
        #print(l)
        for s in l:
            temp = []
            for prefix in results:
                for char in s:
                    temp.append(prefix + char)
            results = temp
        return results