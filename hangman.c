#include<stdio.h>
#include<string.h>
int main()
{
char origin[100]="excellent",master[50],gin[50];
int i=0,j=0,length,count=0;
printf("Welcome to Hangman Game :\n");
strcpy(master,origin);
length=strlen(origin);
while(i<length)
{
origin[i]='_';
i=i+2;
}
printf("_______\t\t\t\n");
printf("|\n");
printf("|\n");
printf("|\n");
printf("|\n");
printf("|\n");
printf("%s\n",origin);
printf("choose from heree,g,t,h,%c\n",master[j]);
scanf("%c",&gin[j]);
if(master[j]==gin[j])
{
origin[j]=gin[j];
printf("%s\n",origin);
count++;
}
else
{
printf(" \t________\n");
				printf("\t|        |\n");
				printf("\t|        o\n");
				printf("\t|\n");
				printf("\t|\n");
				printf("\t|\n");
				printf("\t|\n");
}
printf("choose from here,o,w,c,z,%c\n",master[j+2]);
scanf("%c",&gin[j+2]);
scanf("%c",&gin[j+2]);
if(master[j+2]==gin[j+2])
{
origin[j+2]=gin[j+2];
printf("%s\n",origin);
count++;
}
else
{
			printf(" \t________\n");
				printf("\t|        |\n");
				printf("\t|        o\n");
				printf("\t|       /|\\\n");
				printf("\t|\n");
				printf("\t|\n");
				printf("\t|\n");
}
printf("choose from here,o,w,c,z,%c\n",master[j+2+2]);

scanf("%c",&gin[j+2+2]);
scanf("%c",&gin[j+2+2]);
if(master[j+2+2]==gin[j+2+2])
{
origin[j+2+2]=gin[j+2+2];
printf("%s\n",origin);
count++;
}
else
{

				printf(" \t________\n");
				printf("\t|       |\n");
				printf("\t|       o\n");
				printf("\t|      /|\\\n");
				printf("\t|      / \\\n");
				printf("\t|\n");
				printf("\t|\n");

}
printf("\n");
if(count==3)
{
printf("Hurray!! you have won the game \n");
printf("\n");
printf("Correct Word is %s",master);
}
else
{
printf("sorry you have lose the game :\n");
}
}


