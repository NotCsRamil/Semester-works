#M5_CSQ1
'''Str=input()
for i in Str:
    if i.isupper():
        print(i.lower(),end="")
    else:
        print(i.upper(),end="")'''

#M5_CSQ2
'''S=input()
Letters = list(S)
Dict = dict.fromkeys(Letters,0)
if len(Letters) != len(Dict.keys()): 
          print("BAD")
else:
    print("GOOD")'''

#M5_CSQ3
'''S1=input()
S2=input()
if S2.lower() not in S1:
    print("Not Found")
if S2.lower() in S1:
    
    for i in S1.split():
        F=S1.find(S2.lower())
        F1=len(S2)
    print(F)
    print(F+F1)'''

#M5_CSQ4
'''import re
s="Rahul got 75 marks, Vijay got 55 marks, whereas Subbu got 98 marks"
p1="\d+"
p2="^[A-Z]"

result1 = re.findall(p1,s)

print(result1)
L=[]
for i in s.split():
    if re.findall(p2,i):
        #print(i,end="")
        L.append(i)
print(L)'''

#M5_CSQ5
'''import re
pattern = '^[aAeEiIoOuU]'
txt = "An apple for a day keeps the doctor away"
for I in txt.split():
    if re.findall(pattern,I):
        print(I)'''
        

