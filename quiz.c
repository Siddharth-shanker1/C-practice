#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

int question()
{
    int p, count = 0;
    srand(time(0));
    for (int i = 1; i < 6; i++)
    {
        p = rand() % (25 + 1 + 0);

        switch (p)
        {
        case 1:
            printf("\n\n\nQuenstion-------%d\n", &i), //
                printf("\n\nWhich country won the Fifa World Cup 1998?");
            printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.England\n");

            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.France");
            }
            break;

        case 2:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWhat is the height of Mount everest in feet?");
            printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n");

            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.8848");
                break;
            }

        case 3:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWhat is the capital of Denmark?");
            printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Copenhagen");
                break;
            }

        case 4:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWhat is the capital of India?");
            printf("\n\nA.Mumbai\tB.Jammu\n\nC.Delhi\t\tD.Kolkata\n\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Delhi");
                break;
            }

        case 5:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWhat is the capital of Bihar?");
            printf("\n\nA.Mumbai\tB.Patna\n\nC.Delhi\t\tD.Kolkata\n\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Patna");
                break;
            }

        case 6:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nFirst President of India?");
            printf("\n\nA.Dr.Rajendra Prasad\tB.Dr. Sarvepalli Radhakrishnan\n\nC.Fakhruddin Ali Ahmed\t\tD.Giani Zail Singh\n\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Dr.Rajendra Prasad");
                break;
            }

        case 7:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWho was the only player to score 6 successive sixes in an over?");
            printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Herschel Gibbs\tD.Sanath Jayasurya\n\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Herschel Gibbs");
                break;
            }

        case 8:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWhich country is hosting the Fifa World Cup 2010?");
            printf("\n\nA.South Africa\tB.Italy\n\nC.Argentina\tD.Spain\n\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.South Africa");
                break;
            }

        case 9:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
            printf("\n\nA.Wayne Rooney\tB.Lucas Podolski\n\nC.Lionel Messi\tD.Christiano Ronaldo\n\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
                break;
            }

        case 10:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWhat is the smallest district of Nepal?");
            printf("\n\nA.Lalitpur\tB.Karnali\n\nC.Bhaktapur\tD.Gulmi\n\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Bhaktapur");
                break;
            }

        case 11:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWhat is the headquarter of Western Development Region?");
            printf("\n\nA.Dhankuta\tB.Kathmandu\n\nC.Dhangadhi\tD.Pokhara\n\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Pokhara");
                break;
            }

        case 12:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWhich city is known at 'The City of Seven Hills'?");
            printf("\n\nA.Rome\tB.Vactican City\n\nC.Madrid\tD.Berlin\n\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Rome");
                break;
            }

        case 13:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWho was the F1 racing champion of 2006?");
            printf("\n\nA.Louis Hamilton\tB.Felipe Massa\n\nC.Fernando Alonso\tD.Michael Schumaker\n\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Fernando Alonso");
                break;
            }

        case 14:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWho won the Women Australian Open 2007?");
            printf("\n\nA.Martina Hingis\tB.Maria Sarapova\n\nC.Kim Clijster\tD.Serena Williams\n\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Serena Williams");
                break;
            }

        case 15:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWhen did Indian Won first cricket world cup?");
            printf("\n\nA.1984\tB.1985\n\nC.1983\tD.1982\n\n");
            if (toupper(getch()) == 'C')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.1983");
                break;
            }

        case 16:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWhen did Indian Won second cricket world cup?");
            printf("\n\nA.2010\tB.2011\n\nC.2009\tD.2015\n\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.2011");
                break;
            }

        case 17:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nName the country where there no mosquito is found?");
            printf("\n\nA.Germany\tB.Spain\n\nC.Japan\tD.France\n\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.France");
                break;
            }

        case 18:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nName the cleanest country?");
            printf("\n\nA.Denmark\tB.Spain\n\nC.Japan\tD.Germany\n\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Denmark");
                break;
            }

        case 19:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nName the country which hast most population?");
            printf("\n\nA.America\tB.China\n\nC.India\tD.Germany\n\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.China");
                break;
            }

        case 20:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nIn which Country Chichén Itzá is found?");
            printf("\n\nA.Mexico\tB.China\n\nC.India\tD.Jordan\n\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Mexico");
                break;
            }

        case 21:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nIn which Country Machu Picchu is found?");
            printf("\n\nA.Mexico\tB.Peru\n\nC.India\tD.Jordan\n\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Peru");
                break;
            }

        case 22:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nIn which Country has the longest river?");
            printf("\n\nA.Mexico\tB.Pakistan\n\nC.India\tD.Africa\n\n");
            if (toupper(getch()) == 'D')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Africa");
                break;
            }

        case 23:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nHow many points are possible in a compound pendulum about which time period is same?");
            printf("\n\nA.4\tB.2\n\nC.none\tD.infinite\n\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.4");
                break;
            }

        case 24:
            printf("\n\n\nQuenstion-------%d\n", &i),
                printf("\n\nWho was awarded the 'Man of the Tournament' of ICC WORLD CUP 2007?");
            printf("\n\nA.Glen Magrath\tB.Mahela Jawardan\n\nC.Mathew Hayden\tD.Sachin Tendulkar\n\n");
            if (toupper(getch()) == 'A')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Glen Magrath");
                break;
            }

        case 25:
            printf("\n\n\nQuenstion-------%d", &i),
                printf("\n\nWho was the only player to take 4 successive wickets?");
            printf("\n\nA.Malinga Bandara\tB.Lasith Malinga\n\nC.Bret Lee\tD.Murali Daran\n\n");
            if (toupper(getch()) == 'B')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Lasith Malinga");
                break;
            }
        }
    }
    return count;
}

int main()
{
    char ch, result;
    printf("\t\t\t\t WELCOME TO THE QUIZ\n");
    printf("You will be asked 10 question, Press ato start & x for exit \n");
    scanf("%c", &ch);
    if (ch == 'x')
    {
        exit(0);
    }
    else if (ch == 'a')
    {
        result = question();
    }

    // result = question();

    printf("\n\n\nYor score is-----%d\n\n ", result);
}
