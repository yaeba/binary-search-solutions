import itertools


class TwoDimensionalIterator:
    def __init__(self, lists):
        self.it = itertools.chain(*lists)
        self.next_val = next(self.it, None)

    def next(self):
        res, self.next_val = self.next_val, next(self.it, None)
        return res

    def hasnext(self):
        return self.next_val is not None
