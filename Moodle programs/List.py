#sum of all elements
'''L=[]
N=int(input())#size of list
for i in range(N):
    a=int(input())
    L.append(a)
print(L)
print(sum(L))'''

#sum of Left and right elements
'''L=[]
S=int(input())#size
for i in range(S):
    a=int(input())
    L.append(a)
for i in range(1,len(L)):
    left = L[:i]
    right = L[i+1:]
    if sum(left)==sum(right):
        print(L.index(L[i]))
    elif sum(left)!=sum(right):
        Sum=0
print(Sum)'''
#M4_CSQ3
'''L=[]
N=int(input())
S=int(input())
for i in range(N):
    L1=[]
    for j in range(S):
        a=input()
        L1.append(a)
    L.append(L1)
for i in range(len(L)):
    L[i][2]=int(L[i][2])
    L[i][4]=float(L[i][4])
#print(L)



k=int(input())#index
v=input()#value
L2=[]
for i in range(len(L)):
    if v==L[i][k]:
        L2+=L[i][0:6]
    if v.isdigit():
        if int(v)==L[i][k]:
            L2+=L[i][0:6]

print(L2)'''
