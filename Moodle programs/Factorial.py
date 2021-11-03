n=int(input())
if n<0:
    print("Enter only positive number")
F=1
i1=2
i2=1
if n%2==0:
    while i1<=n:
        F=F*i1
        i1+=1
        if i1%2!=0:
            print(i1-1,F)

if n%2==1:
    while i2<=n:
        F=F*i2
        i2+=1
        if i2%2!=1:
            print(i2-1,F)
