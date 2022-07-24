#include<iostream>
using namespace std;

int gross(float basic,float da,float hra){
    return basic+da+hra/100*basic;
}
int gross(int hr,int wg){
    return hr*wg;
}
int gross(int p){
    return p;
}

int main(){
    int n;
    cin>>n;
    if (n==1){
        float basic,da,hra;
        cin>>basic>>da>>hra;
        cout<<gross(basic,da,hra);
    }
    else if(n==2){
        int hr,wg;
        cin>>hr>>wg;
        cout<<gross(hr,wg);
    }
    else if(n==3){
        int p;
        cin>>p;
        cout<<gross(p);
    }
}

