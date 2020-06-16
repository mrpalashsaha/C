
# incldude <stdio.h>
# incldude <stdlib.h>


//node pointer is pointer to struck node 

typedef struck node *nodePtr;

//struct defn and typedef below are 
//broken into two parts for clarity  
// in our code we should usally combine the two 

struct node {
int data;
nidePtr next;
};

typedef struct node node ;

int main (int arg, coonst char *argv[]) {
// define first point as NULL 
nodePtr first = NULL;
first = malloc (sizeof (nide));
first->next = NULL; 
// first point to next is null 
node firstNode;
firstNode.next;

first->data = 61; 
first->next = malloc (sizeof (nide)); 
(first->next) ->next = NULL;
first->next ->data = 62;
nodePtr temp; 
temp = malloc (sizeof(node);
temp -> next = first; 
first = temp; 
printf ("Hello 

return 0;
}
// linked list does not allow to go back as it does not have any back link it always link to forward, to start the link list we need a pointer 
// to the first element 
