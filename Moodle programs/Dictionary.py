#M4_CSQ5
D=()
c={}
N=int(input())#dict
for i in range(N):
    S=int(input())#no of subjects
    D1={}
    for j in range(S):
        Sub=input()#subjects
        c[Sub]=0
        m1=int(input())#marks
        D1[Sub]=m1
    D+=(D1,)
#print(D)
#c={m1:0}
D2=()
for i in D:
    for key in i.keys():
        if i[key]<50:
            c[key]+=1
for i in c.keys():
    print(i)
    print(c[i])
