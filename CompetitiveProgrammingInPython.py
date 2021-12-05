m = str(input())
n = int(input())

min_pos = 0
min_val = 10000000000
min_val = int(min_val)
swap_pos = 0

for i in range(len(m)):
    value = 0
    value = int(value)
    temp_swap_pos = 0
    if i == 0:
        value = m[i] + m[i + 1]
        temp_swap_pos = i + 1
    elif i == len(m) - 1:
        value = m[i] + m[i-1]  
        temp_swap_pos = i - 1
    else: 
        if m[i - 1] <= m[i + 1]:
            value = m[i - 1] + m[i]
        else:
            value = m[i] + m[i + 1]
        if m[i - 1] <= m[i + 1]:
            temp_swap_pos = i - 1
        else: 
            temp_swap_pos = i + 1
    if min_val > value or (min_val == value and m[min_pos] > m[i]):
        min_pos = i
        min_val = value
        swap_pos = temp_swap_pos

while (True):
    n -= 1
    if n == 0: break
    print(m[min_pos])
    swap(min_pos, swap_pos)

