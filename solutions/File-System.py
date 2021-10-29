class FileSystem:
    def __init__(self):
        self.files = {"/": 0}

    def get(self, path):
        return self.files.get(path, -1)

    def create(self, path, content):
        import os

        parent = os.path.dirname(path)
        if parent in self.files:
            exists = path not in self.files
            self.files[path] = self.files.get(path, content)
            return exists
        return False
