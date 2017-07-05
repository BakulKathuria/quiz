#include<conio.h>
#include<stdio.h>
void main()
{
char ch;
int r=0;
int w=0;
clrscr();
printf("Q1. who developed C language ?\n");
printf("a) Martin Richards \t b) Dennis Ritchie \nc) ken Thompson \t d) James Gosling\n");
printf("Ans= ");
scanf("%c",&ch);
  if(ch=='c')
  {
  printf("correct\n\n");
  r++;
  }
  else
  {
  printf("incorrect\n\n");
  w++;
  }
  printf("Q2. the term BIT is stand for ?\n");
printf("a) megabyte    \t     b) binary language \nc) binary digit \t d) binary number\n");
printf("Ans= ");
fflush(stdin);
scanf("%c",&ch);
  if(ch=='c')
  {
  printf("correct\n\n");
  r++;
  }
  else
  {
  printf("incorrect\n\n");
  w++;
  }
  printf("Q3.______ is a set of computer programs used on computer to perform tasks ?\n");
printf("a) An instruction    \t b) software \nc) memory \t     d) A processor\n");
printf("Ans= ");
fflush(stdin);
scanf("%c",&ch);
  if(ch=='b')
  {
  printf("correct\n\n");
  r++;
  }
  else
  {
  printf("incorrect\n\n");
  w++;
  }
    printf("your score:-");
      printf("\nNo. of right answer=%d",r);
      printf("\nNo. of wrong answer=%d",w);
      printf("\n     **better luck next time**");
  getch();
  }
