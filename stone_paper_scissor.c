# include<stdio.h>
# include<stdlib.h>
# include <time.h>

int check(char u, char pc)
{
   if (u == pc)
   {
      return -1;
   }

    if (u == 's' && pc == 'p' )
    {
       return 0;
    }
    else if (u == 'p' && pc == 's')
    {
      return 1;
    }

        if (u == 'p' && pc == 'c' )
    {
       return 0;
    }
    else if (u == 'c' && pc == 'p')
    {
      return 1;
    }

        if (u == 's' && pc == 'c' )
    {
       return 1;
    }
    else if (u == 'c' && pc == 's')
    {
      return 0;
    }

    
}


int main(){
     int comp, ran, result;
     char pc, user;


     printf("Enter s for Stone, p for paper,c for scissor \n");
     scanf("%c",&user);

     srand(time(0));
     comp = (rand()%100);

     if (comp > 0 && comp < 33)
     {
        pc = 's';
     }
        else if (comp >= 33 && comp < 66)
     {
        pc = 'p';
     }
     else
     {
       pc = 'c';
     
     }
     
     result = check(user,pc);

    if (result == 1)
    {
      printf("You Won\n");
    }
    else if (result == 0)
    {
      printf("You Lost \n");
    }
    else
    {
      printf("Its a draw \n");
    }

     return 0;

}