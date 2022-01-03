#file
#M6_CSQ4
f1=open("Questions.txt","w")
f2=open("Answers.txt","w")
N1=['1. Who is the prime minister of India? \n', '\n', 'A. Narendra Modi B. Shivraj Patil \n', '\n', '2. Who is the President of USA? \n', '\n', 'A. Donald Trump B. Joe Biden ']
N2=['1.A \n', '\n', '2.B ']
f1.writelines(N1)
f2.writelines(N2)
f1.close()
f2.close()

f1=open("Questions.txt","r")
f2=open("Answers.txt","r")



l1=f1.readlines()
l2=f2.readlines()




a=input()
b=input()

for i in l2:
    if i in l1:
        if a == "A" and b == "B":
            print("100")
        elif a == "A" and b == "A":
            print("50")
        elif a == "B" and b == "A":
            print("0")
        else:
            print("0")


