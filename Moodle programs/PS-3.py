#1
'''import re
txt=input().split()
i1=input()
i2=int(input())
i3=input()
i4=int(input())
for i in txt:
    if re.match(i1,i[0]) and len(i)==i2:
        print(i)
    elif re.match(i3,i[-1])and len(i)==i4:
        print(i)'''
#2
'''import re
txt = re.split(" ",input())
i1=input()
i2=input()
for i in txt:
    if re.match(i1,i[0]) and re.match(i2,i[-1]):
        print(i)'''
#3
'''def Check_21BCE3454(n):
    if int(n[0])==len(n):
        print("yes")
    else:
        print("no")
a=input()
Check_21BCE3454(a)'''

#4
'''d=eval(input())
def Salary_21BCE3454(L):
    L.sort(key=lambda x:x["salary"])
    print(L[-2]["id"])
    print(L[1]["id"])
Salary_21BCE3454(d)'''


