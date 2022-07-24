#include<iostream>
using namespace std;
class shape{
    int h;
    int w;
    public:
    void setDim(int height,int width){
        h=height;
        w=width;
    }
    void getDim(int &height,int &width){
        height=h;
        width=w;
    }
    virtual int getArea()=0;
};
class rectangle:public shape{
  public:
  int getArea(){
      int height,width;
      getDim(height,width);
      return(height*width);
  }
};
class triangle:public shape{
    public:
    int getArea(){
        int height,width;
        getDim(height,width);
        return 0.5*height*width;
    }
};

int main(){
    shape *p;
    rectangle r;
    triangle t;
    r.setDim(5,10);
    t.setDim(10,5);
    int n;
    cin>>n;
    if (n==1){
    p=&r;
    cout<<p->getArea()<<"\n";
    }
    else if(n==2){
    p=&t;
    cout<<p->getArea()<<"\n";
    }
}
