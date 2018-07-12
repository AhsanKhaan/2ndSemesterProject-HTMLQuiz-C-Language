#include<stdio.h>
#include<conio.h>
#include <windows.h>//windows include color function,system() function
#include<ctype.h>    //initializing the humans languages type (ie;main home ,home start end{same as struct})
#include<stdlib.h>//stdlib includes colour changing,srand(){for randomization},system()
#include<time.h>//time includes functions(i.e:sleep(),differencetime(initial_time(NUll),final_time(Null))),final_time changes using system time
#include<dos.h>
void aboutus()
	{ system("cls");        //when calling function aboutus() it will clear the screen appeared before function
	  system("color 1D ");
	  printf("\n\n\n\tWe're hireing begineers with html skills.In order to polished thier "); 
	  printf("\n\n\tWEB development Skills.This Internship program moto is to provides ");
	  printf("\n\n\tpakistan.THE BEST WEB DEVELPOR and remove poverty from Pakistan.No");
	  printf("\n\n\tnon-serious atitude is tolerated in the program.Demolshing the property");
	  printf("\n\n\tof premise will be kicked out the student from the program .furthermore,");
	  printf("\n\tafter passing this batch we were starting the batch for CSS and JAVA."); 
	  printf("\n\n\n\t\tPress any key to go to home........");
		}

void displayscore()//function for displaying score
 { 
  	char name[20];														//name of user
 	float s;     														 //score of user
 	FILE *f;      														//FILE pointer			
 	system("cls");
 	system("color 5a");
 	f=fopen("score.txt","r");											//opens File
 	fscanf(f,"%s%f",&name,&s);
 	printf("\n\n\t\t ");
 	printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
 	printf("\n\n\t\tpress any key to continue..... ");
 	fclose(f);															//close file				
 	getch();
	 }



void testprecautions()//Function for test precautions /or/Instructions
 {
 	system("cls");
 	system("color FC");
 	printf("\n\n\n\tThis Test Consist of Multiple Choice Questions.Each carry Equal");
 	printf("\n\n\tmarks and the right answer is to be chosen on the following");
 	printf("\n\n\t four options provided. Your score will be calculated at the");
 	printf("\n\n\tend. Remember that the more quicker you give answer the more");
 	printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
 	printf("\n\n\tat the end.If you secure highest score, your score will be saved in");
 	printf("\n\n\tour system.Getting the top score would be brighter chance to be appoint.");
 	printf("\n\n\tSo Answer the questions carefully.So BEST OF LUCK.");
 	printf("\n\n\t\tpress any key to continue..... ");
 	}
void writescore(float score, char applicant_name[20])				//function for writing score at the end
 {
 	float sc;
 	char nm[20];
 	FILE *f;
 	system("cls");
 	f=fopen("score.txt","r");
 	fscanf(f,"%s%f",&nm,&sc);
 	if (score>=sc)										//condition for printing highest score in File
   		{ sc=score;
     	fclose(f); 									//reading a score from previous file and comparing it with current scores
     	f=fopen("score.txt","w");					//opening the same file and write current score after following condition
     	fprintf(f,"applicant name:%s\nscore:%.2f",applicant_name,sc);                  //printing applicant name and score
   		fclose(f);                                               //closing file
		   }
 	}
int main()                     //main body of program
     {
     int countq,countr;
     int r,i;
     int pa;int nq[30];int w;
     float score;
     char choice;
     char playername[20];
     system("cls");				
     mainhome:                         //this will appear on the front of page
     system("cls");
     
	  system("color 4c");
	  
     puts("\t\t		MAKWARE\n\n");
     puts("\t\t WELCOME TO HTML TEST  PROGRAM \n\n") ;
     puts("--------------------------------------------------------------------------------");
     puts("\n\t\t Enter 'S' to start test  ");
     puts("\n\t\t Enter 'V' to view high score  ");
     puts("\n\t\t Enter 'P' for TEST PRECAUTIONS");
     puts("\n\t\t Enter 'A' for About us");
     puts("\n\t\t Enter 'Q' to quit             ");
     printf("--------------------------------------------------------------------------------");
     choice=toupper(getch());                        //declearing choice the users puts in the cases below
     if (choice=='V')
 	{
 	displayscore();                                //function declearation to display scores
 	printf("\n\n\n\t\t\tPress any key to continue.......");
 	goto mainhome;
 	 }
 	else 	if (choice=='A')
	{
		aboutus();
		getch();
		printf("\n\n\n\t\t\tPress any key to continue.......");
		goto mainhome;	
		}
	  
    else 	if (choice=='Q')
 			exit(0);
    else 	if (choice=='P')
			 {
 				testprecautions();
 				getch();
 				printf("\n\n\n\t\t\tPress any key to continue.......");
 				goto mainhome;
 				}
    else 	if(choice=='S')
			{
     			system("cls");
				system("color 17");
				printf("\n\n\t\t\tNote:Don't used other letters except for A,B,C,d");
				printf("\n\t\t\tif you do so your answer will be considered as wrong");
				printf("\n\t\t\tAs you are about to professional level you musn't have ");
				printf("\n\t\t\tthis type of mistakes.");
     			printf("\n\n\n\t\t\tEnter your name:...");
     			printf("\n\t\t\t(without special charcters)\n\n\t\t\t");
     			gets(playername);

     				home:
     				system("cls");
     				
     				countq=countr=0;         //countq for number of questions\countr for right answers
     				i=1;
     				start:
     		
     				r=rand()%30+1;          //random cases selections
     				nq[i]=r;                //stored randomization in an array
     				for (w=0;w<i;w++)
 					if (nq[w]==r) goto start;   //comparing array of [w] with r

     				switch(r)                    //switch cases displays M.C.Qs
 	 	{
  case 1:
  	system("cls");
  	system("color 5a");
  printf("\n\nWhat does HTML stands for?");
  printf("\n\nA.hypertextmarkuplanguage\nB.hometoolmarkup language\n");
  printf("C.homogenous text makeup language\nD.hyper and text movie language\n\n");
  countq++;
  if (toupper(getch())=='A')                         //initially declearing in main choice==toupper
   {printf("\n\nCorrect!!!");                        //getch() for getting variable for user
   getch();
   countr++;
    break;}
  else  
         {printf("\n\nFALSE! The correct answer is A.");
		 getch();
		 break;}

  case 2:
  system("cls");
  system("color 5a");	
  printf("\n\n\nChoose the correct HTML element for the largest heading:");
  printf("\n\nA.<h1>\tB.<h6>\n\nC.none\tD.<heading>\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");
   getch();
   countr++; 
   break;}
  else
         printf("\n\nWrong!!! The correct option is A");
  getch();
  break;

  case 3:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nWhat is the correct HTML element for inserting a line break?");
  printf("\n\nA.<bl>\t\tB.<lb>\n\nC.<break>\tD.<br>\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct option is D");
		 getch();
		 break;}


  case 4:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nWhat is the correct HTML for adding a background color?");
  printf("\n\nA.<body style=background-color:yellow>\tB.<bg=yellow>\n\n");
  printf("\n\nC.<background>yellow</background>\tD.<body bg=yellow>\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!good");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct answer is A");
		 getch();
		 break;}


  case 5:
  	system("cls");
  	system("color 5a");
  printf("\n\n\n Choose the correct HTML element to define important text");
  printf("\n\nA.<strong>\tB.<s>\n\nC.<i>\t\tD.<b>\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");
   getch();
   countr++;
    break;}
  else
         {printf("\n\nWrong!!! The correct option is A.");
		 getch();
		 break;}

  case 6:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nChoose the correct HTML element to define emphasized text?");
  printf("\n\nA.<empheazed>\tB.<em>\n\nC.<i>\t\tD.<italic>\n\n");
  countq++;
  if (toupper(getch())=='B' )
   {printf("\n\nCorrect!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct option is B.");
		 getch();
		 break;}


  case 7:
  	system("cls");
  	system("color 5a");
  printf("\n\n\n What is the correct HTML for creating a hyperlink?");
  printf("\n\nA.<a>http://www.w3schools.com</a>\nB.<a name=http:www.w3schools.com>W3Schools.com</a>\nC.<a href=http:www.w3schools.com>W3Schools</a>\nD.<a=www.w3school.com/>\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.");
         getch();
		 break;}


  case 8:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nWhich character is used to indicate an end tag?");
  printf("\n\nA.<\tB.*\n\nC.<//>\tD.</>\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct answer is D");
		 getch();
		 break;}


  case 9:
  	system("cls");
  	system("color 5a");
  printf("\n\n\n How can you open a link in a new tab/browser window?");
  printf("\n\nA.<a href='url' target='_blank'>\nB.<a href='url' new>\nC.<a href='url' target='_newtab'>\nD.<a href=new target=_blank>\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.");
		 getch();
		 break;}


  case 10:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nWhich of these elements are all <table> elements?");
  printf("\n\nA.<thead><body><tr>\nB.<table><tr><tt>\nC.<table><tr><td>\nD.<table><tr><tfoot>\n\n");
  getch();
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nRight Option!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct option is C.");
		 getch();
		 break;}


  case 11:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nInline elements are normally displayed without starting a new line?");
  printf("\n\nA.False\tB.Not For ALL\tC.True\tD.Non of above\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nRight!!!");countr++;
    getch();
	break;}
  else
         {printf("\n\nWrong!!! The correct Option is C.");
		 getch();
		 break;}

  case 12:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nHow can you make a numbered list?");
  printf("\n\nA.<list>\tB.<dl>\tC.<ol>\tD.<ul>\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.");
		 getch();
		 break;}

  case 13:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nHow can you make a bulleted list?");
  printf("\n\nA.<list>\tB.<dl>\t\tC.<ol>\t\tD.<ul>\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nRIGHT!!!");
   getch();
   countr++;
	break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.");
		 getch();
		 break;}

  case 14:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nWhat is the correct HTML for making a checkbox?");
  printf("\n\nA.<input='check box'>\nB.<checkbox>\nC.<check>\nD.<input='checked the box'>\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nRIGHT!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct Option is A.");
		 getch();
		 break;}

  case 15:
  	system("cls");
  	system("color 5a");
  printf("\n\n\n What is the correct HTML for making a text input field?");
  printf("\n\nA.<textfield>\nB.<input type='Text'>\nC.<inputTextField>\nD.<textinput type='text'>\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nRight!!!");
   getch();
   countr++;
    break;}
  else
         {printf("\n\nWrong!!! The correct option is B");
		 getch();
		 break;}

  case 16:
  	system("cls");
  	system("color 5a");
  printf("\n\n\n What is the correct HTML for making a drop-down list?");
  printf("\n\nA.<input type='dropdown'>\tB.<select>\n\nC.<drop down list>\tD.<inputdropdown='list'>\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nRight!!!");
   getch();
   countr++;
    break;}
  else
         {printf("\n\nWrong!!! The correct Option is B");
		 getch();
		 break;}


  case 17:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nWhat is the correct HTML for making a text area?");
  printf("\n\nA.<input type='text area'>\tB.<type='Text Area'>\n\nC.<textarea>\t\tD.<inputtextarea>\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nRight!!!");
   getch();
   countr++;
    break;}
  else
         {printf("\n\nWrong!!! The correct Option is C");
		 getch();
		 break;}

  case 18:
  	system("cls");
  	system("color 5a");
  printf("\n\n\n What is the correct HTML for inserting an image?");
  printf("\n\nA.<img alt='MyImage'>image.gif</img>\nB.<img href='image.gif' alt='MyImage'>\nC.<image src='image.gif' alt='MyImage'>\nD.<img src='image.gif' alt='MyImage'>\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nRIGHT!!!");
   getch();
   countr++;
    break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.");
		 getch();
		 break;}

  case 19:
  	system("cls");
  	system("color 5a");
  printf("\n\n\n. What is the correct HTML for inserting a background image?");
  printf("\n\nA.<body style=bgcolor>\nB.<body bgcolor.gif>\nC.<body bg='background.gif'>\nD.<body style='background-image:url(background.gif)'>\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nRIGHT!!!");
   getch();
   countr++;
    break;	}
  else
         {printf("\n\nWrong!!! The correct Option is C.");
		 getch();
		 break;}

  case 20:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nAn <iframe> is used to display a web page within a web page");
  printf("\n\nA.TRUE\tB.FALSE\nC.There is no such thing as an <iframe>\nD.Not for all cases\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nRIGHT!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct option is A.");
		 getch();
		 break;}

  case 21:
  	system("cls");
  	system("color 5a");
  printf("\n\n\n HTML comments start with <!-- and end with -->?");
  printf("\n\nA.No tag include! mark\tB.False\tC.True\tD.Non of above\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nRight!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct Option is C.");
		 getch();
		 break;}

  case 22:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nBlock elements are normally displayed without starting a new line.?");
  printf("\n\nA.TRUE\t\tB.No elements are Block level\n\nC.Non of above\tD.FALSE\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nRIGHT!!!");
   getch();
   countr++;
    break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.");
		 getch();
		 break;}

  case 23:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nWhich of the following elements includes block level elements:");
  printf("\n\nA.<h1>\nB.<div>\nC.<img>\nD.<i>\n\n");
  countq++;
  if ((toupper(getchar())=='B'))
   {printf("\n\nRIGHT!!!");
   getch();
   countr++;
    break;}
  else
         {printf("\n\nWrong!!! The correct Option is B");
		 getch();
		 break;}
	 case 24:
	 	system("cls");
	 	system("color 5a");
  printf("\n\n\nWhich HTML  element defines a section that is quoted from another source.:");
  printf("\n\nA.<blak quote>\nB.<block quote>\nC.<q>\nD.<p>\n\n");
  countq++;
  if ((toupper(getchar())=='B'))
   {printf("\n\nRIGHT!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct Option is B");
		 getch();
		 break;}
	 case 25:
	 	system("cls");
	 	system("color 5a");
  printf("\n\n\nChoose the correct HTML tag to make a text bold:");
  printf("\n\nA.<bold>\nB.<bo>\nC.Non of above\tD.<b>\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nRIGHT!!!");
   getch();
   countr++;
    break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.");
		 getch();
		 break;}
	
  case 26:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nThe <i> tag makes text... ?");
  printf("\n\nA.Bold\tB.inline\tC.italic\tD.Non of above\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nRight!!!");
    getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct Option is C.");
		 getch();
		 break;}
	 case 27:
	 system("cls");	
	 system("color 5a");
  printf("\n\n\nWhich tag is used for smallest heading:");
  printf("\n\nA.<h6>\nB.<sheading>\nC.<head>\nD.<h1>\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nRIGHT!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct option is A.");
		 getch();
		 break;}
		 case 28:
		 	system("cls");
		 	system("color 5a");
  printf("\n\n The <title> tag belongs where in your HTML ?");
  printf("\n\nA.head\t\tB.arm\n");
  printf("C.body\t\tD.non of above\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");
   getch();
   countr++;
    break;}
  else
         {printf("\n\nFALSE! The correct answer is A.");
		 getch();
		 break;}

  case 29:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nChoose the correct HTML element for the  password input:");
  printf("\n\nA.<input type='password'>\nB.<password>\nC.none\nD.<passcodeinput>\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");
   getch();
   countr++; 
   break;}
  else
         printf("\n\nWrong!!! The correct option is A");
  getch();
  break;

  case 30:
  	system("cls");
  	system("color 5a");
  printf("\n\n\nWhat is the correct HTML element for inserting a horizontal line?");
  printf("\n\nA.<bl>\t\tB.<br>\n\nC.<break>\tD.<hr>\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");
   getch();
   countr++; 
   break;}
  else
         {printf("\n\nWrong!!! The correct option is D");
		 getch();
		 break;} 	 
		 	 
		 
  }
 i++;                                   //increment on i=1
 if (i<=30) goto start;                

 score=(float)countr/countq*100;
 if (score<0) score=0;
 system("cls");
 system("color 4c");
 printf("\n\n\n\t\t\tYour Score: %.2f%",score);
 float right_ans=countr;
 printf("\n\n\n\t\t\tright answers=%2f",right_ans);
 float wrong_ans=30-right_ans;
 printf("\n\n\n\t\t\twrong answers=%2f",wrong_ans);
 if (score==100) 
 {printf("\n\n\t\t\tRESULT STATUS='PASSED'");
 printf("\n\n\t\tEXCELLENT!!! KEEP IT UP");}
 else if (score>=80 && score<100) 
 		{	printf("\n\n\t\t\tRESULT STATUS='PASSED'");
 			printf("\n\n\t\tVERY GOOD!!");
   			}else if (score>=60 &&score<80) 
			   {printf("\n\n\t\t\tRESULT STATUS='PASSED'");
 				printf("\n\n\t\tGOOD! BUT YOU NEED TO BUILD YOUR SKILLS MORE.");
	 }else if (score>=40 && score<60) 
	 {printf("\n\n\t\t\tRESULT STATUS='Failed'");
	 printf("\n\nSATISFACTORY RESULT.");
	 }else {printf("\n\n\t\t\tRESULT STATUS='Failed'");
	 printf("\n\n\t\tYOU ARE POOR IN YOUR HTML SKILLS,WORK HARD.");}
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')goto home;
 	else
  	{
  	writescore(score,playername);
  	goto mainhome;
  	 }
 }
     else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 Sleep(700);
 goto mainhome;
 }
 return 0;
}
