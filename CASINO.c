#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int random(int);
void delay(float v1);
void winner_ani(void);
void Casino_ani(void);
void Casino_title(void);
void main_menu(void);
void Guess_Word_title(void);
void Guess_Word(void);
void gameguess(char answer[], char guess[]);
void BlackJack_title(void);
void BlackJack(void);
void Gamble_title(void);
void canim_1(void);
int dice(void);
void dice1(void);
void dice2(void);
void dice3(void);
void dice4(void);
void dice5(void);
void dice6(void);
void Gamble(void);
void bold_title(void);
void Roulette(void);
void Roulette_menu(void);
void number_bet(void);
void number_bet_display_and_accept_inputs(void);
void spin_roulette(void);
void number_bet_check(void);
void evenodd_bet(void);
void evenodd_bet_check(void);
void colour_bet(void);
void colorbet_bet_display_and_accept_inputs(void);
void colorbet_bet_check(void);
void check (int a);


int seconds = 1;
char start[20]={"start"};
char name[100];
int balance = 50000;
int Yes_No;
int computer_dice,user_dice;
int number,numbet,colorbet,betamount=0,option;
int BLACK[18]={26,15,4,2,17,6,13,11,8,10,24,33,20,31,22,29,28,35};
int RED[18]={3,32,19,21,25,34,27,36,30,23,5,16,1,14,9,18,7,12};

void check (int a)
{
    if(a==0)
    {
        printf("\n\nYour balance is ZERO.\nYou can't play further.\n");
        printf("Thank you for playing in our casino.\n");
        printf("Hope you had a wonderful day.\n\n");
        exit(0);
    }
    else if(a<0)
    {
        printf("\n\nYour balance is less than ZERO.\nYou can't play further.\n");
        printf("Thank you for playing in our casino.\n");
        printf("Hope you had a wonderful day.\n\n");
        exit(0);
    }

}
void winner_ani()
{
    for(int i=1;i<=6;i++)
    {
        delay(0.5);
        printf("\t888       888 8888888 888b    888 888b    888 8888888888 88888888b  888 888\n");
        printf("\t888   o   888   888   8888b   888 8888b   888 888        888   Y88b 888 888\n");
        printf("\t888  d8b  888   888   88888b  888 88888b  888 888        888    888 888 888\n");
        printf("\t888 d888b 888   888   888Y88b 888 888Y88b 888 8888888    888   d88P 888 888\n");
        printf("\t888d88888b888   888   888 Y88b888 888 Y88b888 888        8888888PP  888 888\n");
        printf("\t88888P Y88888   888   888  Y88888 888  Y88888 888        888 T88b          \n");
        printf("\t8888P   Y8888   888   888   Y8888 888   Y8888 888        888  T88b  888 888\n");
        printf("\t888P     Y888 8888888 888    Y888 888    Y888 8888888888 888   T88b 888 888\n");
        printf("\n");
        printf("\n");
        printf("\t888       888 8888888 888b    888 888b    888 8888888888 88888888b  888 888\n");
        printf("\t888   o   888   888   8888b   888 8888b   888 888        888   Y88b 888 888\n");
        printf("\t888  d8b  888   888   88888b  888 88888b  888 888        888    888 888 888\n");
        printf("\t888 d888b 888   888   888Y88b 888 888Y88b 888 8888888    888   d88P 888 888\n");
        printf("\t888d88888b888   888   888 Y88b888 888 Y88b888 888        8888888PP  888 888\n");
        printf("\t88888P Y88888   888   888  Y88888 888  Y88888 888        888 T88b          \n");
        printf("\t8888P   Y8888   888   888   Y8888 888   Y8888 888        888  T88b  888 888\n");
        printf("\t888P     Y888 8888888 888    Y888 888    Y888 8888888888 888   T88b 888 888\n");
        delay(0.5);
        system("cls");
    }
}
void Casino_title(void)
{
    Casino_ani();
    printf("\t***************************************************\n");
    printf("\t***************************************************\n");
    printf("\t ######     ###     ######  #### ##    ##  ####### \n");
    printf("\t##    ##   ## ##   ##    ##  ##  ###   ## ##     ##\n");
    printf("\t##        ##   ##  ##        ##  ####  ## ##     ##\n");
    printf("\t##       ##     ##  ######   ##  ## ## ## ##     ##\n");
    printf("\t##       #########       ##  ##  ##  #### ##     ##\n");
    printf("\t##    ## ##     ## ##    ##  ##  ##   ### ##     ##\n");
    printf("\t ######  ##     ##  ######  #### ##    ##  ####### \n");
    printf("\t***************************************************\n");
    printf("\t***************************************************\n");
}
void Casino_ani(void)
{
    int i;
    for (i=0;i<=3;i++)
    {
        printf("\n\n");
        printf("\t ######     ###     ######  #### ##    ##  ####### \n");
        delay(0.1);
        printf("\t##    ##   ## ##   ##    ##  ##  ###   ## ##     ##\n");
        delay(0.1);
        printf("\t##        ##   ##  ##        ##  ####  ## ##     ##\n");
        delay(0.1);
        printf("\t##       ##     ##  ######   ##  ## ## ## ##     ##\n");
        delay(0.1);
        printf("\t##       #########       ##  ##  ##  #### ##     ##\n");
        delay(0.1);
        printf("\t##    ## ##     ## ##    ##  ##  ##   ### ##     ##\n");
        delay(0.1);
        printf("\t ######  ##     ##  ######  #### ##    ##  ####### \n");
        delay(0.1);
        system("cls");
    }
}
void main()
{
    printf("Enter your name: ");
    scanf("%s",name);
    system("cls");
    Casino_title();
    printf("Hello %s, welcome to Casino.\n",name);
    delay(1);
    printf("We have added $50,000 in your balance.\nYou can use them to play the games in this casino.\n");
    delay(1);
    main_menu();
}
int random(int upper)
{
    int ran;
    srand(time(NULL));
    delay(seconds);
    ran=rand()% upper;
    ran=ran+1;
    return ran;
}
void delay(float number_of_seconds)
    {
        // Converting time into milliseconds
        float milli_seconds = 1000 * number_of_seconds;

        // Storing start time
        clock_t start_time = clock();

        // looping till required time is not achieved
        while (clock() < start_time + milli_seconds);
    }
void Guess_Word_title(void)
{
    printf("\t************************************************\n");
    printf("\t************************************************\n");
    printf("\t######## ########  #### ##     ## ####    ###   \n");
    printf("\t   ##    ##     ##  ##  ##     ##  ##    ## ##  \n");
    printf("\t   ##    ##     ##  ##  ##     ##  ##   ##   ## \n");
    printf("\t   ##    ########   ##  ##     ##  ##  ##     ##\n");
    printf("\t   ##    ##   ##    ##   ##   ##   ##  #########\n");
    printf("\t   ##    ##    ##   ##    ## ##    ##  ##     ##\n");
    printf("\t   ##    ##     ## ####    ###    #### ##     ##\n");
    printf("\t************************************************\n");
    printf("\t************************************************\n");
}

void Guess_Word()
                {
                    int i,n,og;
                    game1:
                    Guess_Word_title();
                    delay(0.5);
                    printf("Welcome to %s\n",name);
                    delay(0.5);
                    printf("Enter a bet amount: ");
                    scanf("%i",&betamount);
                    printf("\nplease wait, game will begin shortly");
                    for(i=0;i<7;i++)
                        {
                            delay(0.5);
                            printf(".");
                        }
                    system("cls");
                    n= random(rand())%12;//increase randomness
                    if(og==n)
                    {
                        if(n>=1)
                            {
                                n=n-1;
                            }
                        else
                            {
                                n=n+5;
                            }
                    }
                    og=n;
                    switch(n)
                        {
                        case 0:
                            {
                                printf("hint: Largest state in India.\n");
                                break;
                            }
                        case 1:
                            {
                                printf("hint: Largest member of cat family.\n");
                                break;
                            }
                        case 2:
                            {
                                printf("hint: Nemo is a ____ fish.\n");
                                break;
                            }
                        case 3:
                            {
                                printf("hint: Fear of animals.\n");
                                break;
                            }
                        case 4:
                            {
                                printf("hint: A Panda's favourite food.\n");
                                break;
                            }
                        case 5:
                            {
                                printf("hint: Another name for Pani Puri in hindi.\n");
                                break;
                            }
                        case 6:
                            {
                                printf("hint: Highest peak in Maharashtra.\n");
                                break;
                            }
                        case 7:
                            {
                                printf("hint: Another name for Devil's Triangle.\n");
                                break;
                            }
                        case 8:
                            {
                                printf("hint: Tiger in the movie 'Life of Pi'.\n");
                                break;
                            }
                        case 9:
                            {
                                printf("hint: Active volcano in Japan Mount ____ ?\n");
                                break;
                            }
                        case 10:
                            {
                                printf("hint: ______ Tower\n");
                                break;
                            }
                        case 11:
                            {
                                printf("hint: At present Kohinoor is in which city?\n");
                                break;
                            }
                        }
                    char word[][12] = {"rajasthan","tiger","clown","zoophobia","bamboo","golgappa","kalsubai","bermuda","richardparker","fuji","eiffel","london"};
                    char guessed[12];
                    gameguess(word[n],guessed);

                    label_OM_3: printf("\nDo you want to - \n1.play again\t2.exit Casino\t3.go to main menu\nEnter option number:");
                scanf("%i",&Yes_No);
                switch(Yes_No)
                {
                    case 1:
                        {
                            system("cls");
                            Guess_Word();
                        }
                    case 2:
                        {
                            exit(0);
                        }
                    case 3:
                        {
                            system("cls");
                            Casino_title();
                            main_menu();

                        }
                    default: goto label_OM_3;
                }
                label_OM_2: printf("\n\tThank you for playing %c\n",2);
                }
void gameguess(char answer[], char guess[])
                {
                    int length = strlen(answer);
                    int x=0,correct=0,lives = length;
                    char letter;
                    while (x < length )
                    {
                        printf("guess the letter at position %d of %d letter word:",x+1,length);
                        scanf(" %c",&letter);
                        if (letter == answer[x])
                        {
                            correct++,++x;
                            if(correct==length)
                            {
                                delay(2);
                                system("cls");
                                winner_ani();
                                printf("\n\ncongratulations,you won $%i !!!!!!!",2*betamount);
                                balance+=betamount;
                                printf("\ncurrent balance = $%d",balance);
                                check(balance);
                                break;
                            }
                            guess[x]= letter;
                            printf("correct guess,keep going\n");
                        }
                        else
                        {
                            if(lives==1)
                            {
                                printf("\n\nyou lost $%i, better luck next time!!!",betamount);
                                balance=balance-betamount;
                                printf("\ncurrent balance = $%d",balance);
                                check(balance);
                                break;
                            }
                            printf("wrong guess,Try again\n");
                            printf("%d %c remaining\n",--lives,3);
                        }
                    }
                }
void BlackJack_title(void)
{
    printf("\t*********************************************************************\n");
    printf("\t*********************************************************************\n");
    printf("\t######  #          #     #####  #    #       #    #     #####  #    #\n");
    printf("\t#     # #         # #   #     # #   #        #   # #   #     # #   # \n");
    printf("\t#     # #        #   #  #       #  #         #  #   #  #       #  #  \n");
    printf("\t######  #       #     # #       ###          # #     # #       ###   \n");
    printf("\t#     # #       ####### #       #  #   #     # ####### #       #  #  \n");
    printf("\t#     # #       #     # #     # #   #  #     # #     # #     # #   # \n");
    printf("\t######  ####### #     #  #####  #    #  #####  #     #  #####  #    # \n");
    printf("\t*********************************************************************\n");
    printf("\t*********************************************************************\n");
}
void BlackJack(void)
{
            int computerNum[3],userNum[3],bet,upper,compSum,userSum,card3Num,n;
            char computerSym[4]={3,4,5,6},userSym[4]={3,4,5,6},card3Sym,key1[20];
            game2:
            BlackJack_title();
            delay(0.5);
            printf("\n\tWelcome to %s.\n",name);
            printf("\t   INSTRUCTIONS: It's very simple. Both you and computer will have 3 cards.\n");
            printf("\t                 You will be shown your all 3 cards and 2 cards of computer.\n");
            printf("\t                 You have to decide whether to proceed with opening 3rd card of computer or surrender.\n");
            printf("\t                 Anyone who has a total card sum of <= 21 and sum greater than computer wins the game.\n");
            printf("\t                 BUT if your total sum go above 21 then you loose, even if computer's total is also above 21\n");
            printf("\n\t                 J = 11, Q = 12, K = 13\n");
            delay(0.5);
            printf(" \nType start to  begin: ");
            scanf("%s",&key1);
            if(strcmpi(key1,start)==0)
            {
                //
                //computer cards calculation:-
                printf("Enter a bet amount: ");
                scanf("%i",&betamount);
                printf("The game will start shortly.");
                if(random(13)==13)
                {
                    printf(".");
                    computerNum[1] = random(10);
                    printf(".");
                    computerNum[2] = random(10);
                    printf(".");
                    card3Num = computerNum[2];
                    card3Sym = computerSym[random(3)];
                    printf(".");
                    compSum = 13 + computerNum[1] + card3Num;
                    printf("\n computers cards = %c K,%c %i, ?\n",computerSym[random(3)],computerSym[random(3)],computerNum[1]);
                }
                else if(random(12)==12)
                {
                    printf(".");
                    computerNum[1] = random(10);
                    printf(".");
                    computerNum[2] = random(10);
                    printf(".");
                    card3Num = computerNum[2];
                    card3Sym = computerSym[random(3)];
                    printf(".");
                    compSum = 12 + computerNum[1] + card3Num;
                    printf("\n computers cards = %c Q,%c %i, ?\n",computerSym[random(3)],computerSym[random(3)],computerNum[1]);
                }
                else if(random(11)==11)
                {
                    printf(".");
                    computerNum[1] = random(10);
                    printf(".");
                    computerNum[2] = random(10);
                    printf(".");
                    card3Num = computerNum[2];
                    card3Sym = computerSym[random(3)];
                    printf(".");
                    compSum = 11 + computerNum[1] + card3Num;
                    printf("\n computers cards = %c J,%c %i, ?\n",computerSym[random(3)],computerSym[random(3)],computerNum[1]);
                }
                else
                {
                    printf(".");
                    computerNum[0] = random(10);
                    printf(".");
                    computerNum[1] = random(10);
                    printf(".");
                    computerNum[2] = random(10);
                    printf(".");
                    card3Num = computerNum[2];
                    card3Sym = computerSym[random(3)];
                    printf(".");
                    compSum = computerNum[0]+computerNum[1] + card3Num;
                    printf("\n computers cards = %c %i,%c %i, ?\n",computerSym[random(3)],computerNum[0],computerSym[random(3)],computerNum[1]);
                }
                    //player cards calculation:-
                    printf(" \nOpening user's cards.");
                    if(random(13)==13)
                            {
                                printf(".");
                                userNum[1] = random(10);
                                printf(".");
                                userNum[2] = random(10);
                                printf(".");
                                userSum = 13 +userNum[1]+userNum[2];
                                printf("\n user's cards = %c K,%c %i,%c %i\n",userSym[random(3)],userSym[random(3)],userNum[1],userSym[random(3)],userNum[2]);
                            }
                    else if(random(12)==12)
                            {
                                printf(".");
                                userNum[1] = random(10);
                                printf(".");
                                userNum[2] = random(10);
                                printf(".");
                                userSum = 12 +userNum[1]+userNum[2];
                                printf("\n user's cards = %c Q,%c %i,%c %i\n",userSym[random(3)],userSym[random(3)],userNum[1],userSym[random(3)],userNum[2]);
                            }
                    else if(random(11)==11)
                            {
                                printf(".");
                            userNum[1] = random(10);
                            printf(".");
                            userNum[2] = random(10);
                            printf(".");
                            userSum = 11 +userNum[1]+userNum[2];
                            printf("\n user's cards = %c J,%c %i,%c %i\n",userSym[random(3)],userSym[random(3)],userNum[1],userSym[random(3)],userNum[2]);
                            }
                    else
                            {
                            printf(".");
                            userNum[0] = random(10);
                            printf(".");
                            userNum[1] = random(10);
                            printf(".");
                            userNum[2] = random(10);
                            printf(".");
                            userSum = userNum[0]+userNum[1]+userNum[2];
                            printf("\n user cards = %c %i,%c %i,%c %i\n",userSym[random(3)],userNum[0],userSym[random(3)],userNum[1],userSym[random(3)],userNum[2]);
                            }

                label_Mihir_1: printf("\n Do you want to \n1.Proceed\t2.Surrender\n");
                printf(" Enter the correct option number: ");
                scanf("%i",&n);

                        if(n==1)
                        {
                            printf(" Last computer card = %c %i",card3Sym,card3Num);

                            if(userSum>compSum && userSum<=21 || userSum<compSum && compSum>21)
                            {
                                delay(5);
                                system("cls");
                                winner_ani();
                                printf("\n\t   You win $%i.\n",2*betamount);
                                balance+=betamount;
                                printf("Current balance = %i\n",balance);
                                check(balance);
                            }
                            else if(userSum<compSum && compSum<=21)
                            {
                                printf("\n\t   You loose $%i.\n",betamount);
                                balance=balance-betamount;
                                printf("Current balance = %i\n",balance);
                                check(balance);
                            }
                            else if(userSum==compSum && userSum<=21)
                            {
                                printf("\n\t   It's a tie.\n\tNo gain , No loss\n");
                                printf("Current balance = %i\n",balance);
                                check(balance);
                            }
                            else
                            {
                                printf("\n\t   You loose $%i.\n",betamount);
                                balance=balance-betamount;
                                printf("Current balance = %i\n",balance);
                                check(balance);
                            }
                        }
                        else if(n==2)
                        {
                            printf(" Last computer card = %c %i\n",card3Sym,card3Num);
                            balance=balance-betamount;
                            printf("Current balance = %i\n",balance);
                            check(balance);
                        }
                        else
                        {
                            printf("Please enter correct option.\n");
                            goto label_Mihir_1;
                        }

                    label_Mihir_3: printf("Do you want to - \n1.play again\t2.exit Casino\t3.go to main menu\nEnter option number:");
                    scanf("%i",&Yes_No);

                    switch(Yes_No)
                    {
                        case 1:
                            {
                                system("cls");
                                BlackJack();
                            }
                        case 2:
                            {
                                exit(0);
                            }
                        case 3:
                            {
                                system("cls");
                                Casino_title;
                                main_menu();
                            }
                        default: goto label_Mihir_3;
                    }
                    printf("\n\tThank you for playing %c\n",2);
                    //or else should v keep exit_casino?
            }
            else
            {
                system("cls");
                BlackJack();
            }
}
int dice(void)
{
    int Number;
    //char numbers[dice1(),dice2(),dice3(),dice4(),dice5(),dice6()];

    for(int i=0;i<=rand()%3;i++)
    {
        system("cls");
        printf("The dice is rolling:\n");
        dice4();
        delay(0.75);
        system("cls");
        printf("The dice is rolling:\n");
        dice1();
        delay(0.75);
        system("cls");
        printf("The dice is rolling:\n");
        dice3();
        delay(0.75);
        system("cls");
        printf("The dice is rolling:\n");
        dice6();
        delay(0.75);
        system("cls");
        printf("The dice is rolling:\n");
        dice2();
        delay(0.75);
        system("cls");
        printf("The dice is rolling:\n");
        dice5();
        delay(0.75);
        system("cls");
    }
    return random(6);
}
void Gamble_title(void)
{
    printf("\t******************************************************************\n");
    printf("\t******************************************************************\n");
    printf("");
    printf("\t   *******  *******  *        *  ********  *          *********   \n");
	printf("\t   *        *     *  * *    * *  *      *  *          *           \n");
	printf("\t   *        *******  *  *  *  *  *******   *          *********   \n");
	printf("\t   *  *  *  *     *  *   *    *  *      *  *          *           \n");
	printf("\t   *     *  *     *  *        *  *      *  *          *           \n");
	printf("\t   * * * *  *     *  *        *  ********  *********  *********     ");
	printf("                           ");
	printf("\n\t******************************************************************\n");
    printf("\t******************************************************************\n");
}
void Gamble(void)
{

    char key2[20];
    char roll[20];
    int bet,option;



    Gamble_title();
    printf("Welcome!!!\n");
    printf("\tINSTRUCTIONS: IN THIS GAME YOU HAVE TO ROLL THE DICE AND SEE IF THE NUMBER YOU GET MATCHES WITH THE COMPUTER'S DICE\n");
    printf("\n\nNOW HOW MUCH MONEY ARE YOU WILLING TO RISK ??\n");
    printf("Enter the amount: ");
    scanf("%d",&betamount);
    printf("\nType start to begin: ");
    scanf("%s",&key2);
            if(strcmpi(key2,start)==0)
            {
                //
                computer_dice=dice();
                canim_1();
                printf("\nType roll to roll your dice:  ");
                scanf("%s",&roll);
                user_dice=dice();
                canim_1();
                printf("User's dice number =\n");
                if(user_dice==1)
                {
                    dice1();
                }
                else if(user_dice==2)
                {
                    dice2();
                }
                else if(user_dice==3)
                {
                    dice3();
                }
                else if(user_dice==4)
                {
                    dice4();
                }
                else if(user_dice==5)
                {
                    dice5();
                }
                else if(user_dice==6)
                {
                    dice6();
                }

                if( user_dice==computer_dice)
                {
                    delay(2);
                    system("cls");
                    winner_ani();
                    balance += 2*betamount ;
                    printf("\nYou now have $%d in your pocket\n", balance);
                    check(balance);
                }
                else
                {
                    printf("\nSORRY You lose, BETTER LUCK NEXT TIME \n");
                    balance -= betamount ;
                    printf("\nSorry. You've lost $%d.\nCurrent balance = $%d", betamount , balance);
                    check(balance);
                }
                label_Aditya_3: printf("\nDo you want to - \n1.play again\t2.exit Casino\t3.go to main menu\nEnter option number:");
                    scanf("%i",&Yes_No);

                    switch(Yes_No)
                    {
                        case 1:
                            {
                                system("cls");
                                Gamble();
                            }
                        case 2:
                            {
                                exit(0);
                            }
                        case 3:
                            {
                                system("cls");
                                Casino_title();
                                main_menu();
                            }
                        default: goto label_Aditya_3;
                    }
                    printf("\n\tThank you for playing %c\n",2);
            }
            else
            {
                system("cls");
                Gamble_title;
                Gamble();
            }

}
void main_menu(void)
{
    int gameOpt;
    printf("\n\tMAIN MENU\n");
    printf("Here is the list of games available:-\n1.TRIVIA\n2.BLACK JACK\n3.GAMBLE\n4.ROULETTE\n5.EXIT\n");
    delay(1);
    printf("Enter the option number of the desired game you want to play: ");
    scanf("%i",&gameOpt);
    system("cls");
    while(balance>0)
    {

        if(gameOpt==1)
        {
            //void gameguess(char [], char []);
            Guess_Word();
            break;
        }

        else if(gameOpt==2)
        {
            BlackJack();
            break;
        }

        else if(gameOpt==3)
        {
            //printf("Game is under maintenance.\n");
            Gamble();
            break;
        }

        else if(gameOpt==4)
        {
            //printf("Game is under maintenance.\n");
            Roulette();
            break;
        }

        else if(gameOpt==5)
        {
            //printf("Game is under maintenance.\n");
            printf("\nThank you for playing in our casino.\n");
            printf("Hope you had a wonderful day.");
            exit(0);
        }

        else
        {
            printf("Error. Please enter the number correctly.\n");
            main_menu();
            break;
        }
    }


    //Ending Statement.
    printf("Thank you for playing in our casino.\n");
    printf("Hope you had a wonderful day.\n\n");
  }
void dice1(void)
{
    printf("***************\n");
    printf("*   ____      *\n");
    printf("*  |_   |     *\n");
    printf("*    |  |     *\n");
    printf("*    |  |     *\n");
    printf("*   _|  |_    *\n");
    printf("*  |______|   *\n");
    printf("*             *\n");
    printf("***************\n");
}
void dice2(void)
{
    printf("***************\n");
    printf("*    ___      *\n");
    printf("*   |__ \     *\n");
    printf("*      ) |    *\n");
    printf("*     / /     *\n");
    printf("*    / /_     *\n");
    printf("*   |____|    *\n");
    printf("*             *\n");
    printf("***************\n");
}
void dice3(void)
{
    printf("***************\n");
    printf("*    ____     *\n");
    printf("*   |___  \   *\n");
    printf("*     __) |   *\n");
    printf("*    |__ <    *\n");
    printf("*    ___) |   *\n");
    printf("*   |____ /   *\n");
    printf("*             *\n");
    printf("***************\n");
}
void dice4(void)
{
    printf("***************\n");
    printf("*    _  _     *\n");
    printf("*   | || |    *\n");
    printf("*   | || |    *\n");
    printf("*   |__  |    *\n");
    printf("*      | |    *\n");
    printf("*      |_|    *\n");
    printf("*             *\n");
    printf("***************\n");
}
void dice5(void)
{
    printf("***************\n");
    printf("*    _____    *\n");
    printf("*   | ____|   *\n");
    printf("*   | |__     *\n");
    printf("*   |___  \   *\n");
    printf("*    ___) |   *\n");
    printf("*   |____/    *\n");
    printf("*             *\n");
    printf("***************\n");
}
void dice6(void)
{
    printf("**************\n");
    printf("*      __     *\n");
    printf("*     / /     *\n");
    printf("*    / /_     *\n");
    printf("*   | '_ \    *\n");
    printf("*   | (_) |   *\n");
    printf("*    \___/    *\n");
    printf("*             *\n");
    printf("**************\n");
}

void canim_1(void)
{
    Gamble_title();

printf("Computer's dice number is =\n",computer_dice);
                if(computer_dice==1)
                {
                    dice1();
                }
                else if(computer_dice==2)
                {
                    dice2();
                }
                else if(computer_dice==3)
                {
                    dice3();
                }
                else if(computer_dice==4)
                {
                    dice4();
                }
                else if(computer_dice==5)
                {
                    dice5();
                }
                else if(computer_dice==6)
                {
                    dice6();
                }
}
void bold_title(void)
{
    {
        printf("\t##################################################################\n");
        printf("\t##################################################################\n");
        printf("       \n");
        printf("\t*******  ******   *      *  *      ****** ******* *******  ******        \n");
        printf("\t*     * *      *  *      *  *      *         *       *     *             \n");
        printf("\t******* *      *  *      *  *      *         *       *     *             \n");
        printf("\t*   *   *      *  *      *  *      ****      *       *     ****          \n");
        printf("\t*    *  *      *  *      *  *      *         *       *     *             \n");
        printf("\t*     *  ******    ******   ****** ******    *       *     ******          ");
        printf("                           ");
        printf("\n\t#################################################################\n");
        printf("\t##################################################################\n");
    }
}
void Roulette(void)
{

   bold_title();

   printf("\n\n\nWelcome to %s\n",name);
   delay(1);
   Roulette_menu();

}
void Roulette_menu(void)
{
    int gametype;
   printf("\nYour balance:$%d \n",balance);
   delay(1);
   printf("\nINSTRUCTIONS:\nThere are 3 types of bets you can make\n\n");
   delay(1);
   printf("1) numbet : Choose a single number. High risk, high payout! (1 to 35)\n");
   printf("2) eveodbet (Odd or even): Choose odd or even \n");
   printf("3) colorbet (Red or black): Choose a color. \n\n\t## Red numbers are:3,32,19,21,25,34,27,36,30,23,5,16,1,14,9,18,7,12\n\t## Black numbers are:26,15,4,2,17,6,13,11,8,10,24,33,20,31,22,29,28,35 \n");
   delay(5);
   printf("\nDo you want to -\nPLAY THE BETS:-\t\tEXIT:-\n1.NUMBET\t\t4.MAIN MENU\n2.EVEN ODD BET\n3.COLOR BET\n");
   delay(0.5);
   printf("Enter the option number: ");
   scanf("%i",&gametype);


   switch(gametype)
   {
       case 1:
           {
               system("cls");
               bold_title();
                printf("\nINSTRUCTIONS:\nThere are 3 types of bets you can make\n\n");
                delay(1);
                printf("1) numbet : Choose a single number. High risk, high payout! (1 to 35)\n");
                printf("2) eveodbet (Odd or even): Choose odd or even \n");
                printf("3) colorbet (Red or black): Choose a color. \n\n\t## Red numbers are:3,32,19,21,25,34,27,36,30,23,5,16,1,14,9,18,7,12\n\t## Black numbers are:26,15,4,2,17,6,13,11,8,10,24,33,20,31,22,29,28,35 \n");
               number_bet();
               break;
           }
       case 2:
           {
                system("cls");
                bold_title();
                printf("\nINSTRUCTIONS:\nThere are 3 types of bets you can make\n\n");
                delay(1);
                printf("1) numbet : Choose a single number. High risk, high payout! (1 to 35)\n");
                printf("2) eveodbet (Odd or even): Choose odd or even \n");
                printf("3) colorbet (Red or black): Choose a color. \n\n\t## Red numbers are:3,32,19,21,25,34,27,36,30,23,5,16,1,14,9,18,7,12\n\t## Black numbers are:26,15,4,2,17,6,13,11,8,10,24,33,20,31,22,29,28,35 \n");
               evenodd_bet();
               break;
           }
       case 3:
           {
                system("cls");
                bold_title();
                printf("\nINSTRUCTIONS:\nThere are 3 types of bets you can make\n\n");
                delay(1);
                printf("1) numbet : Choose a single number. High risk, high payout! (1 to 35)\n");
                printf("2) eveodbet (Odd or even): Choose odd or even \n");
                printf("3) colorbet (Red or black): Choose a color. \n\n\t## Red numbers are:3,32,19,21,25,34,27,36,30,23,5,16,1,14,9,18,7,12\n\t## Black numbers are:26,15,4,2,17,6,13,11,8,10,24,33,20,31,22,29,28,35 \n");
               colour_bet();
               break;
           }
       case 4:
        {
            system("cls");
            Casino_title();
            main_menu();
        }

   }
}
void number_bet(void)
{
    number_bet_display_and_accept_inputs();
    spin_roulette();
    number_bet_check();
    label_Aditya_4:
    printf("\nDo you want to - \n1.play again\t2.exit Casino\t3.go to Roulette menu\nEnter option number:");
    scanf("%i",&Yes_No);

    switch(Yes_No)
    {
        case 1:
            {
                system("cls");
                bold_title();
                printf("\nINSTRUCTIONS:\nThere are 3 types of bets you can make\n\n");
                delay(1);
                printf("1) numbet : Choose a single number. High risk, high payout! (1 to 35)\n");
                printf("2) eveodbet (Odd or even): Choose odd or even \n");
                printf("3) colorbet (Red or black): Choose a color. \n\n\t## Red numbers are:3,32,19,21,25,34,27,36,30,23,5,16,1,14,9,18,7,12\n\t## Black numbers are:26,15,4,2,17,6,13,11,8,10,24,33,20,31,22,29,28,35 \n");
                number_bet();
            }
        case 2:
            {
                break;
            }
        case 3:
            {
                system("cls");
                bold_title();
                Roulette_menu();
            }
        default: goto label_Aditya_4;
    }
}
void number_bet_display_and_accept_inputs(void)
{
    printf("\nOh nice you selected NUMBET, going for big money I see?\n ENTER A NUMBER BETWEEN 1 TO 36 YOU WOULD LIKE TO BET ON: ");
    scanf("%i",&numbet);
    printf("NOW HOW MUCH MONEY ARE YOU WILLING TO RISK: ");
    scanf("%i",&betamount);
    printf("\nYou have bet $%d on the number %d",betamount,numbet);
    printf("\nPRESS ENTER TO SPIN THE ROULETTE . KEEP YOUR FINGERS CROSSED\n");
    getchar();
    getchar();
}
void spin_roulette (void)
{
    number=random(36);
    printf("The ball has landed on %d\n\n", number);
    delay(1);
    //return number;
}
void number_bet_check(void)
{
    if(number==numbet){
        balance +=(betamount*35);
        delay(2);
        system("cls");
        winner_ani();
        printf("You won $%i\nNow  have %d in your pocket ",35*betamount,balance);
        check(balance);
    }

    else {
        balance -= betamount;
        printf("Sorry. You've lost $%d.\nYour new balance is  $%d ",betamount, balance );
        check(balance);
    }
}
void evenodd_bet()
{
    evenodd_bet_display_and_accept_inputs();
    spin_roulette();
    evenodd_bet_check();
    label_Aditya_5:
    printf("\nDo you want to - \n1.play again\t2.exit Casino\t3.go to Roulette menu\nEnter option number:");
    scanf("%i",&Yes_No);

    switch(Yes_No)
    {
        case 1:
            {
                system("cls");
                bold_title();
                printf("\nINSTRUCTIONS:\nThere are 3 types of bets you can make\n\n");
                delay(1);
                printf("1) numbet : Choose a single number. High risk, high payout! (1 to 35)\n");
                printf("2) eveodbet (Odd or even): Choose odd or even \n");
                printf("3) colorbet (Red or black): Choose a color. \n\n\t## Red numbers are:3,32,19,21,25,34,27,36,30,23,5,16,1,14,9,18,7,12\n\t## Black numbers are:26,15,4,2,17,6,13,11,8,10,24,33,20,31,22,29,28,35 \n");
                evenodd_bet();
            }
        case 2:
            {
                break;
            }
        case 3:
            {
                system("cls");
                bold_title();
                Roulette_menu();
            }
        default: goto label_Aditya_5;
    }
}
void evenodd_bet_display_and_accept_inputs(void)
{
    printf("\nAlright you selected EVEOD BET.\nEnter 1 for odd or 2 for even (Choose wisely!): ");
    scanf("%d", &option);
    printf("\nNOW HOW MUCH MONEY ARE YOU WILLING TO RISK??\nEnter the bet amount: ");
    scanf("%d",&betamount);

    if (option==1)
        printf("\nYou have bet $%d on odds", betamount);
    else
        printf("\nYou have bet $%d on evens",betamount);

    printf("\nPRESS ENTER TO SPIN THE ROULETTE . KEEP YOUR FINGERS CROSSED\n");
    getchar();
    getchar();
}
void evenodd_bet_check(void)
{
    if (option==1)
    {
        if (number%2==1)
        {
            delay(2);
            system("cls");
            winner_ani();
            balance += betamount;
            printf("You won $%i!!!!\nYou now have $%d in your pocket",betamount,balance);
            check(balance);
        }
        else
        {
            balance -= betamount;
            printf("Sorry. You've lost $%d. Your new balance is $%d", betamount, balance);
            check(balance);
        }
    }
    else
    {
        if (number%2==0)
        {
            delay(2);
            system("cls");
            winner_ani();
            balance += betamount ;
            printf("You won $%i!!!!\nYou now have $%d in your pocket",betamount,balance);
            check(balance);
        }
        else
        {
            balance -= betamount ;
            printf("Sorry. You've lost $%d. Your new balance is $%d", betamount , balance);
            check(balance);
        }
    }
}
void colour_bet()
{
   colorbet_bet_display_and_accept_inputs();
   spin_roulette();
   colorbet_bet_check();
   label_Aditya_6:
        printf("number =%d",number);
   printf("\nDo you want to - \n1.play again\t2.exit Casino\t3.go to Roulette menu\nEnter option number:");

   scanf("%i",&Yes_No);

    switch(Yes_No)
    {
        case 1:
            {
                system("cls");
                bold_title();
                printf("\nINSTRUCTIONS:\nThere are 3 types of bets you can make\n\n");
                delay(1);
                printf("1) numbet : Choose a single number. High risk, high payout! (1 to 35)\n");
                printf("2) eveodbet (Odd or even): Choose odd or even \n");
                printf("3) colorbet (Red or black): Choose a color. \n\n\t## Red numbers are:3,32,19,21,25,34,27,36,30,23,5,16,1,14,9,18,7,12\n\t## Black numbers are:26,15,4,2,17,6,13,11,8,10,24,33,20,31,22,29,28,35 \n");
                colour_bet();
            }
        case 2:
            {
                break;
            }
        case 3:
            {
                system("cls");
                bold_title();
                Roulette_menu();
            }
        default: goto label_Aditya_6;
    }
}
void colorbet_bet_display_and_accept_inputs()
{
    printf("\n ALRIGHT PICK A COLOUR . CHOOSE 1. FOR RED AND 2. FOR BLACK: ");
    scanf("%i",&colorbet);
    printf("\nNOW HOW MUCH MONEY ARE YOU WILLING TO RISK ??\n Enter the bet amount: ");
    scanf("%d",&betamount);
    printf("\nYou have bet $%i on the color %i",betamount,colorbet);
    printf("\nPRESS ENTER TO SPIN THE ROULETTE. KEEP YOUR FINGERS CROSSED\n");
    getchar();
    getchar();
}
void  colorbet_bet_check()
{
    int i;
    switch(colorbet){
           case 1:
           {  printf("number =%d",number);
               for(i=0;i<18;i++)
                {
                    if(number==RED[i])
                    {
                         balance += betamount;
                         delay(2);
                    system("cls");
                    winner_ani();
                    printf("You won $%i!!!!\nYou now have $%d in your pocket %i",betamount,balance);
                    check(balance);
                         break;

                    }
                }
                if(i==18)
                {
                     balance -= betamount;
                        printf("Sorry. You've lost $%d. Your new balance is $%d", betamount, balance);
                        check(balance);

                }

                goto label_Aditya_1;


           }

            case 2:
            {
                for(i=0;i<18;i++)
                {
                    if(number==BLACK[i])
                    {
                         balance += betamount;
                         delay(2);
                    system("cls");
                    winner_ani();
                    printf("You won $%i!!!!\nYou now have $%d in your pocket %i",betamount,balance);
                    check(balance);
                         break;

                    }
                }
                if(i==18)
                {
                     balance -= betamount;
                        printf("Sorry. You've lost $%d. Your new balance is $%d", betamount, balance);
                        check(balance);

                }

                goto label_Aditya_2;

            }
    }
    label_Aditya_1:printf("\n");
    label_Aditya_2:printf("\n");
}


