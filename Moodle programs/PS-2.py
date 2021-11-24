#1
'''M=int(input())
if M<0:
    print("Invalid")
if M>90:
    print("S")
elif M>=81 and M<=90:
    print("A")
elif M>=71 and M<=80:
    print("B")
elif M>=61 and M<=70:
    print("C")
elif M>=50 and M<=60:
    print("D")
elif M>=0 and M<=49:
    print("F")'''

#2
'''N=int(input())
D=int(input())#digit
C1,C2,C3=0,0,0
while N>0:
    rem=N%10
    N=N//10
    if (rem>D):
        C1+=1
    if (rem<D):
        C2+=1
    elif rem==D:
        C3+=1

print(C1)
print(C2)
print(C3)'''

#3
'''L=[]
N1=int(input())
for i in range(N1):
    a=int(input())
    L.append(a)
print(L)
C1,C2,C3=0,0,0
N=int(input())
for i in L:
    if i>N:
        C1+=1
    if i<N:
        C2+=1
    if i==N:
        C3+=1
print(C1)
print(C2)
print(C3)'''

#4
'''D=()
N=int(input())
for i in range(N):
    D1={}
    S=int(input())
    for j in range(S):
        lp=input()
        C=int(input())
        D1[lp]=C
    D+=(D1,)
#print(D)
L=int(input())#range1
H=int(input())#range2
for i in D:
    for key,value in i.items():
        if value>=L and value<=H:
            print(key)
            print(value)'''



    
