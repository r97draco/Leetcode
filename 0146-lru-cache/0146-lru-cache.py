class Node:
    def __init__(self, key: int, val : int):
        self.key, self.val = key, val
        self.next = self.prev = None
        
class LRUCache:

    def __init__(self, capacity: int):
        self.cap = capacity
        self.cache = {}
        self.right , self.left = Node(0,0), Node(0,0)
        self.right.prev, self.left.next = self.left, self.right
    
    #remove LRU cache from left
    def remove(self, node: Node) -> None:
        prev, next = node.prev, node.next
        prev.next, next.prev = next, prev

    #insert the most recent on right
    def insert(self, node: Node) -> None:
        prev,next = self.right.prev, self.right
        prev.next = next.prev = node
        node.next , node.prev = next, prev
    
    def get(self, key: int) -> int:
        if key in self.cache:
            node = self.cache[key]
            self.remove(node)
            self.insert(node)
            return node.val
        return -1

    def put(self, key: int, value: int) -> None:
        if key in self.cache:
            node = self.cache[key]
            self.remove(node)
        node = Node(key, value)
        self.insert(node)
        self.cache[key]= node
        if len(self.cache) > self.cap:
            lru = self.left.next
            self.remove(lru)
            self.cache.pop(lru.key)


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)