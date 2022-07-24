#include <iostream>
using namespace std;
class rectangle{
    int length;
    int width;
    public:
        void setvalues(int length,int width){
            this->length=length;
            this->width=width;
            
        }
        void getvalues(){
            cin>>length>>width;
        }
        void Area(){
            cout<<length*width<<"\n";
        }
};

int main(){
    rectangle r1;
    int length=0,width=0,i;
    for(i=0;i<3;i++){
    r1.setvalues(length,width);
    r1.getvalues();
    r1.Area();
    }
}
   
