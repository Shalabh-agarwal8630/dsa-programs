#include <stdio.h>
#include <stdlib.h>
struct node *f = NULL;
struct node *r = NULL;

struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
void enqueue(int val)
{
    struct node *b = (struct node *)malloc(sizeof(struct node));
    if (b == NULL)
    {
        printf("queue full");
    }
    else
    {
        b->data = val;
        b->next = NULL;
        if (f ==NULL){
            f=r=b;
        }
        else{
            r->next=b;
            r=b;
        }
    }
}
int dequeue(){
int val=-1;
struct node* p=f;
if(f==NULL){ 
    printf("queue empty");
}
else{
    f=f->next;
    val=p->data;
    free(p);
}
return val;
}
int main(){
enqueue(34);
enqueue(32);
printf("element after dequing-%d\n",dequeue());
printf("element after dequing-%d",dequeue());
}