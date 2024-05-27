#include <stdio.h>
#include <stdlib.h>

int MENU(int level){
	int c;
	
	if(level==1){
		hh:
		fflush(stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t **************MENU*****************************************   \n\n");
	printf("\t\t\t 1.Show the list of all library's books \n");
	printf("\t\t\t 2.Search for a book \n");
	printf("\t\t\t 3.Show the details of my account \n");
	printf("\t\t\t 4.Log out \n");
	printf("\t\t\t 5.Quit the program\n\n");
	printf("\t\t\t ********************************************************   \n");
	printf("\t\t\t(type the number of the option you want)\n\t\t\t");
	printf("\n\n\n\n\n\n\n\n");
	scanf("%d",&c);
	if(c!=1 && c!=2 && c!=3 && c!=4 && c!=5 ){
		printf("ERROR! invalid number please retry \n");
		goto hh;
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	return c;
	}
	
	if(level==2){
		ha:
		fflush(stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t **************MENU**************************************   \n\n");
	printf("\t\t\t 1.Show the list of all library's books \n");
	printf("\t\t\t 2.Show the list of all the library's users \n");
	printf("\t\t\t 3.Search for a book / an user\n");
	printf("\t\t\t 4.Show the currently borrowed books history \n");
	printf("\t\t\t 5.Add a book / an user\n");
	printf("\t\t\t 6.Delete a book / an user \n");
	printf("\t\t\t 7.Log out \n");
	printf("\t\t\t 8.Quit the program \n\n");
	printf("\t\t\t ********************************************************   \n");
	printf("\t\t\t(type the number of the option you want)\n\t\t\t");
	printf("\n\n\n\n\n\n\n\n");
	scanf("%d",&c);
	if(c!=1 && c!=2 && c!=3 && c!=4 && c!=5 && c!=6 && c!=7 && c!=8 ){
		printf("ERROR! invalid number please retry \n");
		goto ha;
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	return c;
	}
	
}

int rechl(){
	int c;
	lol:
		fflush(stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t ******************************************************** \n");
	printf("\t\t\t 1.Search by title \n");
	printf("\t\t\t 2.Search by ID\n");
	printf("\t\t\t 3.Search by category\n");
	printf("\t\t\t 4.Search by author\n");
	printf("\t\t\t 5.Search by rating\n\n");
	printf("\t\t\t ********************************************************   \n");
	printf("\t\t\t(type the number of the option you want)\n\t\t\t");
	printf("\n\n\n\n\n\n\n\n");
	scanf("%d",&c);
	if(c!=1 && c!=2 && c!=3 && c!=4 && c!=5 ){
		printf("ERROR! invalid number please retry \n");
		goto lol;
	}
	printf("\n\n\n\n\n\n\n\n");
	return c;
		
}

int rechu(){
	int c;
	lol:
		fflush(stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t ******************************************************** \n");
	printf("\t\t\t 1.Search by first name \n");
	printf("\t\t\t 2.Search by last name\n");
	printf("\t\t\t 3.Search by ID\n");
	printf("\t\t\t 4.Search by quantity of books borrowed \n");
	printf("\t\t\t ********************************************************   \n");
	printf("\t\t\t(type the number of the option you want)\n\t\t\t");
	printf("\n\n\n\n\n\n\n\n");
	scanf("%d",&c);
	if(c!=1 && c!=2 && c!=3 && c!=4 ){
		printf("ERROR! invalid number please retry \n");
		goto lol;
	}
	printf("\n\n\n\n\n\n\n\n");
	return c;
		
}