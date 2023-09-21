#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void showHangman(int choice);
int main(void)
{
    char hangmanWord[100], tempWord[100];
    char hangmanOutput[100];
    int wrongTry = 7, matchFound = 0;

    int counter = 0, position = 0, winner, length, i;
    char alphabet;

    FILE *fptr;
    fptr= fopen("Hangword.txt","r");
     fscanf(fptr, "%s" ,hangmanWord);

    //system("cls");
    //printf("\n\n\t Enter HERE ==>  ");
    //scanf("%s",hangmanWord);
    length = strlen(hangmanWord);
    //system("cls");
    printf(" +___________________________________________________________________________________________________________________________________________+\n");
    printf(" |  _     _      _ _    _         _    __________   _           _      _ _    _         _    __________      _ _   _           _   _ ______  |\n");
    printf(" | | |   | |    / / |  | | __    | |  / ________ | | |_       _| |    / / |  | | __    | |  / ________ |    / / | | |_       _| | | |______| |\n");
    printf(" | | |___| |   / /_ |  | |  __   | | /  |          | | _     _ | |   / /_ |  | |  __   | | /  |            / /_ | | | _     _ | | | |____    |\n");
    printf(" | | |___| |  / /_`_|  | |   __  | | _  | |======] | |  _   _  | |  / /_`_|  | |   __  | | _  | |======]  / /_`_| | |  _   _  | | | |____|   |\n");
    printf(" | | |   | | / /  | |  | |    __ | |  _ |______| | | |   ---   | | / /  | |  | |    __ | |  _ |______| | / /  | | | |   ---   | | | |______  |\n");
    printf(" | |_|   |_|/_/   |_|  |_|     __|_|   _|______|_| |_|         |_|/_/   |_|  |_|     __|_|   _|______|_|/_/   |_| |_|         |_| |_|______| |\n");
    printf(" +___________________________________________________________________________________________________________________________________________+\n");

    printf("\n\n You will get 6 chances to guess the right word");

    //system("cls");

    printf("\n\t||===== ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    printf("\n\t||      ");

    printf("\n\n     The word has %d alphabets \n\n",length);  /**tell the user how many alphabets the word has**/
    for( i = 0; i < length ; i++)
    {
        hangmanOutput[i] = '_';
        hangmanOutput[length] = '\0';
    }

    for(i = 0 ; i < length ; i++)
    {
        printf(" ");
        printf("%c",hangmanOutput[i]);

    }
    while(wrongTry != 0)
    {
        matchFound = 0;
        printf("\n\n   enter any alphabet from a to z and please use small case!!");
        printf("\n\n\t Enter HERE ==> ");

        fflush(stdin);

        scanf("%c",&alphabet);
        if(alphabet < 'a' || alphabet > 'z')
        {
            system("cls");
            printf("\n\n\t Wrong input TRY AGAIN ");
            matchFound = 2;
        }
        //fflush(stdin);
        if (matchFound != 2)
        {
            for(counter=0; counter<length; counter++)
            {
                if(alphabet==hangmanWord[counter])
                {
                    matchFound = 1;
                }
            }

            if(matchFound == 0)
            {
                printf("\n\t  --[:(]-- You have %d tries left ",--wrongTry);
                getchar();
                showHangman(wrongTry);
                getchar();
            }

            else
            {
                for(counter = 0; counter < length; counter++)
                {
                    matchFound = 0;
                    if(alphabet == hangmanWord[counter])
                    {
                        position = counter ;
                        matchFound = 1;
                    }//end of if
                    if(matchFound == 1)
                    {
                        for(i = 0 ; i < length ; i++)
                        {
                            if( i == position)
                            {
                                hangmanOutput[i] = alphabet; /**Put the alphabet at right position**/
                            }
                            else if( hangmanOutput[i] >= 'a' && hangmanOutput[i] <= 'z' )


                            {
                                continue;
                            }

                            else
                            {
                                hangmanOutput[i] = '_';
                            }
                        }
                        tempWord[position] = alphabet;
                        tempWord[length] = '\0';
                        winner = strcmp(tempWord,hangmanWord);

                        if(winner == 0)
                        {
                            printf("\n\n\t \t   !!!!!HELL YEAH MAN!!!!!\n\t\t *** YOU ARE THE WINNER! ***");
                            printf("\n\n\t And the word was '%s' \n\n",hangmanWord);
                            getchar();
                            return 0;
                        }
                    }
                }
            }
        }

        printf("\n\n\t");
        for(i = 0 ; i < length ; i++)
        {
            printf(" ");
            printf("%c",hangmanOutput[i]);
        }

        getchar();
    }

    if(wrongTry <= 0)
    {
        printf("\n\n\t !!!!!THE MAN IS DEAD YOU IDJIT!!!!!");
        printf("\n\n\t The Word was '%s' ",hangmanWord);
        printf("\n\n\t !!!Better luck next!!!\n\n\t *****LOOSER*****");

    }
    getchar();
    return 0;
}



void showHangman(int choice)
{

    switch(choice)
    {

    case 0:
        //system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/",'\\');
        printf("\n\t||    | ");
        printf("\n\t||   / %c",'\\');
        printf("\n\t||      ");
        printf("\n\t||+++++++++");
        break;
    case 1:
       // system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/",'\\');
        printf("\n\t||    | ");
        printf("\n\t||     %c",'\\');
        printf("\n\t||      ");
        break;
    case 2:
        //system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/",'\\');
        printf("\n\t||    | ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        break;
    case 3:
        //system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/",'\\');
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        break;
    case 4:
       // system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO ",'\\');
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        break;
    case 5:
       // system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||    O ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        break;
    case 6:
       // system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        break;

    }
 getch( );
}
