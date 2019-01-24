#include <stdio.h>

typedef struct node
{
	int num;
	struct node*next;
	


}node;

int main(void) {

	node node1;
	node node2;
	node node3;

	node1.num = 10;
	node1.next = &node2;

	node2.num= 20;
	node2.next = &node3;

	node3.num = 30;
	node3.next = NULL;

	node*ptr;
	ptr = &node1;
	while (ptr != NULL) {
		printf("Current num: %d\n", ptr->num);
		ptr = ptr->next;
	}
	return 0;
}