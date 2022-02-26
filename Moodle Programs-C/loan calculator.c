#include <stdio.h>
#include <math.h>

int main()
{   int n;
    int i=1;
    scanf("%d",&n);
    while(i<=n){
        float principal,dp,NP, rate, time, emi;
    
        scanf("%f", &principal);
    
        scanf("%f", &dp);
        scanf("%f",&rate);
        NP=principal-dp;
    
        scanf("%f", &time);
    
    
        emi=(NP*(rate/1200.0))/(1-(pow((1+rate/1200.0),-time)));
    
        printf("%.2lf\n",emi);
        i++;
    }

    
}
