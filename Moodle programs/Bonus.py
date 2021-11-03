M=float(input())

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
            print(bonus)
   
