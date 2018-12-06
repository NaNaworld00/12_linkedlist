#include <stdio.h>
#include <stdlib.h>

typedef struct linknd {
	int data;
	void *next;
	//struct linknd *next;
} linknd_t;


static linknd_t *list; //linked List ��ü 

linknd_t* create_rode(int value) {
	linknd_t* ndPtr;
	
	//���� �޸� �Ҵ�
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t));
	if (ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	 } 
	
	//������ �� ��
	ndPtr->data = value;
	ndPtr->next = NULL;
	
	return ndPtr;
	 
}
