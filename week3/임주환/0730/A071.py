class MyQueue:

    def __init__(self):
        self.Q = []

    def push(self, x: int) -> None:
        self.Q.append(x)

    def pop(self) -> int:
        tmp = self.Q[0]
        del self.Q[0]
        return tmp

    def peek(self) -> int:
        return self.Q[0]

    def empty(self) -> bool:
        if len(self.Q) == 0:
            return True
        else:
            return False


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()