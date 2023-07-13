#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
// #include "node.h"
#include "my_dll.h"

my_dll* create_list(){
    my_dll* list;
    list = (my_dll*)malloc(sizeof(my_dll));
    assert(list!=NULL);
    list->root = NULL;
    list->tail = NULL;
    return list;
}

node* create_node(){
    node* n = (node*)malloc(sizeof(node));
    assert(n!=NULL);
    n->data = __INT32_MAX__;//Value that is not mostly used
    n->next = NULL;
    n->prev = NULL;
    return n;
}

void insert(my_dll* list,int x){
    node* newnode = create_node();
    node* temp;
    if(list->tail==NULL || list->root==NULL){
        list->root = newnode;
        list->tail = newnode;
        newnode->data = x;
        newnode->next = NULL;
        newnode->prev = NULL;
        return;
    }
    temp = (node*)list->tail;
    newnode->data = x;
    newnode->prev = temp;
    temp->next = newnode;
    newnode->next = NULL;
    list->tail = newnode;
}

void insert_at(my_dll* list,int x,int i){
    node* temp = (node*)list->root;
    int index=0;
    node* newnode = create_node();
    newnode->data = x;
    if(i==0){
        if(temp==NULL){
            list->root = newnode;
            list->tail = newnode;
            newnode->next = NULL;
            newnode->prev = NULL;
            return;
        }
        temp->prev=newnode;
        newnode->next=temp;
        newnode->prev=NULL;
        list->root = newnode;
    }
    else if(i==get_size(list)){
        temp = (node*)list->tail;
        temp->next = newnode;
        list->tail = newnode;
        newnode->prev = temp;
        newnode->next = NULL;
    }
    else{
        while(temp!=NULL){
            if(index==i){
                temp->prev->next=newnode;
                newnode->next=temp;
                newnode->prev=temp->prev;
                temp->prev=newnode;
                break;
            }
            index++;
            temp=temp->next;
        }
    }
}
void delete(my_dll* list,int i){
    node* temp = list->root;
    int index=0;
    while(temp!=NULL){
        if(index==i){
            if(temp->next==NULL || temp->prev==NULL){
                if(temp->prev==NULL && temp->next==NULL){
                    list->root=NULL;
                    list->tail=NULL;
                    free(temp);
                }
                else if(temp->prev==NULL){
                    list->root=temp->next;
                    temp->next->prev=NULL;
                    free(temp);
                }
                else if(temp->next==NULL){
                    temp->prev->next=NULL;
                    list->tail=temp->prev;
                    free(temp);
                }
                return;
            }
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
            return;
        }
        index++;
        temp=temp->next;
    }
}
int find(my_dll* list,int x){
    node* temp = list->root;
    int index=0;
    while(temp!=NULL){
        if(temp->data==x){
            return index;
        }
        index++;
        temp=temp->next;
    }
    return -1;
}

void prune(my_dll* list){
    node* temp=list->root;
    if(temp==NULL){
        return;
    }
    temp=temp->next;//starting from index 1;
    int index=0;
    while(temp!=NULL){
        if(temp->next==NULL){
            temp->prev->next=NULL;
            list->tail=temp->prev;
            free(temp);
            return;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        temp=temp->next->next;//jumping two elements at a time;
    }
}

void print(my_dll* list){
    node* temp = list->root;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void print_reverse(my_dll* list){
    node* temp = list->tail;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

int get_size(my_dll* list){
    node* temp = list->root;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
