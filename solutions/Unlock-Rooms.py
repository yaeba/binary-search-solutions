class Solution:
    def solve(self, rooms):
        unlocked = [False] * len(rooms)
        unlocked[0] = True
        stack = [0]

        while stack:
            for other in rooms[stack.pop()]:
                if not unlocked[other]:
                    stack.append(other)
                    unlocked[other] = True

        return all(unlocked)
