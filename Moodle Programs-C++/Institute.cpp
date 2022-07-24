#include <iostream>
using namespace std;

class institute{
    char school[10];
    char clg[4];
    public:
    void get_inst(){
        cin>>school>>clg;
    }
    void res_inst(){
        cout<<school<<"\n"<<clg<<"\n";
    }
};

class student{
    char regno[10];
    char name[10];
    int age;
    public:

    void get_det(){
        cin>>regno>>name>>age;
    }
    void res_det(){
        // cout<<regno<<"\n"<<name<<"\n"<<age;
        cout<<regno<<"\n";
    }
    
};

int main(){
    institute i1;
    student s1;
    i1.get_inst();
//    i1.res_inst();
    int n=2,i;
    for(i=0;i<n;i++){
     s1.get_det();
    s1.res_det();
    }
    
    
    
    
    
    
    
}
