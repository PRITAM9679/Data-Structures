#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	int next;
};
struct node *head =NULL;
void create(){
	struct node *temp,*newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	if(head==NULL){
		head = temp = newnode;
	}
	else{
		temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void display(){
	struct node *temp;
	temp = head;
	while (temp!=NULL){
		printf("\n%d",temp->data);
		temp = temp->next;
	}
}
void ins_beg(){
	struct node *newnode;
	printf("\nEnter the data yo be inserted at beg : = ");
	scanf("%d",&newnode->data);
	newnode->next = head;
	head = newnode;
}
int main(){
	int ch;
	while(1){
	
	printf("\n1. Create a node\n2. Display \n3. Insert at begining \n4. Exit\n Enter ur choice := ");
	scanf("%d",&ch);
	switch(ch){
	
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			ins_beg();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("\n Invalid Choice");

}}
return 0;
}
