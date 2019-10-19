#include<stdio.h>
#include<stdlib.h>

void add();
void read();
void update();
void delate();
struct student
{
     int id;
     char name[20];
     char address[20];
}s;
FILE *fp;
int main()
     {
int ch;
char a;

while(1){

printf("\n********Menu********\n");
printf("1.Display\n");
printf("2.Read\n");
printf("3.Update\n");
printf("4.Delate\n");
printf("5.Exit\n");
printf("Choose the Opertor (1-5)\n");
scanf("%d",&ch);
 switch(ch)
{
case 1:
   add();
   printf("your information is successfullty wrriten");
   break;
case 2:
   read();
   printf("please read  carefully :");
   break;
case 3:
   update();
   break;
case 4:
   delate();
break;
   case 5:
   printf("Student Records Management System\n");
   read();
   printf("**************END OF THE RECORDS ***********\n");
   exit(0);
}

}
}

void add()
{
fp=fopen("suren.txt","a");
if(fp==NULL)
{
   printf("file cannot be found :");
   exit(0);
}
printf("enter the id name address");
scanf("%d%s%s",&s.id,&s.name,&s.address);
fprintf(fp,"%d\t%s\t%s\n",s.id,s.name,s.address);
fclose(fp);
}
void read()
{
char ch[150];
fp=fopen("suren.txt","r");
if(fp==NULL)
{
    printf("file cannot be found :");
       exit(0);
}
while((fgets(ch,150,fp))!=0)
{
    printf("%s\n",ch);
}
fclose(fp);
}
void update()
{
FILE*fp1;
char ch[150];
char id;
printf("enter the new id to update :");
scanf("%c",&id);
scanf("%c",&id);
printf("enter the id :");
scanf("%d",&s.id);
printf("enter the name  :");
scanf("%s",&s.name);
printf("enter the address  :");
scanf("%s",&s.address);

fp=fopen("suren.txt","r");
fp1=fopen("arun.txt","w");
if(fp==NULL)
{
printf("file cannot be found :");
exit(0);
}
rewind(fp);
while((fgets(ch,150,fp))!=0)
{
if(id==ch[0])
{
   fprintf(fp1,"%d\t%s\t%s\n",s.id,s.name,s.address);
}
else{
   fputs(ch,fp1);
}
}
fclose(fp);
fclose(fp1);
remove("suren.txt");
rename("arun.txt","suren.txt");
printf("your file is successfully updated %c",ch);
}
delate()
{
char id;
char ch[150];

printf("enter the id you want to delate");
scanf("%c",&id);
scanf("%c",&id);
FILE*fp1;
fp=fopen("suren.txt","r");
fp1=fopen("arun.txt","w");
if(fp==NULL)
{
    printf("File cannot be Found :!!");
    exit(0);
}
rewind(fp);
while((fgets(ch,150,fp))!=0)
{
   if(id!=ch[0])
     {
     fputs(ch,fp1);
      }
        }
fclose(fp1);
fclose(fp);
remove("suren.txt");
rename("arun.txt","suren.txt");
printf("your file is permenently deleted %c",id);
}


