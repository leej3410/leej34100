//-----------------------------------------
// NAME: Jaehun Lee
// STUDENT NUMBER: 7689407
// COURSE: COMP 2160, SECTION: A01
// INSTRUCTOR: Franklin Bristow
// ASSIGNMENT: assignment 3, QUESTION: question 2
// 
// REMARKS: Return any similar woards in the dictionary if the current string is same. 
//-----------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "engine.h"


int main(int argc, char ** argv){
	FILE *f;
	char line[MAX];
		char input[MAX];


	f = fopen("/usr/share/dict/words", "r");
    if( f == NULL){
  

  while (fgets(line, sizeof(line), f)){
    	
     
	printf("What word should I check? ");

	scanf("%s", input);

	for(int i = 0; i < argc; i ++){
        

		printf("%s\n", line);

	}

return 0;
	}