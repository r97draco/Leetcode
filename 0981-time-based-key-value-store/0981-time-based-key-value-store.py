class TimeMap:

    def __init__(self):
        self.db = {}

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key in self.db:
            self.db[key].append([value, timestamp])
        else:
            self.db[key] = [[value, timestamp]]

    def get(self, key: str, timestamp: int) -> str:
        if key not in self.db:
            return ""
        arr = self.db[key]
        # timestamps = [entry[1] for entry in arr]
        # index = bisect.bisect_right(timestamps, timestamp)
        # if index == 0:
        #     return ""
        # else:
        #     # Return the corresponding value
        #     return arr[index - 1][0]
        # Binary search for the closest timestamp
        left, right = 0, len(arr) - 1
        while left <= right:
            mid = (left + right) // 2
            if arr[mid][1] <= timestamp:
                left = mid + 1
            else:
                right = mid - 1

        if right == -1:
            return ""
        else:
            return arr[right][0]
        


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)