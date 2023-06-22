# include<stdio.h>
int main()
{
    int age=0 ;
    printf("Enter a no:");
    scanf("%d",&age);
    printf("the number is %d \n",age);
    
    age>=18?printf("Adult\n"):printf("Not adult");
    return 0;
}