#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head =NULL;
void create(){
	struct node *temp,*newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	if(head==NULL){
		head = temp = newnode;
	}
	else{
		temp = head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next = newnode;
	}
}
void display(){
	struct node *temp;
	temp = head;
	if (head==NULL){
		printf("\nThe Linked list is Empty");
	}
	else{
	
	while (temp!=NULL){
		printf("\n%d",temp->data);
		temp = temp->next;
	}
}
}
int main(){
	int ch;
	while(1){
	
	printf("\n1. Create a node\n2. Display \n 3. Exit\n Enter ur choice := ");
	scanf("%d",&ch);
	switch(ch){
	
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			exit(0);
			break;
		default:
			printf("\n Invalid Choice");

}}
return 0;
}
