import time

def fib(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return fib(n-1) + fib(n-2)

a = int(input())

t1 = time.time_ns()


print(fib(a))


t2 = time.time_ns()

print(t2-t1)