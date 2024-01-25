# include<stdio.h>

int day(int month, int year)
{
    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            return 29;
        }
        else 
        {
           return 28; 
        }
    }
      else if (month == 4 || month == 6 || month == 9 || month == 11)
      {
        return 30;
      }
      else
      {
        return 31;
      }
    }
    
int start(int month, int year)
{
  int  day;
  day = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
  for (int i = 1; i < month; ++i)
  {
    if(i == 2)
    {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
     day += 29;
    }
    else
    {
      day += 28;
    }
    }
   else if (i == 4 || i == 6 || i == 9 || i == 11)
   {
    day += 30;
   }
   else
   {
    day += 31;
    }
  }
    return day;
}

void display(int day_in_month, int day_of_week, int month, int year)
{
  printf("\t%d-%02d\n", year, month);
  printf("----------------------------------\n");
  printf(" Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
  for (int i = 0; i < day_of_week; ++i)
  {
    printf("     ");
  }

  for (int j = 1; j <= day_in_month; ++j)
  {
    printf("%4d", j);
    if ((j + day_of_week) % 7 == 0)
    {
      printf("\n");
    }
    else
      {
      printf(" ");
    }
  }
}
  


int main()
{
  int year, month, day_in_month, starting_day, day_of_week;
  printf("Enter the year ");
  scanf("%d",&year);
  printf("Enter the month ");
  scanf("%d",&month);

  day_in_month = day(month,year);
  starting_day = start(month,year);
  day_of_week = (starting_day + 1) % 7;
  display(day_in_month, day_of_week, month, year);
  
  return 0;     
}