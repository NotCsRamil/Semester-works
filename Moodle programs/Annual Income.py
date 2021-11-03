A=float(input())
if A>1000000:
    income=0.04*A
    print(int(income))
elif A>500000 and A<=1000000:
    income=0.02*A
    print(int(income))
else:
    print("0")
