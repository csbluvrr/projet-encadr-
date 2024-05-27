#include <stdio.h>
#include <stdlib.h>
#include "moowan.h"
#include <string.h>
#include <ctype.h>
typedef struct{
	char id[20], pw[20], name[20], lastname[20], hist[200],lvl[20],qt[20];
}uu;

int login(){
	
		int li=0 , col=0,i=-1,h=0;
		FILE *fn;
 char *ph,p[200],pw[20],id[20], line[1000];
 l:
 fn = fopen("utili.csv", "r");
    if (fn==NULL){
    	printf("Can't open file \n");
	}
        
    else {
    		if(h==0){
    			fflush(stdin);
    		printf("\n\n\n\n\n\n\n\n\n\n\n\n Enter your ID:  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            gets(id);
    			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    			
			}

			h=0;i=-1;li=0;
			printf(" Enter your Password:  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            gets(pw);
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
 
            while (col<6) {
            	if(col==2){
            		if(strcmp(ph,id)==0){
            		i=li;
				}}
				if(li==i && col==3){
						if(strcmp(ph,pw)==0){
            	goto w;
				}
				else{
					printf("WRONG password please retry \n");
					h++;
					fclose(fn);
					goto l;
				}
				}
				
				
                
                ph=strtok(NULL, ";");
                col++;
            }
        }  
        if(i==-1){
        	printf("this account does not exist please try again \n");
        	fclose(fn);
 goto l;
		}
    

			}
    		
       w:

        // Close the file
        fclose(fn);
        return i;
    }
   
   
  void signin(){
uu uti;

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
    
    strcpy(uti.lvl,"1");

    strcpy(uti.hist,"This user has currently no borrowed books");

    strcpy(uti.qt,"0");


 fflush(stdin);
    // Saving data in file
    fprintf(fp, "%s;%s;%s;%s;%s;%s;%s\n",uti.lastname,uti.name,uti.id,uti.pw,uti.hist,uti.qt,uti.lvl);
 
    printf("\n\n\n New user added to record ! \n ");
 
    fclose(fp);
    return 0;

}  

