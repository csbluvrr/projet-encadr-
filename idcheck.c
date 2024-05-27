#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "moowan.h"

	int idcheckl(char p[]){
		int li=0 , col= 0,i=0,pp;
		FILE *fn;
 char *ph , line[1000];
 fn = fopen("bibli.csv", "r");
    if (fn==NULL){
    	
    	printf("Can't open file\n");
    	return -1;
	}
        
    else {

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
				}
				}
                ph=strtok(NULL, ";");
                col++;
            }
        }
			
        // Close the file
        fclose(fn);
    }
    return i;
	}
   
   	int idchecku(char p[]){
		int li=0 , col= 0,i=0,pp;
		FILE *fn;
 char *ph , line[1000];
 fn = fopen("utili.csv", "r");
    if (fn==NULL){
    	
    	printf("Can't open file\n");
    	return -1;
	}
        
    else {

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
				}
				}
                ph=strtok(NULL, ";");
                col++;
            }
        }
			
        // Close the file
        fclose(fn);
    }
    return i;
	}
 