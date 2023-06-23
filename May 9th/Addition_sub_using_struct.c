#include <stdio.h>
#include<string.h>
int main(){
    int sumr,sumc,diffr,diffc;
    struct compno
    {
        int realpart;
        int comppart;
    };
    struct compno c[2];
    
    scanf("%d %d",&c[0].realpart,&c[0].comppart);
   
    scanf("%d %d",&c[1].realpart,&c[1].comppart);
    /*c[0].realpart=3;
    c[1].realpart=4;
    c[0].comppart=2;
    c[1].comppart=1;*/
    sumr=c[0].realpart+c[1].realpart;
    sumc=c[0].comppart+c[1].comppart;
    diffr=c[0].realpart-c[1].realpart;
    diffc=c[0].comppart-c[1].comppart;
    printf("%d+%di\n",sumr,sumc);
    printf("%d+%di",diffr,diffc);
    return 0;



}