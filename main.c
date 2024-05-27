#include <stdio.h>
#include <stdlib.h>
#include "moowan.h"
#include <string.h>
#include <ctype.h>

typedef struct{
	char id[20], pw[20], name[20], lastname[20], hist[200],lvl[20],qt[20];
}U;

U loginfo(int pos){
	U uti;
			int lin=0 , col= 0;
		FILE *fn;
 char *ph , line[5000];
 fn = fopen("utili.csv", "r");
    if (fn==NULL){
    	printf("Can't open file, the program will close \n");
	}
        
    else {
        while (fgets(line,5000,fn)) {
            col=0;
            lin++ ;
           // to skip the line with the name of the columns in the file
            if (lin==1 ){
            	continue;
			}
    
            // Splitting the file in columns and putting the content in a temporary placeholder var
            ph=strtok(line,";");
 
            while (col<7) {
            	
				if(lin==pos){
				
            	switch (col) {
  case 0:{
	  
  	strcpy(uti.lastname,ph);
	break;
	
  }
   
  case 1:{
  		strcpy(uti.name,ph);
  	
	break;
	
	
  }
    case 2:{
    		strcpy(uti.id,ph);
		
  	 
	break;
  }
   
  case 3:{
  	strcpy(uti.pw,ph);
	  
  	
	break;
	
  }
  case 4:{
  		strcpy(uti.hist,ph);
  	 
	break;
  }
   
  case 5:{
  	
  		strcpy(uti.qt,ph);
  	
	break;
	
  }
  case 6:{

  	strcpy(uti.lvl,ph);
  	 
	break;
	
  }
  default:{
	break;
  }

}
}

                
                ph=strtok(NULL, ";");
                col++;
            }   
        }
        // Close the file
        fclose(fn);
    }
	return uti;
}

//!!!!!!!FONCTION MAIN!!!!!

int main() {
	U ut;
	int i,lvl,a,c,b;
	out:
		fflush(stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t ************************* < WELCOME TO MM LIBRARY > ********************   \n\n");
	printf("\t\t\t 1.LOG IN \n");
	printf("\t\t\t 2.SIGN IN \n\n");
	printf("\t\t\t ********************************************************   \n");
	printf("\t\t\t(type the number of the option you want)\n\t\t\t");
	printf("\n\n\n\n\n\n\n\n");
	scanf("%d",&c);
	if(c!=1 && c!=2){
		printf("ERROR! invalid number please retry \n");
		goto out;
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	if(c==2){
signin();
printf("You have to LOG IN to access your new account \n");
goto out;
	}

 ut=loginfo(login());
 lvl=atoi(ut.lvl);

	woosh:
		
 	a=MENU(lvl);
	 	
if(lvl==1){

	switch(a){
		case 1 : {
		affichagel();
		//retour ou sortie
		goto wee;	
	 }	
	 case 2 : {
		recherchel(rechl());
		//retour ou sortie
		goto wee;	
	 }	
	case 3 : {
		
		 printf("\n ------------------\n LAST NAME : %s ",ut.lastname);

  		printf("\n FIRST NAME : %s ", ut.name);

    	printf("\n ID : %s ",ut.id);
    	
    	printf("\n PASSWORD : %s ",ut.pw);

  		printf("\n BOOKS CURRENTLY BORROWED : %s ", ut.hist);

  		printf("\n QUANTITY OF BOOKS BORROWED : %s ", ut.qt);

		//retour ou sortie
		goto wee;
	
	 }	
	 case 4 : {
		goto out;
	
	 }	
	 case 5 : {
		return 0;	
	 }	
	 
default:{
	printf("ERROR! invalid number, please retry \n");
	goto woosh;
	break;
  }
}
}

if(lvl==2){

	switch(a){
		case 1 : {
		affichagel();
		//retour ou sortie
		goto wee;	
	 }	
	 
	 case 2 : {
		affichageu();
		//retour ou sortie
		goto wee;	
	 }	
	 
	 case 3 : {
	 			ho:
		fflush(stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t *******************************************************   \n\n");
	printf("\t\t\t 1.Rechercher un livre \n");
	printf("\t\t\t 2.Rechercher un utilisateur \n");
	printf("\t\t\t ********************************************************   \n");
	printf("\t\t\t(veuillez taper le numero de l'option voulue)\n\t\t\t");
	printf("\n\n\n\n\n\n\n\n");
	scanf("%d",&c);
	if(c!=1 && c!=2){
		printf("ERROR! invalid number please retry \n");
		goto ho;
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	if(c==1){
		recherchel(rechl());
	}
	else{
		rechercheu(rechu());
	}
		//retour ou sortie
		goto wee;	
	 }	
	 
	  case 4 : {
		//retour ou sortie
		emprunt();
		goto wee;	
	 }	
	 
	 case 5 : {
			 			hu:
		fflush(stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t *******************************************************   \n\n");
	printf("\t\t\t 1.Add a book \n");
	printf("\t\t\t 2.Add a user \n\n");
	printf("\t\t\t ********************************************************   \n");
	printf("\t\t\t(type the number of the option you want)\n\t\t\t");
	printf("\n\n\n\n\n\n\n\n");
	scanf("%d",&c);
	if(c!=1 && c!=2){
		printf("ERROR! invalid number please retry \n");
		goto hu;
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	if(c==1){
		ajoutl();
	}
	else{
		ajoutu();
	}
		//retour ou sortie
		goto wee;
	 }	
	 
	 case 6 : {
		 			hv:
		fflush(stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t *******************************************************   \n\n");
	printf("\t\t\t 1.delete a book \n");
	printf("\t\t\t 2.delete a user \n\n");
	printf("\t\t\t ********************************************************   \n");
	printf("\t\t\t(type the number of the option you want)\n\t\t\t");
	printf("\n\n\n\n\n\n\n\n");
	scanf("%d",&c);
	if(c!=1 && c!=2){
		printf("ERROR! invalid number please retry \n");
		goto hv;
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	if(c==1){
	b=rechidlivre();
	if(b!=-1){
	dropl(b);
	
	}
		
	}
	else{

b=rechiduti();
	if(b!=-1){
	dropu(b);	
	} 

	}
		//retour ou sortie
		goto wee;
	 }	
	 
	 case 7 : {
	goto out;
	 }	
	 
	 case 8 : {
		return 0;	
	 }	
	 
default:{
	printf("ERROR! invalid number, please retry \n");
	goto woosh;
	break;
  }
}
}

	

		wee:
		fflush(stdin);
		printf("\n ********* type 1 to go back to the menu or 0 if u want to close the program \n");
		scanf("%d",&c);
		if(c==1){goto woosh;}
		else if(c==0){
		return 0;}
		else{printf("ERROR! invalid number please retry \n \n\n\n");
		goto wee;
		}
		


}

 


	
