#include<stdio.h>
#include<stdlib.h>

struct listNode
{
    char data ; 
    struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main (void){
    ListNodePtr startPtr = NULL ;
    char item ; 
    instructions();
    printf("%s","?");
    unsigned int choice;
    scanf("%u", &choice);

    while (choice !=3){
        
    }
}
