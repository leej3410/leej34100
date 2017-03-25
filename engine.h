//-----------------------------------------
// NAME: Jaehun Lee
// STUDENT NUMBER: 7689407
// COURSE: COMP 2160, SECTION: A01
// INSTRUCTOR: Franklin Bristow
// ASSIGNMENT: assignment 3, QUESTION: question 2
// PURPOSE: header file for unsing table.c
// 
//-----------------------------------------



#ifndef table_H_INCLUDED
#define table_H_INCLUDED

typedef enum BOOL { false, true } Boolean;

typedef struct NODE Node;

static Node *top = NULL;
static int numNodes = 0;
static Node *traverseNode = NULL;


int  initializeTest(void);
void insertions(void);
void removlas(void);
void searches(void);
void traversals(void);

Boolean insert(char const * const string);
Boolean delete(char const * const string);

Boolean search(char *string);

char *firstItem();
char *nextItem();

#endif // table_H_INCLUDED