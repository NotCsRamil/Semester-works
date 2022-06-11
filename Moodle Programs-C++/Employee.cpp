#include<iostream>
using namespace std;
class person{
 public:
 char name[10];
 int age;
 char no[11];
 public:
 person(){
 getchar();
 cin.getline(name,10);
 cin>>age>>no;
 }
};
class employee:public person{
 public:
 int empid;
 char desig[10];
 public:
 employee(){
 cin>>empid;
 getchar();
 cin.getline(desig,10);
 
 }
};
int main(){
 int n,x,y,b;
 cin>>n;
 employee e[n];
 int max[n];
 for(x=0;x<n;x++){
 max[x]=e[x].empid;
 }
 for(x=0;x<n;x++){
 for(y=x+1;y<n;y++){
 if(max[x]>max[y]){
 b=max[x];
 max[x]=max[y];
 max[y]=b;
 }
 }
 }
 
 for(x=0;x<n;x++){
 cout<<max[x]<<"\n";
 }
}

