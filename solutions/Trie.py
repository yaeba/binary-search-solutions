class Trie:
    def __init__(self):
        self.trie = {}

    def add(self, s):
        subtree = self.trie
        for c in s:
            if c not in subtree:
                subtree[c] = {}
            subtree = subtree[c]
        subtree["$"] = None

    def exists(self, word):
        return self.startswith(word + "$")

    def startswith(self, p):
        subtree = self.trie
        for c in p:
            if c not in subtree:
                return False
            subtree = subtree[c]
        return True
