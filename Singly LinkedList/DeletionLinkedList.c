#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head =NULL;
void create(){
	struct node *temp,*newnode;
	temp = head;
	newnode = (struct node *)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	if(head==NULL){
		head = temp = newnode;
	}
	else{
		temp = head;
		while(temp->next != NULL){
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
void del_beg(){
	struct node *temp;
	temp = head;
	head = head->next;
	free(temp);
	printf("\nThe node has been deleted\n");	
}
void del_end(){
	struct node *temp,*pr;
	temp  = head;
	while(temp->next->next!=NULL){
		temp = temp->next;
		
	}
	pr = temp;
	temp = temp->next;
	pr->next = NULL;
	free(temp);
	printf("\nThe last node has been deleted\n");
}
void del_pos(){
	struct node *temp;
	temp = head;
	int pos;
	int i;
	printf("\nEnter the position from where you want to delete:= ");
	scanf("%d",&pos);
	while(i<pos-1){
		temp = temp->next;
		i++;
	}
	struct node *pr = temp;
	temp = temp->next;
	pr->next = temp->next;
	temp->next = NULL;
	free(temp);
	printf("\nThe Node has been deleted\n");
	
	
}
int main(){
	int ch;
	while(1){
	
	printf("\n1. Create a node\n2. Display \n3. Delete from beg"
			" \n4. Delete from end\n5. Delete from pos \n6. Exit\n Enter ur choice := ");
	scanf("%d",&ch);
	switch(ch){
	
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			del_beg();
			break;
		case 4:
			del_end();
			break;
		case 5:
			del_pos();
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("\n Invalid Choice");

}}
return 0;
}
