#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
int main(){
    int x,y;
    cin>>x>>y;
    swap(&x,&y);
    cout<<x<<"\n";
    cout<<y<<"\n";
    
}
