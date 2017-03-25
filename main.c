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
#include "engine.h"

Node *node;


int  initializeTest(void);
void insertions(void);
void removlas(void);
void traversals(void); 
void searches(void);



int main(int argc, char **argv){

	if (initializeTest() == 0){
    insertions();
    traversals();
    searches();
    removlas();
    printf("successed.\n");
    result = 0;

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
void removlas(void){

  assert(node != NULL);

  assert(numNodes > 0 && numNodes < 4);

  assert(search("One") == 1);
  delete("One");// will delete when the find same number 

  assert(numNodes > 0 && numNodes < 3);
  assert(search("One") == 1);
  assert(search("Two") == 2);
  delete("Two");

  assert(numNodes > 0 && numNodes < 2);
  assert(search("Two") == 2);
  assert(search("Three") == 3);
  delete("Three");

  assert(numNodes == 0);
  assert(search("Three") == 0);
}
//Test traversals elements 

void traversals(void){

  assert(node != NULL);

}
//Test search elements 
void searches(void){

  assert(node != NULL);

  assert(numNodes > 0);
  assert(search("Two") == 2);
  assert(numNodes > 1);
  assert(search("Three") == 1);
  assert(numNodes > 4);
  assert(search("Four") == 0);
  assert(numNodes < 5);

}