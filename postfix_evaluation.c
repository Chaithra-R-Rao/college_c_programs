#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

double compute(char symbol,double op1,double op2);

int main()
{
    double s[20],op1,op2,res;
    int top=-1,i;
    char postfix[20];
    char symbol;

    printf("Enter the postfix expression\n");//infix
    scanf("%s",postfix);

    for(i=strlen(postfix)-1;i>=0;i--)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
            s[++top]=symbol-'0';
            else
        {
            op1=s[top--];
            op2=s[top--];
            res=compute(symbol,op1,op2);
            s[++top]=res;
        }
    }
    res=s[top];
    printf("The result is %f",res);//infix
    return 0;
}
double compute(char symbol,double op1,double op2)
{
    switch(symbol)
 {
    case '+': return op1+op2;
    case '-': return op1-op2;
    case '*': return op1*op2;
    case '/': return op1/op2;
    case '$': return (pow(op1,op2));

 }
  }
