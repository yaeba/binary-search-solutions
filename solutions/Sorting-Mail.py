class Solution:
    def solve(self, mailboxes):
        queue = [(i, 0) for i in range(len(mailboxes))]
        res = []
        for i, j in queue:
            if j < len(mailboxes[i]):
                if mailboxes[i][j] != "junk":
                    res.append(mailboxes[i][j])
                # enqueue next
                queue.append((i, j + 1))
        return res
