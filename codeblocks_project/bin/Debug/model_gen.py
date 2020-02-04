from random import *


def cap_module(n, x):
    if abs(n) > x:
        n = x * abs(n) / n
    return n

size = 21
file = open('out.txt', 'w')
arr = [[[0, -size/2 + j + 0.5, -size/2 + i + 0.5] for i in range(size)] for j in range(size)]
for i in range(1, len(arr)):
    for j in range(1, len(arr[i])):
        
        x = (arr[i - 1][j - 1][0] + arr[i - 1][j][0] + arr[i][j - 1][0]) / 3
        x += uniform(-0.75, +0.75)
        x = cap_module(x, 3)
        arr[i][j][0] = x
        #arr[i][j][1] *= -1
        #arr[i][j][2] *= -1

for i in range(len(arr)):
    for j in range(len(arr[i])):
        print('p {} {} {}'.format(arr[i][j][0], arr[i][j][1], arr[i][j][2]), file=file)

def f(i, j):
    return len(arr[0]) * j + i + 1

for i in range(1, len(arr)):
    for j in range(1, len(arr[i])):
        print('e {} {} {}'.format(f(i, j), f(i - 1, j), f(i - 1, j - 1)), file=file)
        print('e {} {} {}'.format(f(i, j), f(i, j - 1), f(i - 1, j - 1)), file=file)
file.close()