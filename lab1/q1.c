#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *lptr;
    struct node *rptr;
}node;
node *create(int value){
    node *ptr=malloc(sizeof(node));
    ptr->data=value;
    ptr->lptr=NULL;
    ptr->rptr=NULL;
    return ptr;
}
void insert(node **root,int value){
    if(*root==NULL){
        *root=(node*)malloc(sizeof(node));
        (*root)->data=value;
        (*root)->lptr=NULL;
        (*root)->rptr=NULL;
    }
    else{
        node *p=*root;
        node *parent=NULL;
        while(p!=NULL){
            parent=p;
            if((p)->data >value){
                p=p->lptr;
            }
            else {
                p=p->rptr;
            }

        }
        node *temp=malloc(sizeof(node));
        temp=create(value);
    if(parent->data>value){
        parent->lptr=temp;
    }
    else{
        parent->rptr=temp;
    }
    }
        
}
void search(node **root,int value){
    if(*root==NULL){
        *root=create(value);
    }
    node *p=*root;
    int flag=0;
    while(p!=NULL){
        if(p->data==value){
            printf("\nKey found\n");
            flag=1;
            break;
        }
        else{
            if(p->data > value){
                p=p->lptr;
            }
            else{
                p=p->rptr;
            }
        }
    }
    if(flag==0){
        insert(&(*root),value);
    }
}
void inorder(node **root){
    if(*root==NULL){
        return;
    }
        inorder(&((*root)->lptr));
        printf("%d\t",(*root)->data);
        inorder(&((*root)->rptr));
    
}
int main(){
    node *root=NULL;
    insert(&root,5);
    insert(&root,2);
    insert(&root,3);
    insert(&root,4);
    inorder(&root);
    search(&root,2);
    search(&root,6);
    printf("\n");
    inorder(&root);
}