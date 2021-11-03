n=int(input())
sum = 0
S=0
for digit in str(n): 
    sum += int(digit)
if sum<10:
    print(sum)
if sum>10:
    for i in str(sum):
        S+=int(i)
    print(S)
