#include<stdio.h>
#include<string.h>
int main()
{
    int z, b, i, a;
    int sum = 0;
    char y[100], x[100], w[100];
    char ch, v;
    printf("          Welcome to quiz game \n=======================================\n                          Made by :\n                          Archit Jain\n");
    printf("---------------------------------------");
    printf("\nHere are some Instructions for you.\n");
    printf("\n              ~~~~~~~~~~\n  ");
    printf("\nEnter your first name : ");
    scanf("%s", &y);
    printf("                       -----------");
    printf("\nEnter your last name : ");
    scanf("%s", &x);
    printf("                      -----------");

    menu :
    printf("\n=======================================\n");
    printf("\n>Press 'I' to go to INSTRUCTIONS.\n>Press 'E' to EXIT your game.\n>Press 'S' to START the game.\n=>Your choice : ");
    scanf("%s", &ch);
  //  printf("\nTo get your first question type 1 or any key to quit your game => ");
  //  scanf("%d", &i);
    switch(ch)
    {
    case 'S':
    case 's':
    {
    playAgain :
one :   printf("\nHere's your first question\n");
        printf("\n=======================================\n");
        printf("\n1 . Who is India's first prime minister ?\nOptions =>\n");
        printf(" _________________________________________\n|1 . Jawaharlal Nehru | 3 . Mahatma Gandhi|\n|_____________________|___________________|\n|2 . Rajendra Prasad  | 4 . Sardar Patel  |\n|_____________________|___________________|\nYour answer =>");
        scanf("%d", &a);
        if(a==1)
        {
            printf("\nCongratulations!!! Your answer is correct\n");
            sum = sum + 10;
        }
        else if(a==0)
        {
            goto quit;
        }
        else if(a<1||a>4)
        {
            printf("\nyour choose option is invalid please choose a valid answer \n");
            goto one;
        }
        else
        {
            printf("\nSo sorry... Your answer is incorrect\n");
            printf("The correct answer is 1 . Jawaharlal Nehru.\n");
            break;
        }


two :
        printf("\nHere's your second question\n");
        printf("\n=======================================\n");
        printf("\n2 . Who is world's richest person till date ?\nOptions =>\n");
        printf(" _________________________________________\n|1 . Warren Buffett | 3 . Bernard Arnault |\n|___________________|_____________________|\n|2 . Bill Gates     | 4 . Jeff Bezos      |\n|___________________|_____________________|\nYour answer =>");
        scanf("%d", &a);
        if(a==4)
        {
            printf("\nCongratulations!!! Your answer is correct\n");
            sum = sum + 10;
        }
        else if(a==0)
        {
            goto quit;
        }
        else if(a<1||a>4)
        {
            printf("\nyour choose option is invalid please choose a valid answer \n");
            goto two;
        }
        else
        {
            printf("\nSo sorry... your answer is incorrect\n");
            printf("The correct answer is 4 . Jeff Bezos.\n");
            break;
        }
        

three : printf("\nHere's your fourth question\n");
        printf("\n=======================================\n");
        printf("\n3 . What is the capital of Turkey ?\nOptions =>\n");
        printf(" _________________________________________\n|1 . Texas            | 3 . Warsaw        |\n|_____________________|___________________|\n|2 . Ankara           | 4 . Islamabad     |\n|_____________________|___________________|\nYour answer =>");
        scanf("%d", &a);
        if(a==2)
        {
            printf("\nCongratulations!!! Your answer is correct\n");
            sum = sum + 10;
        }
        else if(a==0)
        {
            goto quit;
        }
        else if(a<1||a>4)
        {
            printf("\nyour choose option is invalid please choose a valid answer \n");
            goto three;
        }
        else
        {
            printf("\nSo sorry... Your answer is incorrect\n");
            printf("The correct answer is 2 . Ankara.\n");
            break;
        }
        
        
        
four :  printf("\nHere's your fourth question\n");
        printf("\n=======================================\n");
        printf("\n4 . Which of the following number is palindrome ?\nOptions =>\n");
        printf(" _________________________________________\n|1 . 98765            | 3 . 10101         |\n|_____________________|___________________|\n|2 . 12345            | 4 . 00000         |\n|_____________________|___________________|\nYour answer =>");
        scanf("%d", &a);
        if(a==3)
        {
            printf("\nCongratulations!!! Your answer is correct\n");
            sum = sum + 10;
        }
        else if(a==0)
        {
            goto quit;
        }
        else if(a<1||a>4)
        {
            printf("\nyour choose option is invalid please choose a valid answer \n");
            goto four;
        }
        else
        {
            printf("\nSo sorry... Your answer is incorrect\n");
            printf("The correct answer is 3 . 10101\n");
            break;
        }
        
        
five :  printf("\nHere's your fifth question\n");
        printf("\n=======================================\n");
        printf("\n5 . Which animal laughs like a human being ?\nOptions =>\n");
        printf(" _________________________________________\n|1 . Polar Bear       | 3 . Donkey        |\n|_____________________|___________________|\n|2 . Heyna            | 4 . Chimpanzee    |\n|_____________________|___________________|\nYour answer =>");
        scanf("%d", &a);
        if(a==2)
        {
            printf("\nCongratulations!!! Your answer is correct\n");
            sum = sum + 10;
        }
        else if(a==0)
        {
            goto quit;
        }
        else if(a<1||a>4)
        {
            printf("\nyour choose option is invalid please choose a valid answer \n");
            goto five;
        }
        else
        {
            printf("\nSo sorry... Your answer is incorrect\n");
            printf("The correct answer is 2 . Heyna.\n");
            break;
        }
        
       
six :   printf("\nHere's your sixth question\n");
        printf("\n=======================================\n");
        printf("\n6 . Who was father of Akbar (Mughal Empire) ?\nOptions =>\n");
        printf(" _________________________________________\n|1 . Shah Jahan       | 3 . Aurangzeb     |\n|_____________________|___________________|\n|2 . Mohammad Tughlak | 4 . Humayun       |\n|_____________________|___________________|\nYour answer =>");
        scanf("%d", &a);
        if(a==4)
        {
            printf("\nCongratulations!!! Your answer is correct\n");
            sum = sum + 10;
        }
        else if(a==0)
        {
            goto quit;
        }
        else if(a<1||a>4)
        {
            printf("\nyour choose option is invalid please choose a valid answer \n");
            goto six;
        }
        else
        {
            printf("\nSo sorry... Your answer is incorrect\n");
            printf("The correct answer is 4 . Humayun.\n");
            break;
        }
        
            
                    

        break;
    }
    case 'I':
    case 'i':
    {
    printf("\nInstructions : \n");
  
    printf("\n1. This game consists of 10 questions for which you'll get points marked as ten(10) for correct and zero(0) for incorrect.\n");
    printf("2. Please enter a valid answer.\n");
    printf("3. If you want to quit your game then please type zero(0)\n");
    printf("4. You'll be continued in the game if and only if your answer is correct");
    printf("\n\n             **************\n");
    printf("\n          !!! ALL THE BEST !!!\n");
    printf("              ~~~~~~~~~~~~ ");
    printf("\nlet's start the game.\n");
    printf("\n=======================================\n");
    
    printf("\nType 'M' to go to menu or any key to exit => ");
    scanf("%s", &v);
    if(v=='m' || v=='M')
    {
    goto menu;
    }
    else
    {
    goto exit;
    }
    break;
    }

    case 'E':
    case 'e':
    {
    goto exit;
    break;
    }

    default:
    {
quit :
        printf("\nYou quitted your game.\n");
        break;
    }

    }

    printf("\n=======================================");
    printf("\n%s %s's total score is = %d", y, x, sum);
    printf("\n=======================================\n");
    
    /*printf("\nIf you would like to play the game again then type 'yes' or else any key to finish\n=>");
    scanf("%s", &w);
    if(strcmp(w, "yes")==0)
    {
    sum =0;
    goto playAgain;
    }
    else
    {
    printf("\nThank you for playing this game.\n");
    printf("======><======><======><======><=======\n");
    }*/
    printf("\nThank you for playing this game.\n");
    printf("======><======><======><======><=======\n");
    sum = 0;
    printf("Type 'M' to go to menu or any key to exit => ");
    scanf("%s", &v);
    if(v=='m' || v=='M')
    {
    goto menu;
    }
    else
    {
    goto exit;
    }
    exit :
    
    return 0;
}
