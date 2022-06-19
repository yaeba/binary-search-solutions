class VirtuallyCloneableStacks:
    def __init__(self):
        self._sizes = [0]

    def copyPush(self, i):
        self._sizes.append(self._sizes[i] + 1)

    def copyPop(self, i):
        self._sizes.append(self._sizes[i] - 1)

    def size(self, i):
        return self._sizes[i]
