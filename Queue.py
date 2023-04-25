import numpy as np

class que:
    def __init__(self, size:int = 10, dtype = np.float32) -> None:
        self.__front = 0
        self.__rear = 0
        self.size = size
        self.__li = np.zeros((size+1), dtype=dtype)

    def append(self, val) -> bool:
        if (self.__rear + 1) % self.size == self.__front:
            return 0
        self.__li[self.__rear] = val
        self.__rear = (self.__rear + 1) % self.size
        return 1

    def pop(self) ->bool:
        if self.__front == self.__rear:
            return False
        self.__front = (self.__front + 1) % self.size 
        return 1
    
    def get_head(self):
        if self.__front == self.__rear:
            raise EOFError
        return self.__li[self.__front]  
    
    def print_val(self):
        i = self.__front
        while i != self.__rear:
            print(self.__li[i], end='  ')
            i = (i + 1) % self.size

    def __del__(self):
        del self.__li

if __name__ == "__main__":
    q = que(15, np.int8)
    for _ in range(5):
        for _ in range(2):
            q.pop()
        for i in range(5):
            q.append(i)
    print(q.get_head())
    q.print_val()
