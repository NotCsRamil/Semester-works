#include<iostream>
using namespace std;

class person{
  char name[10];
  int age;
  long int phno;
  public:
  void getPerson(){
      cin>>name>>age>>phno;
  }
  void printPerson(){
      cout<<name<<"\n"<<age<<"\n"<<phno<<"\n";
  }
};

class employee:public person{
  int empid;
  char desig[10];
  public:
  void getEmp(){
      cin>>empid>>desig;
  }
  void displayEmp(){
      cout<<empid<<"\n"<<desig<<"\n";
  }
  
};

class PartTimeEmployee:public employee{
    int hours;
    int wage;
    public:
    void getPartTime(){
        cin>>hours>>wage;
    }
    void printPartTime(){
        cout<<hours<<"\n"<<wage;
    }
}; 

int main(){
    //cout<<"hello";
    person p1;
    p1.getPerson();
    p1.printPerson();
    employee e1;
    e1.getEmp();
    e1.displayEmp();
    PartTimeEmployee p2;
    p2.getPartTime();
    p2.printPartTime();
    
}
