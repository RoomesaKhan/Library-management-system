#include <windows.h>                 //contains system
#include<stdio.h>                   //contains printf,scanf etc
#include<conio.h>                   //contains delay(),getch(),gotoxy(),etc.
#include <stdlib.h>                 //contains exit()
#include<string.h>                  //contains strcmp(),strcpy(),strlen(),etc
#define f1e 	{if(file1==NULL){printf("error opening file");exit(0);}}
#define f2e 	{if(file2==NULL){printf("error opening file");exit(0);}}
#define f3e 	{if(file3==NULL){printf("error opening file");exit(0);}}



struct book
{
    char name[50], authorname[50];
    int qty;
};
struct book b1,b2,b3;

struct student
{
	char stdname[50], bookname[50],bcat[50];
	int stdid,d1,m1,y1,d2,m2,y2;
};

void mainmenu();
void addbooks();
void comp();
void math();
void eng();
void searchbook();
void scomp();
void smath();
void seng();
void lcomp();
void lmath();
void leng();
void listofbooks();
void delbook();
void dcomp();
void dmath();
void deng();
void issuebook();
void loib();
void mexit();
void password();
	
void password()
{int a=0, i=0;
	static char p[][10]={"yam"};
	char pe[10];
	system("cls");
	printf("\n\t\t\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD");
	printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD");
	printf("\n\t\t***** Library management system *****");
	printf("\n\t\t\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD");
	printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD");
	printf("\n\n\n\t\t  ****** Password Protected ******");
	printf("\n\n\n\t\tEnter Password:");
	while(1)
	{
		pe[i]=getch();
		if(pe[i]==13)
		break;
		else printf("*");
		i++;
	}
	pe[i]='\0';
	if(strcmp(&p[0][0],pe)==0)
	a=1;
	if(a==1)
{
		printf("\n\n\t\tCORRECT PASSWORD");
	printf("\n\n\n\n\n\n\n\n\n\n\nPress any key to continue.....");
	getch();
	mainmenu();
}
	else
	{
	printf("\n\n\t\tINCORRECT PASSWORD");
	printf("\n\n\n\n\n\n\n\n\n\n\nEnter any key to retry.....");
	getch();
	
	password();}}
	
	
void mainmenu()	
{  int choice;
    system("cls");
	printf("\n\n\t\t******  MAIN MENU  ******");
	printf("\n\t\t\t\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD");
	printf("\n\n\t1.Add Books\n\n\t2.Search Books\n\n\t");
	printf("3.List Of Books\n\n\t4.Delete Books\n\n\t5.Issue Books\n\n\t6.List Of Issued Books\n\n\t7.Exit");
	printf("\n\n\n Enter your choice: ");
	scanf("%d",&choice);
	switch(choice) 
	{
	
	case 1:
	     addbooks();break;
	case 2:
	    searchbook();break;
	case 3:
	     listofbooks();break;
	case 4:
         delbook();break;
    case 5: 
	     issuebook();break;
    case 6:
    	loib();break;
	case 7:
         mexit();break;
			
}
}
	
void addbooks(void)	
{  system("cls");
     int add;
	printf("\n\n\t\t*** Select Category ***");
	printf("\n\n\t1.Computer\n\n\t2.Maths\n\n\t3.English\n\n\t4.Back to main menu");
	printf("\n\n\nEnter your choice: ");
	scanf("%d",&add);
	system("cls");
    switch(add)
    {
case 1:	comp(); break;
case 2: math(); break;
case 3: eng(); break;
case 4: mainmenu(); break;
}
}	

void comp(void)	
{
	FILE *file1;
	char selection='Y';
	int count=0;
	file1=fopen("add1.txt","a");
    f1e;
	
	while(selection=='Y'||selection=='y')
{
		count++;
		printf("\n\n S.no:%d",count);
		printf("\nEnter book title:");
		scanf("%s",&b1.name);
		printf("\nEnter author name:");
		scanf("%s",&b1.authorname);
		printf("\nEnter quantity:");
		scanf("%d",&b1.qty);
		fprintf(file1,"\n%4d \t%10s   \t%10s \t  %4d",count,b1.name,b1.authorname,b1.qty);
		printf("\nSaved.");
		printf("\n\nDo you want to add more books (y/n): ");
		selection=getche();
		
		if(selection=='N'||selection=='n')
		
		{ fclose(file1);
			addbooks();
		}
	
		getch();
	}

}
	
void math(void)	
{ 
		FILE *file2;
	char selection='Y';
	int count=0;
	file2=fopen("add2.txt","a");
	f2e;
	
	while(selection=='Y'||selection=='y')
	{
		count++;
		printf("\n\n S.no:%d",count);
		printf("\nEnter book title:");
		scanf("%s",&b2.name);
		printf("\nEnter author name:");
		scanf("%s",&b2.authorname);
		printf("\nEnter quantity:");
		scanf("%d",&b2.qty);
		fprintf(file2,"\n%4d \t%10s   \t%10s \t  %4d",count,b2.name,b2.authorname,b2.qty);
		printf("\nSaved.");
		printf("\n\nDo you want to add more books (y/n): ");
		selection=getche();
		if(selection=='N'||selection=='n')
		{ fclose(file2);
			addbooks();
		}
	
		getch();
	}
}


void eng(void)
{
		FILE *file3;
	
	char selection='Y';
    int count=0;
	file3=fopen("add3.txt","a");
	f3e;
	
	while(selection=='Y'||selection=='y')
	{
		count++;
		printf("\n\n S.no:%d",count);
		printf("\nEnter book title:");
		scanf("%s",&b3.name);
		printf("\nEnter author name:");
		scanf("%s",&b3.authorname);
		printf("\nEnter quantity:");
		scanf("%d",&b3.qty);
		fprintf(file3,"\n%4d \t%10s   \t%10s \t  %4d",count,b3.name,b3.authorname,b3.qty);
		printf("\nSaved.");
		printf("\n\nDo you want to add more books (y/n): ");
		selection=getche();
		if(selection=='N'||selection=='n')
		{ fclose(file3);
		addbooks();
			}
	
		getch();
	}
}

void searchbook()
{
system("cls");
     int search;
	printf("\n\n\t\t*** Select Category ***");
	printf("\n\n\t1.Computer\n\n\t2.Maths\n\n\t3.English\n\n\t4.Back to main menu");
	printf("\n\n\nEnter your choice: ");
	scanf("%d",&search);
    system("cls");
switch(search)
{
case 1:	scomp(); break;
case 2: smath(); break;
case 3: seng(); break;
case 4: mainmenu(); break;}
}	
	
void scomp()
{

FILE *file1;
char name[20],sname[20],record[100],selection='Y';
system("cls");

file1=fopen("add1.txt","r");
f1e;

while( selection == 'Y' || selection == 'y' )
{

printf( "\n Title of book you want to search: " ) ;
scanf( "%s" , sname ) ;
rewind( file1 ) ;

while( fscanf ( file1,"%s" , name ) == 1 )
{

if(strcmp(name,sname)==0)
{
printf("\t\n\tauthor name\tquantity\n");
fgets(record,100,file1);
printf("%s",record);break;
}

}
if(strcmp(name,sname)!=0)
printf("\n\tNo such book.");

printf("\n\nDo you want to search more books (y/n): ");
selection=getche();

if(selection=='N' || selection=='n')
{ searchbook();
exit(0);
}

}
fclose(file1);
getch();

}


void smath()
{
	
FILE *file2;
char name[20],sname[20],record[100],selection='Y';
system("cls");

file2=fopen("add2.txt","r");
f2e;

while( selection == 'Y' || selection == 'y' )
{

printf( "\n Title of book you want to search: " ) ;
scanf( "%s" , sname ) ;
rewind( file2 ) ;

while( fscanf ( file2,"%s" , name ) == 1 )
{

if(strcmp(name,sname)==0)
{
printf("\t\n\tauthor name\tquantity\n");

fgets(record,100,file2);
printf("%s",record);break;
}
}
if(strcmp(name,sname)!=0)
printf("\n\tNo such book.");
printf("\n\nDo you want to search more books (y/n): ");
selection=getche();

if(selection=='N' || selection=='n')
{ searchbook();
exit(0);
}

}
fclose(file2);
getch();

}

void seng()
{
	
FILE *file3;
char name[20],sname[20],record[100],selection='Y';
system("cls");

file3=fopen("add3.txt","r");
f3e;

while( selection == 'Y' || selection == 'y' )
{

printf( "\n Title of book you want to search: " ) ;
scanf( "%s" , sname ) ;
rewind( file3 ) ;

while( fscanf ( file3,"%s" , name ) == 1 )
{

if(strcmp(name,sname)==0)
{
printf("\t\n\tauthor name\tquantity\n");

fgets(record,100,file3);
printf("%s",record);break;
}
}
if(strcmp(name,sname)!=0)
printf("\n\tNo such book.");

printf("\n\nDo you want to search more books (y/n): ");
selection=getche();

if(selection=='N' || selection=='n')
{ searchbook();
exit(0);
}

}
fclose(file3);
getch();

}

void listofbooks()
{
	int list;
	system("cls");
	printf("\n\n\t\t*** Select Category ***");
	printf("\n\n\t1.Computer\n\n\t2.Maths\n\n\t3.English\n\n\t4.Back to main menu");
    printf("\n\n\nEnter your choice: ");
	scanf("%d",&list);
	system("cls");
    switch(list)
{
case 1:	lcomp(); break;
case 2: lmath(); break;
case 3: leng(); break;
case 4: mainmenu(); break;}
}

void lcomp()
{
	
	int i=0;
	char name[100];
	FILE *file1;
	
	system("cls");
	file1=fopen("add1.txt", "r");
	f1e;
	
	printf("S.no\t  BOOK TITLE\t  AUTHOR NAME\t  QUANTITY");
	
    while(fgets(name, 60, file1)!=NULL)
	{
	
	 puts(name);
	 printf("\n________________________________________________________\n");
}
	
	fclose(file1);
	getch();
listofbooks();}

void lmath()
{
	
	int i=0;
	char name[100];
	FILE *file2;
	
	system("cls");
	file2=fopen("add2.txt", "r");
	f2e;
	
	printf("S.no\t  BOOK TITLE\t  AUTHOR NAME\t  QUANTITY");
    while(fgets(name, 60, file2)!=NULL)
	{
	 
	 
	 puts(name);
	 printf("\n______________________________________________________\n");
	 
	}
	fclose(file2);
	getch();
	listofbooks();
}
void leng()
{
	
	int i=0;
	char name[100];
	FILE *file3;
	
	system("cls");
	file3=fopen("add3.txt", "r");
	f3e;
	
	printf("S.no\t  BOOK TITLE\t  AUTHOR NAME\t  QUANTITY");

    while(fgets(name, 60, file3)!=NULL)
	{
	 puts(name);
	 printf("\n______________________________________________________\n");
	 
	}
	fclose(file3);
	getch();
	listofbooks();
}

void issuebook()
{ struct student s;
	int issue;
	int count=0;
	char selection='Y';
	system("cls");
	printf("\n\n\t\t*** Select Category ***");
	printf("\n\n\t1.Computer\n\n\t2.Maths\n\n\t3.English\n\n\t4.Back to main menu");
    printf("\n\n\nEnter your choice: ");
	scanf("%d",&issue);	
	system("cls");
	if(issue==1||issue==2||issue==3)
{
		FILE *stdfile;
	stdfile=fopen("std.txt","a");
	if(stdfile==NULL)
	{
		printf("error opening file");
		exit(0);
	}
	

	while(selection=='Y'||selection=='y')
	{
		count++;
		printf("\n\n S.no:%d",count);
		printf("\nEnter student id: ");
		scanf("%d",&s.stdid);
		printf("\nEnter student name: ");
		scanf("%s",&s.stdname);
		printf("\nEnter book title: ");
		scanf("%s",&s.bookname);
		printf("\nEnter category: ");
		scanf("%s",&s.bcat);
		printf("\nEnter issue date(d:m:y): ");
		scanf("%d:%d:%d",&s.d1,&s.m1,&s.y1);
		printf("\nEnter due date(d:m:y): ");
		scanf("%d:%d:%d",&s.d2,&s.m2,&s.y2);
		fprintf(stdfile,"\n%d\t%d\t%s\t%s\t%s \t%d:%d:%d\t\t%d:%d:%d",count,s.stdid,s.stdname,s.bookname,s.bcat,s.d1,s.m1,s.y1,s.d2,s.m2,s.y2);
		printf("\nBook is issued.");
		printf("\n\nDo you want to issue more books (y/n): ");
		selection=getche();
		if(selection=='N'||selection=='n')
		{ fclose(stdfile);
			issuebook();
		}
	
		getch();
	}
}
else if(issue==4)
mainmenu();
}

void loib()
{
	
	int i=0;
	char name[100];
	FILE *stdfile;
	
	system("cls");
	stdfile=fopen("std.txt", "r");
	if(stdfile==NULL)
	{printf("error opening file");
	exit(0);}
	
	printf("S.no\tS.ID\tNAME\tTITLE\tCATEGORY\tISSUE DATE\tDUE DATE  \t");

    while(fgets(name, 80, stdfile)!=NULL)
	{
	 puts(name);
	 printf("\n_________________________________________________________________________\n");
	 
	}
	fclose(stdfile);
	getch();
	mainmenu();
}



void delbook()
{
	int del;
	char nname[40],selection='Y';
	system("cls");
	printf("\n\n\t\t*** Select Category ***");
	printf("\n\n\t1.Computer\n\n\t2.Maths\n\n\t3.English\n\n\t4.Back to main menu");
    printf("\n\n\nEnter your choice: ");
	scanf("%d",&del);	
	system("cls");
 switch(del)
 {
 	case 1: dcomp();break;
 	case 2: dmath();break;
 	case 3: deng(); break;
case 4: mainmenu();break; }
}

void dcomp()
{
struct book b1;
FILE *file1, *f1;
char nname[40];
char selection='Y';
long int recsize;
file1=fopen("add1.txt","r+");

	if(file1==NULL)
	{ file1=fopen("add1.txt","w+");
	f1e;
}
recsize= sizeof (b1);	

		while(selection=='Y')
	{
		printf("Enter title of book to delete: ");
		scanf("%s",nname);
		f1=fopen("a1.txt","w");
		rewind(file1);
		while( fread ( &b1,recsize,1,file1 ) == 1 )
      {

if(strcmp(b1.name,nname)!=0)
fwrite(&b1,recsize,1,f1);	}

fclose(file1);
fclose(f1);
remove("add1.txt");
rename("a1.txt","add1.txt");
file1=fopen("add1.txt","r+");
printf("Delete another(y/n): ");
fflush(stdin);	
selection=getche();
}
	delbook();
}




void dmath()
{
struct book b2;
FILE *file2, *f2;
char nname[40];
char selection='Y';
long int recsize;
file2=fopen("add2.txt","r+");

	if(file2==NULL)
	{ file2=fopen("add2.txt","w+");
	f2e;
}
recsize= sizeof (b2);	

		while(selection=='Y')
	{
		printf("Enter title of book to delete: ");
		scanf("%s",nname);
		f2=fopen("a2.txt","w");
		rewind(file2);
		while( fread ( &b2,recsize,1,file2 ) == 1 )
      {

if(strcmp(b2.name,nname)!=0)
fwrite(&b2,recsize,1,f2);	}

fclose(file2);
fclose(f2);
remove("add2.txt");
rename("a2.txt","add2.txt");
file2=fopen("add2.txt","r+");
printf("Delete another(y/n): ");
fflush(stdin);	
selection=getche();
}
	delbook();
}


void deng()
{
struct book b3;
FILE *file3, *f3;
char nname[40];
char selection='Y';
long int recsize;
file3=fopen("add3.txt","r+");

	if(file3==NULL)
	{ file3=fopen("add3.txt","w+");
	f3;
}
recsize= sizeof (b3);	

		while(selection=='Y')
	{
		printf("Enter title of book to delete: ");
		scanf("%s",nname);
		f3=fopen("a3.txt","w");
		rewind(file3);
		while( fread ( &b3,recsize,1,file3 ) == 1 )
      {

if(strcmp(b3.name,nname)!=0)
fwrite(&b3,recsize,1,f3);	}

fclose(file3);
fclose(f3);
remove("add3.txt");
rename("a3.txt","add3.txt");
file3=fopen("add3.txt","r+");
printf("Delete another(y/n): ");
fflush(stdin);	
selection=getche();
}
	delbook();
}

void mexit()
{
	exit(0);
}


int main()
{   
	password();
}
