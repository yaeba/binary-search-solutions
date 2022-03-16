class UndergroundTunnel:
    def __init__(self):
        self.history = {}
        self.checked_in = {}

    def checkIn(self, user_id, station, timestamp):
        assert user_id not in self.checked_in
        self.checked_in[user_id] = (station, timestamp)

    def checkOut(self, user_id, end_station, end_time):
        assert user_id in self.checked_in
        start_station, start_time = self.checked_in.pop(user_id)
        time, n = self.history.get((start_station, end_station), (0, 0))
        self.history[(start_station, end_station)] = (time + end_time - start_time, n + 1)

    def averageTime(self, start, end):
        time, n = self.history[(start, end)]
        return time / n
