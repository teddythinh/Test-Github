print("Today's date?")
date = input()
print("Breakfast calories?")
b = int(input())
print("Lunch calories?")
l = int(input())
print("Dinner calories?")
d = int(input())
print("Snack calories?")
s = int(input())
sum = b + l + d + s
print("calorie content for " + date + ": " + str(sum))