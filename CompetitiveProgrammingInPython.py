line = input()
a, b, c, d, e = line.split()
a = int(a)
b = int(b)
c = int(c)
d = int(d)
e = int(e)
r = int(input())
if r >= a:
    print("A")
elif r >= b:
    print("B")
elif r >= c:
    print("C")
elif r >= d:
    print("D")
elif r >= e:
    print("E")
else:
    print("F")

