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
        S=0
print(S)'''
