#Q4
'''import math 
a = complex(input("Enter no"))
b = complex(input("Enter no"))
s = a+b
print(complex(s))
print(s.real,"is the real part")
print(s.imag,"is imaginary part")'''

'''#Q1
N = int(input("Enter no of days")) 
age = N*24*60*60
print("age=",age)'''

'''#Q5
a = int(input("Enter side a=")) 
b = int(input("Enter side b="))
c = int(input("Enter side c="))

S = (a+b+c)/2


A = (S*(S-a)*(S-b)*(S-c))**0.5
print(A)'''

'''#Q2
a = int(input("Enter qty in litres"))
b = int(input("Enter qty in ml"))
S = a+b
print(S)
print(S//1000, "litres")
print(S%1000, "ml")'''

'''#Q3
x = int(input("Enter your number"))
numbers = [1,4,5,9,10,40,50,90,100,400,500,900,1000]
roman = ['I','IV','V','IX', 'X','XL', 'L','XC', 'C','CD', 'D','CM','M']
i = 12  
roman_numeral = ''
while x != 0:
    if numbers[i] <= x:    
        roman_numeral += roman[i] 
        x = x - numbers[i]
    else:
        i -= 1 # i = i - 1
print(roman_numeral)'''


'''a = 1;print("a value is",a);a=2;print(a)
b = 1.234;print(b);
print(format(b,".2f"));
bool(1)
bool(0)
bool("abc")
bool(False)
bool("False")
c=True;d="abcd"
e=1+2j;f=2+3j;print(e,'\t',f);
g=e+f;print("Real part of g is ",g.real,'\t',"Imaginary part of g is ",g.imag)
p=2;q=4
print(p,'\t',q)
#tuple assignment
p,q,r=1,2,3;print(p,'\t',q)
#sequence assignment
p,q="ab";print(p,'\t',q)
#list assignment
[p,q]=["ab","c"];print(p,'\t',q)'''

'''a = 'apple'
print(a)
a,*b = 'All';print(a,'\t',b);
a,b,*c = 'apple';print(a,'\t',b,'\t',c);
[a,b,c] = ['a','pple','e'];print(a,'\t',b,'\t',c);
a,b,c,d = range(1,5);
print(a,'\t',b,'\t',c,'\t',d);
a,b = range(1,5,2);
print(a,'\t',b);
a,b,c,d = range(2,10,2);
print(a,'\t',b,'\t',c,'\t',d);
a,b,c,d = range(2,9,2);
print(a,'\t',b,'\t',c,'\t',d);
a,b,c,d = range(8,1,-2);
print(a,'\t',b,'\t',c,'\t',d);'''

'''Dist=int(input("Enter distance"))
if Dist<0:
    print("Enter positive number only")
elif Dist<=10:
    bill = Dist*15
    print(bill)
elif Dist>10 and Dist<=100:
    bill=(Dist-10)*8+10*15
    print(bill)
else:
    bill=(Dist-90)*15+90*6
    print(bill)'''

'''M=float(input())

if M==0:
    print("Enter appropriate Mark")
  
 
if M>=80:
    if M!=0:
        
        c=input()
        if c=="T":
            bonus=M+M*0.08
            print(bonus)
        elif c=="L":
            bonus=M+M*0.06
            print(bonus)

if M>=60 and M<80:
    if M!=0:
        
        c=input()
        if c=="T":
            bonus=M+M*0.06
            print(bonus)
        elif c=="L":
            bonus=M+M*0.04
            print(bonus)

if M>=40 and M<60:
    if M!=0:
        
        c=input()
        if c=="T":
            bonus=M+M*0.04
            print(bonus)
        elif c=="L":
            bonus=M+M*0.02
            print(bonus)
if M<40:
    if M!=0:
        
        c=input()
        if c=="T":
            bonus=M+M*0
            print(bonus)
        elif c=="L":
            bonus=M+M*0
            print(bonus)'''
'''S='122'
if S.isdigit():
    Sum=int(S[0])+int(S[1])+int(S[2])
    print(Sum)'''


'''n=int(input())
sum = 0
S=0
for digit in str(n): 
    sum += int(digit)
if sum<10:
    print(sum)
if sum>10:
    for i in str(sum):
        S+=int(i)
    print(S)'''

'''P=int(input())
D=int(input())
B=int(input())#1=yes 0=no
if P<0 or D<0 or B<0:
    print("Enter Only Positive Value Please!")
if P==1 and B==1:
    bill = P*3000*D + 500*D*P
    print(bill)
if P==1 and B==0:
    bill = P*3000*D
    print(bill)
elif P%2==1 and B==1:
    bill = ((P//2)*4000 + 3000)*D + 500*P*D 
    print(bill)

elif P%2==0 and B==0:
    bill = ((P//2)*4000)*D
    print(bill)'''

'''year=int(input())
if (year%400==0) or (year%100!=0) and (year%4==0):
    print("leap year")
else:
    print("not leap year")'''

#*
#**
#***
'''n=int(input())
for i in range(1,n+1):
    for st in range(1,i+1):       
        print("*",end="")
    for sp in range(1,n-i+1):
        print("",end="")
    print()'''

#  *
 #**
#***
'''n=int(input())
for i in range(1,n+1):
    for sp in range(1,n-i+1):
        print(" ",end="")
    for st in range(1,i+1):       
        print("*",end="")
    print()'''


#***
#**
#*
'''n=int(input())
for i in range(1,n+1):
    for st in range(1,n-i+2):       
        print("*",end="")
    for sp in range(1,i):
        print("",end="")
    print()'''


#***
 #**
 # *
'''n=int(input())
for i in range(1,n+1):
    for sp in range(1,i):
        print(" ",end="")
    for st in range(1,n-i+2):       
        print("*",end="")
    print()'''

#*
#**
#***
#***
#**
#*

'''n=int(input())
for i in range(1,n+1):
    for st in range(1,i+1):       
        print("*",end="")
    for sp in range(1,n-i+1):
        print("",end="")
    print()
for i in range(1,n+1):
    for st in range(1,n-i+2):
        print("*",end="")
    for sp in range(1,i):
        print("",end="")
    print()'''
 
        
#bddddb
#bbddbb
#bbbbbb

'''n=int(input())
for i in range(1,n+1):
    for b in range(1,i+1):
        print("b",end="")
    for d in range(1,n-i+1):
        print('d',end='')
    for d in range(1,n-i+1):
        print("d",end="")
    for b in range(1,i+1):
        print('b',end='')
    print()'''

'''T1=("Education","Primary",50,"Secondary",25,"Higher",20)
T2=("Defense","Army",25,"Airforce",40,"Navy",45)
T3=()
T4=()
T5=()
#T3+=((T1[0],T1[2]+T1[4]+T1[6]),(T2[0],T2[2]+T2[4]+T2[6]))
#for i in range(len(T1)):
T3+=((T1[0],sum(T1[2::2])))
T4+=((T2[0],sum(T2[2::2])))
T5=((T3),(T4))
print(T5)'''

'''t=[]
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


print(tuple(t))
T1=()
for i in range(len(t)):
    T1+=((t[i][0],sum(t[i][2::2])),)
    
print((T1),)'''

'''Car1={"vehNo":"TN23NJ1234","color":"Black","Model":2019}
print(Car1)
for ele in Car1:
    print(Car1[ele])
Car2={"vehNo":"TN23AB1001","color":"RedndBlack","Model":2020}
CarD={101:Car1,102:Car2}
for ele in CarD:
    print(ele)
print(CarD[101])
print(CarD[101]["vehNo"])'''

'''D=()
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
print("2")'''

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
elif M>=51 and M<=60:
    print("D")
elif M>0 and M<=49:
    print("F")'''

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

'''S=input()
Letters = list(S)
Dict = dict.fromkeys(Letters,0)
if len(Letters) != len(Dict.keys()): 
          print("BAD")
else:
    print("GOOD")'''

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

'''import re
pattern = '^[aAeEiIoOuU]'
txt = "An apple for a day keeps the doctor away"
for I in txt.split():
    if re.findall(pattern,I):
        print(I)'''
        


