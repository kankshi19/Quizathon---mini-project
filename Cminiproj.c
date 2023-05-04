
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
//#include<graphics.h>
int life = 3;
int display(char* question , char* op1,char* op2,char* op3,char* op4,int correctchoice)
{
            int choice;
            printf("%s\n",question);
            printf("1.%s\n",op1);
            printf("2.%s\n",op2);
            printf("3.%s\n",op3);
            printf("4.%s\n",op4);

            printf("\nEnter your choice : ");
            choice:
            scanf("%d",&choice);
            if (choice == correctchoice)
            {
                printf("\nCorrect answer \n");
                printf("\n******************\n\n");
                Beep(623,500);
                return 10;
            }
            else if (choice>4 || choice<1)
                {
                    printf("Enter in the range (1-4) : ");
                    goto choice;
                }
            else
            {
                printf("\nIncorrect answer \n");
                printf("\n*****************\n\n");
                life--;
                 if(life==1)
                {
                    printf("You have 1 life left.\n");

                }
                 if(life==2)
                {
                    printf("You have 2 lives left.\n");

                }
                if(life==0)
                {
                    printf("This is the last life you have !\n");

                }
                if(life<0)
                {
                    printf("Oops! No lives left. You cannot reattempt a question.\n\n");
                    goto sample;
                    return 0;
                }
                else
                {
                    choice2:
                    printf("\nPlease try again : ");
                   scanf("%d",&choice);
                   if (choice>4 || choice<1)
                {
                    printf("Enter in the range (1-4) : ");
                    goto choice2;
                }
                if(choice==correctchoice)
                {
                    printf("\nCorrect answer \n");
                    printf("\n******************\n\n");
                    return 10;
                }

                else
                {
                    sample:
                    printf("\nCorrect option : %d\n\n",correctchoice);
                    return 0;
                }
                }
            }
}
void main()
{
    system("color 9");
    char name[50];char email[100],phone[10];
    int age;
    int score=0;
    int life = 1;
    char choice;
    int h=0,m=0,s=9,ms=0;
    //printing Quizathon using pattern
    for(int i = 1;i<=6;i++)
    {
        for (int j = 1 ; j<=47;j++)
        {
            if (i==1)
            {
                if(j==6||j==8||j==9||j==10||j==12||j==14||j==20||j==21||j==23||j==24||j==30||j==32||j==33||j==35||j==41||j==43||j==44||j==45||j==46)
                {
                    printf(" ");
                }
                else
                {
                    printf("#");
                }
            }
            if (i==2)
            {
                if(j==1||j==5||j==7||j==11||j==13||j==18||j==21||j==23||j==27||j==31||j==34||j==36||j==40||j==42||j==44||j==47)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            if (i==3)
            {
                if(j==1||j==5||j==7||j==11||j==13||j==17||j==20||j==22||j==24||j==27||j==31||j==32||j==33||j==34||j==36||j==40||j==42||j==45||j==47)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            if (i==4)
            {
                if(j==1||j==4||j==5||j==7||j==11||j==13||j==16||j==19||j==25||j==27||j==31||j==34||j==36||j==40||j==42||j==46||j==47)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            if (i==5)
            {
                if(j==6||j==12||j==14||j==19||j==20||j==21||j==22||j==23||j==24||j==25||j==28||j==29||j==30||j==32||j==33||j==35||j==41||j==43||j==44||j==45||j==46)
                {
                    printf(" ");
                }
                else
                {
                    printf("#");
                }
            }
            if (i==6)
            {
                if(j==6)
                    printf("#");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n################# WELCOME! #################\n");
    printf("\nKindly Enter Your Details\n");
    printf("\nEnter Your Name: ");
    fgets(name,sizeof(name),stdin);
    mail:
    printf("\nEnter Your Email ID : ");
    fgets(email,sizeof(email),stdin);
    //validation of email
    int c=0,lent = strlen(email);
    for (int i = 0;i<lent;i++)
    {
        if (email[i] == 64)
        {
            c++;
        }

    }
    if (c!=1)
        {
            printf("\nInvalid email ID,Please try again : ");
            goto mail;
        }


    printf("\nEnter Your Age: ");
    scanf("%d",&age);
    if (age<10 || age>100)
    {
        printf("\nNot eligible to attempt the quiz");
        ExitProcess(0);
    }

    mob:
    printf("\nEnter Your Mobile Number: ");
    scanf("%s",phone);
    int len = strlen(phone);
    if (len!=10)
    {
        printf("\nEnter a valid mobile number of 10 digits : ");
        goto mob;
    }

    printf("\n\nInstructions:\n");
    printf("-The quiz will start from Level 1 (Easy).\n");
    printf("-There are 20 questions in total. \n");
    printf("-Each question will be awarded 10 points.\n");
    printf("-You will get 3 lives/chances to reattempt questions \n");
    printf("-You have 3 mins in total to complete the quiz!\n\n\n");

    printf("Wish you GOOD LUCK !\n");
    printf("The Quiz will begin in 10 seconds.\n\n\n");

while(1) //here we used 1
{
printf("\r%d:%d:%d",h,m,s);
Sleep(1000); //it is approximately 1 second
if(s!=0)
{
s--;
}
if(s==0 && m!=0)
{
s=59;
m--;
}
if(s==0 && m==0 && h!=0)
{
h--;
m=59;
s=59;
}
if(h==0 && m==0 && s==0)
{
goto level1;
}
}

    level1:
        system("cls");
    printf("\nEasy-Peasy (Level 1):\n\n ");
    printf("-There are 5 questions in this level. \n -You need to get all the answers correct to solve the next level.\n -You have 45 seconds to complete this level \n\n");
    time_t start_time, end_time;
    Sleep(7000);
    start_time = time(NULL);
    score+=display("Q1.Which of the following is an exit controlled loop?","While loop","For loop " , "Do-while loop", "None of the above ",3);
    score+=display("Q2.HTML files are saved by default with the extension?"," .html"," .h "," .ht","None of the above ",1);
    score+=display("Q3.We enclose HTML tags within?"," { }"," < > "," ! !","None of the above",2);
    score+=display("Q4.Which tag is used to create a numbered list in HTML?","<ol>","<ul>","<li>","<ll>",1);
    score+=display("Q5.Which of the following keywords is used to define a variable in Javascript?","var ","let ","Both 1 and 2","None of the above ",3);
    end_time = time(NULL);
    int score1 = score;
    int t1 = difftime(end_time, start_time);
    if (difftime(end_time, start_time) > 45)
    {
        printf("Oops ! You took more than 45 seconds \n");
        printf("You took %d seconds \n\n",t1);
    }
    if(score != 50 && score1!=50)
    {
        printf("Your current score is:%d",score);
        printf("\n\nOops! You could not get all the answers correct.\nYou have to clear Level 1 again to continue futher.\n");
        score=0;
        goto level1;
    }
    else
    {

        level2:
        system("cls");
        printf("Your current score is: %d\n\n",score);
        printf("\nOne-Step Ahead (Level 2):\n\n");
        printf("-There are 5 questions in this level. \n-You need to get any 3 answers correct to solve the next level.\n-You have 45 seconds to complete this level\n\n");
        Sleep(7000);
        start_time = time(NULL);
        score+=display("Q1.In general, event handler is nothing but __","function","interface","event","handler",1);
        score+=display("Q2.JavaScript counts positions from?","-1","1 ","0","None of the above",3);
        score+=display("Q3.An __ is a special variable, which can hold more than one value","string","integer ","character","array",4);
        score+=display("Q4.Which of the following methods is used to access HTML elements using Javascript?","getElementById() ","getElementByClassName() ","Both 1 and 2","None of the above ",3);
        score+=display("Q5.Which HTML element is used to define a multi-line input field?","<text>","<blocktext>","<textfields>","<textarea>",4);

        end_time = time(NULL);
        int score2 = score - score1;

        int t2 = difftime(end_time, start_time);
        if (difftime(end_time, start_time) > 45)
        {
            printf("Oops ! You took more than 45 seconds \n");
            printf("You took %d seconds \n\n",t2);
        }
        if(score2<30)
        {
            printf("Your current score is:%d",score);
            printf("\n\nOops! You couldn't get any 3 answers correct.\nYou have to clear Level 2 again to continue futher.\n");
            score = 50;
            goto level2;
        }
        else
        {

            system("cls");
            printf("Your current score is: %d\n\n",score);
            level3:

            printf("\nHalfway There! (Level 3):\n\n");
            printf("-There are 5 questions in this level. \n-You need to get any 3 answers coreect to solve the next level.\n-You have 45 seconds to complete this level \n\n");
             Sleep(10000);
            start_time = time(NULL);
            score+=display("Q1.Action attribute in HTML forms specifies that : ","Where to submit form","Which action is going on","Which HTTP method is used",".The auto completion of form",1);
            score+=display("Q2.Increasing the cellpadding means __","Increase the softness of your site.","Increase the space between cells","Increase the distance between cell and content","All of the above",3);
            score+=display("Q3.Which of the following things are necessary to create an HTML page?","A text editor.","Web Browser","Both A and B","None of the above",3);
            score+=display("Q4.How to find the length of an array in C?","sizeof(a)","sizeof(a[0])","sizeof(a)/sizeof(a[0])","sizeof(a)*sizeof(a[0])",3);
            score+=display("Q5.Which of the following are not standard header files in C?","stdio.h ","stdlin.h ","conio.h","None of the above",4);
            end_time = time(NULL);
            int score3 = score - (score1+score2);
            int t3 = difftime(end_time, start_time);
            if (difftime(end_time, start_time) > 45)
            {
                printf("Oops ! You took more than 45 seconds \n");
                printf("You took %d seconds \n\n",t3);
            }
            if(score3<30)
            {
                printf("Your current score is:%d",score);
                printf("\n\nOops! You couldn't get any 3 answers correct.\nYou have to clear Level 3 again to continue futher.\n");
                score = score1+score2;
                goto level3;
            }
            else
            {

                system("cls");
                printf("Your current score is: %d\n\n",score);
                level4:

                printf("\nScratch Your Brains (Level 4):\n\n");
                printf("-There are 3 questions in this level. \n-You need to get any 2 answer correct to solve the next level.\n-You have 30 seconds to complete this level \n\n");
                Sleep(10000);
                start_time = time(NULL);
                score+=display("Q1.Array elements are always stored in____memory locations.","Sequential ","Random ","Sequential and Random","None of the above ",1);
                score+=display("Q2.What is the purpose of a return statement in a function?","Returns the value and continues executing rest of the statements, if any","Returns the value and stops the program ","Returns the value and stops executing the function","Stops executing the function and returns the value",4);
                score+=display("Q3.The function definitions in JavaScript begins with___","Identifier and Paranthesis","Return type and Identifier ","Return type, Function keyword, Identifier and Parantheses","Identifier and Return type",1);
                end_time = time(NULL);
                int score4 = score - (score1+score2+score3);
                int t4 = difftime(end_time, start_time);
                if (difftime(end_time, start_time) > 30)
                {
                    printf("Oops ! You took more than 30 seconds \n");
                    printf("You took %d seconds \n\n",t4);
                }
                if(score4<20)
                {
                    printf("Your current score is:%d",score);
                    printf("\n\nOops! You couldn't get any 2 answer correct.\nYou have to clear Level 4 again to continue futher.\n");
                    score = score1+score2+score3;
                    goto level4;
                }
                else
                {

                    level5:
                        system("cls");
                    printf("Your current score is: %d\n\n",score);
                    printf("\nBrainstorming (Level 5):\n\n");
                    printf("-There are 2 questions in this level. \n-You need to get any 1 answer correct to complete the quiz.\n-You have 20 seconds to complete this level \n\n");
                     Sleep(10000);
                    start_time = time(NULL);
                    score+=display("Q1.The properties that specify the position and button state of the mouse are","metaKey and shiftKey","clientX and clientY","altKey and ctrlKey","clientY and clientX",2);
                    score+=display("Q2.What is the right way to initialize an array?","int num[6]={2,4,12,5,45,5}; ","int n{}={2,4,12,5,45,5}; ","int n{6}={2,4,12};","int num(6)={2,4,12,5,45,5}; ",1);
                    end_time = time(NULL);
                    int score5 = score - (score1+score2+score3+score4);
                    int t5 = difftime(end_time, start_time);
                    if (difftime(end_time, start_time) > 15)
                    {
                        printf("Oops ! You took more than 15 seconds \n");
                        printf("You took %d seconds \n\n",t5);
                    }
                    int t = t1+t2+t3+t4+t5;
                    if(score5 >= 10)
                    {
                        if (t<=180)
                        {
                            printf("***********************************************************\n");
        printf("***********************************************************\n");
        printf("**                                                       **\n");
        printf("**                                                       **\n");
        printf("**                                                       **\n");
        printf("**              CERTIFICATE OF ACHIEVEMENT               **\n");
        printf("**              **************************               **\n");
        printf("**                                                       **\n");
        printf("**             This certificate is presented to:         **\n");
        printf("**                       ");
                                        puts(name);
        printf("                                                         **\n");
        printf("**                                                       **\n");
        printf("**             For outstanding achievement in:           **\n");
        printf("**                   Computer Science                    **\n");

        printf("**                                                       **\n");
        printf("**                                                       **\n");
        printf("**                                                       **\n");
        printf("**                                                       **\n");
        printf("**                                                       **\n");
        printf("***********************************************************\n");
        printf("***********************************************************\n");
                        }
                    else
                    {
                        printf("Oops ! You have taken more than 3 mins to complete the quiz!\n");
                        printf("You took %d seconds .\n",t);
                        printf("You have scored %d points in the quiz\n",score);
                    }
                    }
                    else
                    {

                    }
                }
                printf("\n\nTotal score secured : %d \n\n\n\n",score);

                printf("##### #   #     #     #      #  #  #    #      #  #####  #   #  # #\n");
                printf("  #   #   #    # #    # #    #  # #       #  #    #   #  #   #  # #\n");
                printf("  #   #####   #####   #   #  #  #          #      #   #  #   #  # #\n");
                printf("  #   #   #  #     #  #     ##  # #        #      #   #  #   #     \n");
                printf("  #   #   # #       # #      #  #  #       #      #####  #####  # #\n");
            }
        }
    }
}
