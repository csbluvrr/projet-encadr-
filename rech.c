#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "moowan.h"

	void recherchel(int c){
		int li=0 , col= 0,i=0,pp;
		FILE *fn;
 char *ph,p[50] , line[1000];
 fn = fopen("bibli.csv", "r");
    if (fn==NULL){
    	printf("Can't open file \n");
	}
        
    else {
    	switch(c){
//TITLE
    		case 1:{
    			fflush(stdin);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n Enter the title you're searching for:  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			gets(p);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			 while (fgets(line,1000,fn)) {
        	
            col=0;
            li++ ;
           // to skip the line with the name of the columns in the file
            if (li==1){
            	continue;
			}
	
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
 
            while (col<9) {
            	if(col==0){
            		if(strcmp(strlwr(ph),strlwr(p))==0){
            			i++;
                	affichageposl(li-1);
                	printf("\n\n");
				}
				}
                
                ph=strtok(NULL, ";");
                col++;
            }
        }
			if(i==0){
			printf("No book was found \n");
			}
			break;
			}
			
//ID
			case 2:{
				fflush(stdin);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n Enter the id of the book you're searching for:  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			gets(p);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			 while (fgets(line,1000,fn)) {
        	
            col=0;
            li++ ;
           // to skip the line with the name of the columns in the file
            if (li==1){
            	continue;
			}
	
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
 
            while (col<9) {
            	
               if(col==1){
               	
            		if(strcmp(ph,p)==0){
            			i++;
                	affichageposl(li-1);
                	printf("\n\n");
				}
				}
                ph=strtok(NULL, ";");
                col++;
            }
        }
				if(i==0){
			printf("No book was found \n");
			}
			break;
			}
			
//CATEGORY
			case 3:{
				fflush(stdin);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n Enter the category you're searching for: \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ");
    			gets(p);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			 while (fgets(line,1000,fn)) {
        	
            col=0;
            li++ ;
           // to skip the line with the name of the columns in the file
            if (li==1){
            	continue;
			}
	
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
 
            while (col<9) {
            	
               if(col==2){
            		if(strcmp(strlwr(ph),strlwr(p))==0){
            			i++;
                	affichageposl(li-1);
                	printf("\n\n");
				}
				}
                ph=strtok(NULL, ";");
                col++;
            }
        }
				if(i==0){
			printf("No book was found \n");
			}
			break;
			}
			
//AUTHOR
			case 4:{
				fflush(stdin);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n Enter the name of the author you're searching for:  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			gets(p);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			 while (fgets(line,1000,fn)) {
        	
            col=0;
            li++ ;
           // to skip the line with the name of the columns in the file
            if (li==1){
            	continue;
			}
	
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
            while (col<9) {
            	
                if(col==3){
            		if(strcmp(strlwr(ph),strlwr(p))==0){
            			i++;
                	affichageposl(li-1);
                	printf("\n\n");
				}
				}
                ph=strtok(NULL, ";");
                col++;
            }
        }
				if(i==0){
			printf("No book was found \n");
			}
			break;	
			}
			
//PRICE
			case 5:{
				noo:
				fflush(stdin);
					printf("\n\n\n Enter your the minimum rating you would like:  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			scanf("%d",&pp);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			if(pp>5 || pp<0){
    				printf("ERROR! invalid number please try again!");
    				goto noo;
				}
    			 while (fgets(line,1000,fn)) {
        	
            col=0;
            li++ ;
           // to skip the line with the name of the columns in the file
            if (li==1){
            	continue;
			}
	
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
 
            while (col<9) {
            	
               if(col==8){
            		if(pp<=atoi(ph)){
            			i++;
                	affichageposl(li-1);
                	printf("\n\n");
				}
				}
                ph=strtok(NULL, ";");
                col++;
            }
        }
				if(i==0){
			printf("No book was found \n");
			}
			break;
			}
			default:{
	break;
  } 
    		
		}
       

        // Close the file
        fclose(fn);
    }
	}
   
 	void rechercheu(int c){
		int li=0 , col= 0,i=0,pp;
		FILE *fn;
 char *ph,p[50] , line[1000];
 fn = fopen("utili.csv", "r");
    if (fn==NULL){
    	printf("Can't open file \n");
	}
        
    else {
    	switch(c){
//FIRST NAME
    		case 1:{
    			fflush(stdin);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n Enter the first name of the user :  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			gets(p);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			 while (fgets(line,1000,fn)) {
        	
            col=0;
            li++ ;
           // to skip the line with the name of the columns in the file
            if (li==1){
            	continue;
			}
	
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
 
            while (col<7) {
            	if(col==1){
            		if(strcmp(strlwr(ph),strlwr(p))==0){
            			i++;
                	affichageposu(li-1);
                	printf("\n\n");
				}
				}
                
                ph=strtok(NULL, ";");
                col++;
            }
        }
			if(i==0){
			printf("No user was found \n");
			}
			break;
			}
			
//LAST NAME
			case 2:{
				fflush(stdin);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n Enter the last name of the user :  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			gets(p);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			 while (fgets(line,1000,fn)) {
        	
            col=0;
            li++ ;
           // to skip the line with the name of the columns in the file
            if (li==1){
            	continue;
			}
	
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
 
            while (col<7) {
            	
               if(col==0){
               	
            		if(strcmp(strlwr(ph),strlwr(p))==0){
            			i++;
                	affichageposu(li-1);
                	printf("\n\n");
				}
				}
                ph=strtok(NULL, ";");
                col++;
            }
        }
				if(i==0){
			printf("No user was found \n");
			}
			break;
			}
			
//ID
			case 3:{
				fflush(stdin);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n Enter the id of the user : \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ");
    			gets(p);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			 while (fgets(line,1000,fn)) {
        	
            col=0;
            li++ ;
           // to skip the line with the name of the columns in the file
            if (li==1){
            	continue;
			}
	
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
 
            while (col<7) {
            	
               if(col==2){
            		if(strcmp(ph,p)==0){
            			i++;
                	affichageposu(li-1);
                	printf("\n\n");
				}
				}
                ph=strtok(NULL, ";");
                col++;
            }
        }
				if(i==0){
			printf("No user was found \n");
			}
			break;
			}
			
//QT OF BORROWED BOOKS
			case 4:{
				fflush(stdin);
				printf("\n\n\n Enter the quantity of borrowed books:  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			scanf("%d",&pp);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			 while (fgets(line,1000,fn)) {
        	
            col=0;
            li++ ;
           // to skip the line with the name of the columns in the file
            if (li==1){
            	continue;
			}
	
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
 
            while (col<7) {
            	
               if(col==5){
            		if(pp==atoi(ph)){
            			i++;
                	affichageposu(li-1);
                	printf("\n\n");
				}
				}
                ph=strtok(NULL, ";");
                col++;
            }
        }
				if(i==0){
			printf("No user was found \n");
			}
			break;
			}
			
			default:{
	break;
  } 
    		
		}
       

        // Close the file
        fclose(fn);
    }
	}
	
 int rechiduti(){
 	
 	int li=0 , col=0,pp;
		FILE *fn;
 char *ph,p[50] , line[1000];
 fn = fopen("utili.csv", "r");
    if (fn==NULL){
    	printf("Can't open file \n");
	}
	
 					fflush(stdin);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n Enter the id of the user : \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ");
    			gets(p);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			 while (fgets(line,1000,fn)) {
        	
            col=0;
            li++ ;
           // to skip the line with the name of the columns in the file
            if (li==1){
            	continue;
			}
	
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
 
            while (col<7) {
            	
               if(col==2){
            		if(strcmp(ph,p)==0){
            	
                	return li;
				}
				}
                ph=strtok(NULL, ";");
                col++;
            }
        }
			printf("No user was found \n");
 return -1;
 }
 
 int rechidlivre(){
 	int li=0 , col=0,pp;
		FILE *fn;
 char *ph,p[50] , line[1000];
 fn = fopen("bibli.csv", "r");
    if (fn==NULL){
    	printf("Can't open file \n");
	}
				fflush(stdin);
					printf("\n\n\n\n\n\n\n\n\n\n\n\n Enter the id of the book you're searching for:  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			gets(p);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			 while (fgets(line,1000,fn)) {
        	
            col=0;
            li++ ;
           // to skip the line with the name of the columns in the file
            if (li==1){
            	continue;
			}
	
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
 
            while (col<9) {
            	
               if(col==1){
               	
            		if(strcmp(ph,p)==0){
           
                	return li;
				}
				}
                ph=strtok(NULL, ";");
                col++;
            }
        }
			
			printf("No book was found \n");
			return -1;
 }