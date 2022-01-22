class BooleanArray:
    def __init__(self):
        self.default = False
        self.d = {}

    def setTrue(self, i):
        self.d[i] = True

    def setFalse(self, i):
        self.d[i] = False

    def setAllTrue(self):
        self.default = True
        self.d = {}

    def setAllFalse(self):
        self.default = False
        self.d = {}

    def getValue(self, i):
        return self.d[i] if i in self.d else self.default
