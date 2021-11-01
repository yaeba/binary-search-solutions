class Solution:
    def solve(self, words):
        s = set()
        for word in words:
            for x in [word[:i] + "*" + word[i + 1 :] for i in range(len(word))]:
                if x in s:
                    return True
                s.add(x)
        return False
