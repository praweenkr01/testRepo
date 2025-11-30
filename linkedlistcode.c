#include<stdio.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node* next;
};

void printList(struct Node* head){
    if(head==NULL) {
        printf("The list is empty");
        return ;}
    while(head!=NULL){
        printf("%d->",head->val);
        head=head->next;
    }
    printf("Null\n");

}

void insertNode(int value, struct Node** head){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->val=value;
    temp->next=NULL;

    if(*head==NULL){
        *head=temp;
        return;
    }else{
        struct Node* curr=*head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
        return;
    }
}

/*
This is the entry point of the function.
*/
int main(){
    // printf("Hello World");
    struct Node* head=NULL;
    insertNode(1,&head);
    insertNode(2,&head);
    insertNode(3,&head);
    printList(head);
    return 0;
}