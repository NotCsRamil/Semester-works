#include<stdio.h>
#include<string.h>
union data{
    long int adr;
    char pan[10];
    char vid[10];
    
};
int main(){
    union data d;
    int n;
    scanf("%d",&n);
    if(n==1){
        scanf("%ld",&d.adr);
        printf("%ld\n",d.adr);
        
    }
    else if(n==2){
        scanf("%s",d.pan);
        printf("%s\n",d.pan);
        
    }
    else if(n==3){
        scanf("%s",d.vid);
        printf("%s\n",d.vid);
        
    }
}
