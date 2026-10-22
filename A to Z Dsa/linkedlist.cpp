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
   temp->next= new node;
    
}

// insert at specific position
void insertAtaposition(node* &head ,int val,int pos){
    node* temp = head;
    node* n = new node(val);
    int n=0
    while (n!=pos)
    {
        temp= temp->next;
        n++;
    }
    
    
}

int main(){
    int 
}