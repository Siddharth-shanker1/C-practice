# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int check(char u, char p)
{
   if (u == p)
   {
    return 1;
   }
   else
   {
    return 0;
   }
     
}

int main() {
    int result, comp;
    char user, pc;

    printf("Enter 'h' for heads && 't' for talis \n");
    scanf("%c",&user);
    srand(time(0));
    comp = (rand() % 100);

    if (comp >= 0 && comp < 50)
    {
        pc = 'h';
    }
    else
    {
        pc = 't';
    }

    result = check(user,pc);
    
    if (result == 1)
    {
        printf("You won");
    }
    else
    {
        printf("You lost");
    }

    return 0;
    
}
