a = int(input())
for i in range(a):
    b = input()
    if b == "N=NP":
        print("skipped")
    else:
        ans = int(b[0]) + int(b[2])
        print(ans)

