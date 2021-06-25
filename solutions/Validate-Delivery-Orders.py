class Solution:
    def solve(self, orders):
        d = {}
        for order in orders:
            orderId = order[1:]

            if order[0] == "P":
                if orderId in d:
                    return False
                else:
                    d[orderId] = False
            else:
                if orderId not in d or d[orderId]:
                    return False
                else:
                    d[orderId] = True

        return all(d.values())
