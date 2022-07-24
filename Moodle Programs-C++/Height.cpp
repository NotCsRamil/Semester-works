#include<iostream>
using namespace std;

class height{
  public:  
  int f1;
  int i1;
  int f2;
  int i2;
  public:
  void set(){
      cin>>f1>>i1>>f2>>i2;
  }
  void get(){
    //  cout<<f1<<"\n"<<i1<<"\n"<<f2<<"\n"<<i2<<"\n";
  }
  
};

int main(){
    height h1;
    
    h1.set();
  //  h1.get();
  if(h1.i1>h1.i2 && h1.f1==h1.f2){
      cout<<"Taller";
  }
  else if (h1.i1==h1.i2 && h1.f1==h1.f2){
      cout<<"Same";
  }
  
  else{
      cout<<"Shorter";
  }
      
    
    
}

