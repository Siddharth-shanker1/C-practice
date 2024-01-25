# include<stdio.h>
# include<stdlib.h>

int main()
{
    double a, b;
    char ch;

    while (2)
    {
       printf("Enter '+' '-' '*' '/' and 'z' for exit\n");
       scanf("%c", &ch);

       if (ch == 'z')
       {
         exit(0);
       }
       printf("Enter two values \n");
       scanf("%lf%lf", &a, &b);

       switch (ch)
       {
       case '+':
        printf("%.1lf + %.1lf = %.1lf \n", a, b, (a+b));
        break;
       case '-':
       printf("%.1lf - %.1lf = %.1lf \n", a, b, (a-b));
       break;
       case '*':
        printf("%.1lf * %.1lf = %.1lf \n", a, b, (a*b));
        break;
       case '/':
        printf("%.1lf / %.1lf = %.1lf \n", a, b, (a/b));
        break;        
       default:
       printf("Error Please enter correct character");
        break;
       }
    }
    
       return 0;
}