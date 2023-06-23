#include<stdio.h>
int isharshad(int n){
    if (n<= 0)
        return -1;
    int sum=0;
    int y=n;
    while(y>0){
        sum+=y%10;
        y=y/10;
    }
    if(n%sum==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    scanf("%d",&num);
    int result=isharshad(num);
    if(result==1){
        printf("%d is a Harshad number.",num);
    }
    else if(result==0){
        printf("%d is not a Harshad number.",num);
    }
    else{
        printf("Number should be greater than 0.");
    }
    return 0;
    
}