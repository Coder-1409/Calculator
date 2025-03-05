#include<stdio.h>
int main(){
    int a,b,sum,sub,multiply,division;
    char oparetor;
    printf("Enter oparetor: ");
    scanf("%c", &oparetor);
    printf("Enter two operends: ");
    scanf("%d %d", &a, &b);

    switch(oparetor){
        case '+' : sum = a+b;
                   printf("sum is = %d", sum);
                   break;
        case '-' : sub = a-b;
                   printf("subtraction is = %d", sub);
                   break;
        case '*' : multiply = a*b;
                   printf("product is = %d", multiply);
                   break; 
        case '/' : division = a/b;
                   if(b!=0)
                   printf("division is = %d", division);
                   else
                       printf("Division by zero is not allow");
                   break;
        default :printf("Invalid operator.");                                                              
    }
    return 0;
}