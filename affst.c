#include <stdio.h>
#include <stdlib.h>
	void affichagel(){
		int li=0 , col= 0;
		FILE *fn;
 char *ph , line[1000];
 fn = fopen("bibli.csv", "r");
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
            
 
            while (col<9) {
            	
            	switch (col) {
  case 0:{
  	 printf("\n ------------------TITLE : ");
	break;
  }
   
  case 1:{
  	printf("\n ID : ");
	break;
	
	
  }
    case 2:{
  	 printf("\n CATEGORY : ");
	break;
  }
   
  case 3:{
  	printf("\n AUTHOR : ");
	break;
	
  }
  case 4:{
  	 printf("\n EDITION :");
	break;
  }
   
  case 5:{
  	printf("\n\n SYNOPSIS : ");
	break;
	
  }
  case 6:{
  	 printf("\n\n PRICE : ");
	break;
	
  }
  case 7:{
  	 printf("\n QUANTITY AVAILABLE : ");
	break;
	
  }
  
  case 8:{
  		printf("\n Rating : ");
  	 
	break;
	
  }
   
  
  default:{
	break;
  }
}
                if(col==8){
		printf("%s stars",ph);
	}
	else{
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
    
	void affichageu(){
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
  case 0:{
	  
  	 printf("\n ------------------\n LAST NAME : : ");
	break;
	
  }
   
  case 1:{
  		printf("\n FIRST NAME : ");
  	
	break;
	
	
  }
    case 2:{
    		printf("\n ID : ");
		
  	 
	break;
  }
   
  case 4:{
  		printf("\n BOOKS CURRENTLY BORROWED : ");
	  
  	
	break;
	
  }
  case 5:{
  		printf("\n QUANTITY OF BOOKS BORROWED :");
  	 
	break;
  }
 
  default:{
	break;
  }

}
     if( col!=3 && col!=6){
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