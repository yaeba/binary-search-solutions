class Solution:
    def solve(self, sentence):
        return " ".join(sentence.split(" ")[::-1])
