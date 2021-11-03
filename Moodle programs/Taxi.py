Dist=int(input())
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
    print(bill)
