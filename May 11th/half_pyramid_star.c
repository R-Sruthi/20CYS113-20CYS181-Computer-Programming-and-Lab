int main(){
    int rows,i,j;

    scanf("%d",&rows);
    if(rows>0 && rows<25)
    {
    for (i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            printf("*");
            printf("\t");
        }
        printf("\n");
    }
    }
    else
    {
        printf("Invalid Input ");
    }
    
    return 0;

}