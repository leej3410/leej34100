//-----------------------------------------
// NAME: Jaehun Lee
// STUDENT NUMBER: 7689407
// COURSE: COMP 2160, SECTION: A01
// INSTRUCTOR: Franklin Bristow
// ASSIGNMENT: assignment 3, QUESTION: question 1
// 
// REMARKS: Unit testing with header file if is this all work.
//-----------------------------------------


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int  initializeTest(void);
void insertions(void);



int main(int argc, char **argv){

	if (initializeTest() == 0){
		    insertions();


	}



	return 0;

	}

	int initializeTest(void){
  int result;
  if(node != NULL){
    result = 0;
  }
  else{
    result = 1;
  }
  return result;
}
void insertions(void){

  assert(node != NULL);

  insert("One");
  assert(numNodes == 1);// insert string when each numNodes is same.

  insert("Two");
  assert(numNodes == 2);

  insert("Three");
  assert(numNodes == 3);
}