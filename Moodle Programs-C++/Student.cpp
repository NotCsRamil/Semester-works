#include<iostream>
using namespace std;
class student{
    char regno[12];
    char name[5];
    int age;
    public:
    void set(){
        cin>>regno>>name>>age;
    }
    void get(){
        cout<<regno<<"\n"<<name<<"\n"<<age<<"\n";
    }
};
int main(){
    int n=2,i;
    student s1;
    for(i=0;i<n;i++){
        s1.set();
        s1.get();
    }
}
