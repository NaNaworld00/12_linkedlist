#include <stdio.h>
#include <stdlib.h>

typedef struct linknd {
	int data;
	void *next;
	//struct linknd *next;
} linknd_t;


static linknd_t *list; //linked List 실체 

linknd_t* create_rode(int value) {
	linknd_t* ndPtr;
	
	//동적 메모리 할당
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t));
	if (ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	 } 
	
	//정수값 저 장
	ndPtr->data = value;
	ndPtr->next = NULL;
	
	return ndPtr;
	 
}
