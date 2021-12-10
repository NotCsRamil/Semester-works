#M6_CSQ1
'''def strf(s1,s2):
    sp=int(input())
    if s2 not in s1:
        print("NotAvailable")
    elif len(s1)==len(s2) and sp==3:
        print(s1.find(s2)-2)
    elif s2 in s1:
        print(s1.find(s2)-sp)
S1=input()
S2=input()
strf(S1,S2)'''

#M6_CSQ2
'''L=input() #(35,94) inputted as a string
L=L[1:len(L)-1].split(",") #["35", "94"]
m=int(L[0])
n=int(L[1])
def C_R(heads,legs):
    if legs%2!=0 or heads==0 or heads>legs:
        print("No solution")
    else:
        r=(legs-2*heads)//2
        c=heads-r
    return r,c
F=print(C_R(m,n))'''
