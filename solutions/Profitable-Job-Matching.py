class Solution:
    def binary_search(person, profitJob):
        def condition(idx):
            _, job = profitJob[idx]
            return person >= job

        left, right = 0, len(profitJob) - 1
        while left < right:
            mid = left + (right - left) // 2
            if condition(mid):
                right = mid
            else:
                left = mid + 1

        return left

    def solve(self, people, jobs, profits):
        profitJob = sorted(((profit, job) for profit, job in zip(profits, jobs)), reverse=True)
        profitJob.append((0, 0))

        for idx, (profit, job) in list(enumerate(profitJob))[1:]:
            profitJob[idx] = (profit, min(job, profitJob[idx - 1][1]))

        return sum(profitJob[Solution.binary_search(person, profitJob)][0] for person in people)
