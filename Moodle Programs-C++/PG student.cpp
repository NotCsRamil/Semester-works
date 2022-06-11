#include <iostream>
#include <string>
using namespace std;
class person{
public:
string n;
int a;
void getPerson()
{
cin>>n;
cin>>a;
}
void displayPerson(){
cout<<n;
cout<<a;
}
};
class Student: public person{
public:
string regno;
float cgpa;
void getStudent()
{
cin>>regno;
cin>>cgpa;
}
void displayStudent()
{
cout<<regno;
cout<<cgpa;
}
};
class GateScore{
public:
string gateregno;
int score;
string examcode;
void getGate()
{
cin>>gateregno>>score>>examcode;
}
void displayGate()
{
cout<<gateregno;
cout<<score;
cout<<examcode;
}
};
class PG_Student:public GateScore, public Student{
public:
string deptName; 
void getPGS()
{
person::getPerson();
Student::getStudent();
GateScore::getGate();
cin>>deptName;
}
void displayPGS()
{
person::displayPerson();
Student::displayStudent();
GateScore::displayGate();
cout<<deptName;
}
};
int main(){
int n;
cin>>n;
PG_Student p[n];
int arr1[n];
for(int i=0;i<n;i++){
p[i].getPGS();
}
for(int i=0;i<n;i++){
arr1[i]=p[i].score;
}
int max = arr1[0];
for (int i = 1; i < n; i++){
if (arr1[i] > max)
max = arr1[i]; 
}
for (int i = 1; i < n; i++){
if (p[i].score==max){
cout<<p[i].regno<<endl;
cout<<p[i].gateregno<<endl; 
}
}
}


