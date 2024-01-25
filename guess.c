# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
    int num, n1;
    srand(time(0));
    num = (rand() % 100);
    
    printf("\t\t\t\t\t\t\tGUESS GAME\n");
    printf("Enter your guess ---- ");
    scanf("%d",&n1);

   while (1)
   {
    if(n1 == num)
    {
        printf("Number found ");
        break;
    }
    else if (n1 > num)
    {
        printf("Guess a lower number ---- ");
        scanf("%d",&n1);
    }
    else
    {
        printf("Guess a higher number ---- ");
        scanf("%d",&n1);
    }
   }

   return 0; 
}