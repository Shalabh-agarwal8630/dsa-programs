#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
typedef struct node n;
void linkedlist(n*ptr){
    while(ptr!=NULL){
        printf("element:%d \n",ptr->data);
        ptr= ptr->next;
    }
}
int main()
{
    n *head;
    n *second;
    n *third;
    n *fourth;
    head=(n*)malloc(sizeof(n));
    second=(n*)malloc(sizeof(n));
    third=(n*)malloc(sizeof(n));
    fourth=(n*)malloc(sizeof(n));

    head->data=16;
    head->next=second;
     
    second->data=36;
    second->next=third;
     
    third->data=37;
    third->next=fourth;

    fourth->data=83;
    fourth->next=NULL;

    linkedlist(head);
    return 0;

}

















