import time

n = int(input())

t1 = time.time_ns()

a = 0
b = 1
for i in range(0, n):
    temp = b
    b = a + b
    a = temp

print(a)

t2 = time.time_ns()

print(t2-t1)