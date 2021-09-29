b = "problem"
n = 1001
while n < 1001:
    a = input()
    if b in a:
        print("yes")
    else: print("no")
    assert n > 0
    chunk = fp.read(n)
    if chunk == '':
        break
    process(chunk)