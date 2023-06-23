#include <stdio.h>

int decimalToBinary(int num){
    int binary[32];
    int i=0;
    int y=num;
    while(y>0){
        binary[i]=y%2;
        y=y/2;
        i++;
    }
    printf("Binary equivalent: ");
    for(int j=i-1;j>= 0;j--){
        printf("%d",binary[j]);
    }
    printf("\n");
    return 0;
}

int decimalToOctal(int num1){
    int octal[32];
    int i=0;
    int y=num1;
    while(y>0){
        octal[i]=y%8;
        y=y/8;
        i++;
    }
    printf("Octal equivalent: ");
    for(int j=i-1;j>= 0;j--){
        printf("%d",octal[j]);
    }
    printf("\n");
    return 0;
}

int decimalToHexadecimal(int num2){
    char hexdec[100];
    int i=0;
    int rem;
    int y=num2;
    while(y>0){
        rem=y%16;
        if (rem<10)
            hexdec[i]=rem+'0';
        else
            hexdec[i]=rem+55;
        y=y/16;
        i++;
    }
    printf("Hexadecimal equivalent: ");
    for (int j =i-1;j>=0;j--)
        printf("%c",hexdec[j]);
    
    printf("\n");
}
    
int main(){
    int n,result,result1,result2;
    scanf("%d",&n);
    if(n<=0){
        printf("Error: Value should be greater than 0");
    }
    else{result=decimalToBinary(n);
    result1=decimalToOctal(n);
    result2=decimalToHexadecimal(n);
    }
    return 0;
}