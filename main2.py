import math

class Point:
    x = 0
    y = 0
    def __init__(self, x = 0, y = 0):
        self.x = x
        self.y = y
    def output(self):
        print("OUTPUT X AND Y COORDINATES OF A POINT")
        print("x = " + str(self.x) + "; y = " + str(self.y))
    def distanceTo(self, other):
        return math.sqrt((other.x - self.x) * (other.x - self.x) + (other.y - self.y) * (other.y - self.y))

A = Point(7.2, 10.15)
B = Point(3.2, 5.4)
print("AB = " + str(A.distanceTo(B)))