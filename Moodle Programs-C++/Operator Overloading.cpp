#include<iostream>
#include<string.h>
using namespace std;

class student{
  char name[10];
  char regno[10];
  public:
  student(){
      strcpy(name,"");
      strcpy(regno,"");
  }
  void setStud(){
      cin>>name>>regno;
  }
  friend ostream & operator<<(ostream &out, student &s);
  friend class bcse102;
};

class bcse102{
    public:
    student s[3];
    student& operator[](int index){
        if(index>0 && index<=3){
            return s[index-1];
        }
        else{
            cout<<"Out of bound";
            strcpy(s[0].name,"");strcpy(s[0].regno,"");
            return s[0];
        }
    }
};

ostream & operator<<(ostream &out, student &s){
    out<<s.name<<" "<<s.regno<<"\n";
    return out;
}

int main(){
    bcse102 b;
    b.s[0].setStud();
    b.s[1].setStud();
    b.s[2].setStud();
    int i;
    cin>>i;
    cout<<b[i];
    
}

