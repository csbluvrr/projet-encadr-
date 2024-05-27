#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
	void emprunt(){
		int li=0 , col= 0;
		FILE *fn;
 char *ph , line[1000];
 fn = fopen("utili.csv", "r");
    if (fn==NULL){
    	printf("Can't open file \n");
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
            ph=strtok(line ,";");

 
            while (col<7) {
            	
            	switch (col) {
  case 2:{
	  if(strcmp("Wawang911",ph)!=0 && strcmp("jimmimoo",ph)!=0 && strcmp("Wang1904",ph)!=0 && strcmp("moomoo",ph)!=0 ){
	  	printf("\n ------------------USER ID : ");
	  }
  	 
	break;
	
  }
   
  case 4:{
  	if(strcmp("NONE (this user is an admin)",ph)!=0){
	  	printf("\n BOOKS CURRENTLY BORROWED : ");
	  }
  		
	  
  	
	break;
	
  }
 
  default:{
	break;
  }

}
     if( (col==4 && (strcmp("NONE (this user is an admin)",ph)!=0) ) || (col==2 &&(strcmp("Wawang911",ph)!=0 && strcmp("jimmimoo",ph)!=0 && strcmp("Wang1904",ph)!=0 && strcmp("moomoo",ph)!=0 ))){
		printf("%s",ph);
}

                ph=strtok(NULL, ";");
                col++;
            }
 
            printf("\n\n");
        }

        // Close the file
        fclose(fn);
    }
	}