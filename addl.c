#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
typedef struct{
	char id[20], title[20], author[20], cat[20],edit[20], syn[500], prix[5],qt[5],rate[2];
}L;

typedef struct{
	char id[20], pw[20], name[20], lastname[20], hist[200],lvl[20],qt[20];
}u;

void ajoutl(){
L b;

    FILE* fp = fopen("bibli.csv","a+");
 
   if (fp==NULL){
    	printf("Can't open file \n");
	}
 
    // Asking user input for the
    // new record to be added
    fflush(stdin);
    printf("\n Enter book title \n");
    gets(b.title);
    nope:
    fflush(stdin);
    printf("\n enter the id \n");
    gets(b.id);
    if(idcheckl(b.id)==-1){
    	printf(" FILE ERROR \n");
    	goto nope;
	}
    if(idcheckl(b.id)!=0){
    	printf("ERROR, that id already exists, please try again! \n");
    	goto nope;
	}
	
	fflush(stdin);
    printf("\nEnter the category \n");
    gets(b.cat);
    
    fflush(stdin);
     printf("\n Enter the name of the author \n");
    gets(b.author);
    
    fflush(stdin);
    printf("\nEnter book's edition house \n");
    gets(b.edit);
    
    fflush(stdin);
    printf("\nEnter the synopsis \n");
    gets(b.syn);
    fflush(stdin);
    printf("\n Enter the price of the book\n");
    gets(b.prix);
    
    fflush(stdin);
    printf("\nEnter the available quantity\n");
    gets(b.qt);
    
    nuh:
    fflush(stdin);
    printf("\nEnter the rating of the book (from 0 to 5 stars)\n");
    gets(b.rate);
    if(atoi(b.rate)<0 || atoi(b.rate)>5 ){
    	printf("ERROR! invalid number please try again \n");
    	goto nuh;
	}
 fflush(stdin);
    // Saving data in file
    fprintf(fp, "%s;%s;%s;%s;%s;%s;%s;%s;%s\n",b.title,b.id,b.cat,b.author,b.edit,b.syn,b.prix,b.qt,b.rate);
 
    printf("New book added to record ! \n ");
 
    fclose(fp);
    return 0;

}

void ajoutu(){
u uti;

    FILE* fp = fopen("utili.csv","a+");
 
   if (fp==NULL){
    	printf("Can't open file \n");
	}
 
    // Asking user input for the
    // new record to be added
    fflush(stdin);
    printf("\n Enter the users last name \n");
    gets(uti.lastname);
    fflush(stdin);
    printf("\n Enter the users first name \n");
    gets(uti.name);
    nope:
    fflush(stdin);
    printf("\n enter the id \n");
    gets(uti.id);
    if(idchecku(uti.id)==-1){
    	printf(" FILE ERROR \n");
    	goto nope;
	}
    if(idchecku(uti.id)!=0){
    	printf("ERROR, that id already exists, please try again! \n");
    	goto nope;
	}
	
	fflush(stdin);
    printf("\nEnter the accounts password \n");
    gets(uti.pw);
    
        nuh:
    fflush(stdin);
    printf("\nEnter the level of the user (1 for customer and 2 for admin )\n");
    gets(uti.lvl);
    if(atoi(uti.lvl)!=1 && atoi(uti.lvl)!=2 ){
    	printf("ERROR! invalid number please try again \n");
    	goto nuh;
	}
if(atoi(uti.lvl)==1){
	strcpy(uti.hist,"This user has currently no borrowed books");
}
else{
	strcpy(uti.hist,"NONE (this user is an admin)");
} 

  strcpy(uti.qt,"0");


 fflush(stdin);
    // Saving data in file
    fprintf(fp, "%s;%s;%s;%s;%s;%s;%s\n",uti.lastname,uti.name,uti.id,uti.pw,uti.hist,uti.qt,uti.lvl);
 
    printf("New user added to record ! \n ");
 
    fclose(fp);
    return 0;

}