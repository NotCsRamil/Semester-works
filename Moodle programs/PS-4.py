#1
'''
import numpy as np
s1=eval(input());
s2=eval(input());
s3=eval(input());
s4=eval(input());
s5=eval(input());
L1=[]
L2=[]
L3=[]
for i in s1:
    if i<50:
        L1.append(i)
for i in s2:
    if i<50:
        L1.append(i)
for i in s3:
    if i<50:
        L1.append(i)
for i in s4:
    if i<50:
        L1.append(i)
for i in s5:
    if i<50:
        L1.append(i)
X=np.array(L1);
for i in s1:
    if i>90:
        L2.append(i)
for i in s2:
    if i>90:
        L2.append(i)
for i in s3:
    if i>90:
        L2.append(i)
for i in s4:
    if i>90:
        L2.append(i)
for i in s5:
    if i>90:
        L2.append(i)
Y=np.array(L2);
if s1[4]>50:
    L3.append(s1[4])
if s2[4]>50:
    L3.append(s2[4])
if s3[4]>50:
    L3.append(s3[4])
if s4[4]>50:
    L3.append(s4[4])
if s5[4]>50:
    L3.append(s5[4])
Z=np.array(L3)
print(X);
print(Y);
print(Z);
'''
#2
'''
import pandas as pd

m1=eval(input())
m2=eval(input())
marks=[m1,m2]
grades = []
for i in range(2):
    gr=['A' if x>=90 else 'B' if x>=80 else 'C' if x>=60 else 'F' for x in marks[i]]

    grades.append(gr)
data = {
  'Mark-1' : grades[0],
  'Mark-2' : grades[1]
}

subjects=['Maths','Eng','Cs','Phy','Che','Bio']
final = pd.DataFrame(data, index = subjects)
print(final)
'''
