#include <iostream>
using namespace std;
class Time{
 int hr;
 int min;
 public:
 void setvalues(){
 cin>>hr>>min;
 }
 void endtime(int x){
 int t_min=(hr*60)+min;
 t_min=t_min+x;
 if(t_min%60<10){
 cout<<t_min/60<<":"<<0<<t_min%60;
 }
 else{
 cout<<t_min/60<<":"<<t_min%60;
 
 }
 }
};
int main(){
 int total_time;
 Time t;
 t.setvalues();
 cin>>total_time;
 t.endtime(total_time);
}

