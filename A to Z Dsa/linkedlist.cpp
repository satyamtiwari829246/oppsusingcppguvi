#include<iostream>
using namespace std;

class node{
    int data;
    node* next;
public:
    node(int val){
        data = val;
        next = NULL;

    }
};

//insert at head
void insertAtHead(node* &head, int val){
    node* temp = new node(val);
    temp->next = head;
    head = temp;
}

//insert at tail;
void insertAttail(node* &head,int val){
         node* temp= head;
       node* n = new node(val);
    while(temp->next!=NULL){
        temp= temp->next;
       
    }
   temp->next= n;
    
}

// insert at specific position
void insertAtaposition(node* &head ,int val,int pos){
    node* temp = head;
    node* n = new node(val);
    if(pos==1){
        n->next= head;
      head = n;
      return;

    }
    for(int i=0;i=pos-1 && temp->next!=NULL;i++){
        temp=temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}

//reversing the single linklist
void reversingThelinklist(node* &head){
     node* prev = NULL;
     node* curr = head;
     node* nextNode = NULL;

     while(curr!=NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr=nextNode;
     }

     prev = head;

}

//Deletion from begining
void deleteBegining(node* head){
    node* temp = head;
    head= temp->next;
    temp->next= NULL;
    return head;
}

// Deletion from end position

void deletionFromend(node* head){
    node* temp = head;
    while((temp->next)->next!=NULL){
        temp= temp->next;
    }
    node* toDelete = temp->next;
    temp->next = NULL;
    delete toDelete;
}  

//deleting from specific position
void deletionFromSpecificPosition(node* head,int pos){
    node* temp = head;
    for(int i=0;i<pos-1;i++){
        temp= temp->next;
    }
    node* toDelete = temp->next;
    temp->next = (temp->next)->next;
    delete toDelete;
}


int main(){
    
}