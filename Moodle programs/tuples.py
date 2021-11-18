#M4_CQS4
t=[]
N=int(input())#tuples
for i in range(N):
    T=[]
    S=int(input())#size
    for i in range(S):
        a=input()
        try:
            a=int(a)
        except:
            pass
        
        T.append(a)
    t.append(T)
    #print(T)
#print(tuple(t))


#print(tuple(t))
T1=()
for i in range(len(t)):
    T1+=((t[i][0],sum(t[i][2::2])),)
    
print((T1),)
