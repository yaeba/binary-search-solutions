class RateLimiter:
    def __init__(self, expire):
        self.last = {}
        self.expire = expire

    def limit(self, uid, timestamp):
        time = self.last.get(uid)
        if time is None or timestamp - time >= self.expire:
            self.last[uid] = timestamp
            return False
        return True
