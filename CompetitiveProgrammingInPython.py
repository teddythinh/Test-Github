# a = int(input())
# b = int(input())

# def isSquare(n):
#     return int(n ** 0.5) ** 2 == n

# def reverse(n):
#     if n % 10 == 0:
#         return 0
#     return int(str(n)[::-1])

# count = 0

# for i in range(a, b + 1):
#     temp = reverse(i)
#     if temp % 10 == 0:
#         continue
#     if isSquare(i) and isSquare(reverse(i)):
#         count += 1
# print(str(count))

n = int(input())
count = 0
for i in range(n):
    a = str(input())
    t1 = "a"
    t2 = "e"
    t3 = "i"
    t4 = "o"
    t5 = "u"
    t6 = "ea"
    if t1 in a:
        count += 1
    if t2 in a:
        count += 1
    if t3 in a:
        count += 1
    if t4 in a:
        count += 1
    if t5 in a:
        count += 1
    print(count)
    count = 0


   
