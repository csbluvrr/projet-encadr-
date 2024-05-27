#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


int dropl(int pos)
{
  FILE *file, *temp;
  char buffer[2048];
  bool keep_reading = true;
  int line = 1;

  file = fopen("bibli.csv", "r");
  temp = fopen("tempbibli.csv", "w");

  if (file==NULL || temp==NULL){
    printf("ERROR! can't open the file \n");
    return 1;
  }

  do 
  {
    // stores the next line from the file into the buffer
    fgets(buffer,2048, file);

    if (feof(file)){
    	keep_reading = false;
	} 
    else if (line!=pos)
      fputs(buffer, temp);
 
    line++;
  
  } while (keep_reading);
  

  fclose(file);
  fclose(temp);
  
  // delete the original file, give the temp file the name of the original file
  remove("bibli.csv");
  rename("tempbibli.csv","bibli.csv");

  return 0;
}

int dropu(int pos)
{
  FILE *file, *temp;
  char buffer[2048];
  bool keep_reading = true;
  int line = 1;

  file = fopen("utili.csv", "r");
  temp = fopen("temputili.csv", "w");

  if (file==NULL || temp==NULL){
    printf("ERROR! can't open the file \n");
    return 1;
  }

  do 
  {
    // stores the next line from the file into the buffer
    fgets(buffer,2048, file);

    if (feof(file)){
    	keep_reading = false;
	} 
    else if (line!=pos)
      fputs(buffer, temp);
 
    line++;
  
  } while (keep_reading);
  

  fclose(file);
  fclose(temp);
  
  // delete the original file, give the temp file the name of the original file
  remove("utili.csv");
  rename("temputili.csv","utili.csv");

  return 0;
}