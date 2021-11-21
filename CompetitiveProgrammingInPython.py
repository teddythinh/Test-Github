n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
# find the number that is not in b
for i in range(n):
    if a[i] not in b:
        print(a[i])
        break

