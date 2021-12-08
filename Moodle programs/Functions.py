#M6_CSQ1
def strf(s1,s2):
    sp=int(input())
    if s2 not in s1:
        print("NotAvailable")
    elif len(s1)==len(s2) and sp==3:
        print(s1.find(s2)-2)
    elif s2 in s1:
        print(s1.find(s2)-sp)
S1=input()
S2=input()
strf(S1,S2)
