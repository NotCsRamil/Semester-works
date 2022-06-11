#include<iostream>
#include<string.h>
using namespace std;
class cost{
 int passengers;
 string place1;
 string place2;
 int price;
 string cad;
 public:
 void set(){
 cin>>passengers>>place1>>place2>>price>>cad;
 }
 void get(){
 int total;
 if(cad=="A"){
 total=(price*passengers)-(price*passengers)*0.1;
 }
 else if(cad=="B"){
 total=(price*passengers)-(price*passengers)*0.15;
 }
 else if(cad=="C"){
 total=(price*passengers)-(price*passengers)*0.2;
 }
 cout<<total<<"\n";
 }
};
int main(){
 cost c1;
 c1.set();
 c1.get();
}

