#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1){
      data=data1;
      next=nullptr;
      prev=nullptr;
    }
};
Node* covertArraytoDLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* back=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        temp->prev=back;
        back->next=temp;
        back=temp;
    }
    return head;
}

void printDLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* deletingofHead(Node* head){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    Node* back=head;
    head=head->next;

    head->prev=nullptr;
    back->next=nullptr;
    delete back;
    return head;
}


Node* deletingofTail(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* back=temp->prev;
    back->next=nullptr;
    temp->prev=nullptr;
    delete temp;
    return head;
}

Node* deletingKthElement(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k){
            break;
        }
        temp=temp->next;
    }
    if(temp==NULL) return head;

    Node* back=temp->prev;
    Node* front=temp->next;
    if(back==NULL && front==NULL){
        delete temp;
        return NULL;
    }else if(back==NULL){
        Node* present=temp->next;
        present->prev=nullptr;
        temp->next=nullptr;
        delete temp;
        return present;
    }else if(front==NULL){
        Node* present=temp->prev;
        present->next=nullptr;
        temp->prev=nullptr;
        delete temp;
        return head;
    }
        back->next=front;
        front->prev=back;
        temp->next=nullptr;
        temp->prev=nullptr;
       delete temp;
       return head;

}

Node* insertingtoHead(Node* head,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        return newNode;
    }
    newNode->next=head;
    head->prev=newNode;
    return newNode;
}

Node* insertingtoTail(Node* head,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        return newNode;
    }
 
    if(head->next==NULL){
        newNode->next=head;
        head->prev=newNode;
        return newNode;
    }

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    Node* back=temp->prev;
    back->next=newNode;
    newNode->prev=back;
    newNode->next=temp;
    temp->prev=newNode;
    return head;

}

Node* insertingtoKthElement(Node* head,int val,int k){
    Node* newNode=new Node(val);
    if(head==NULL){
        return newNode;
    }
    if(k==1){
        newNode->next=head;
        head->prev=newNode;
        return newNode;
    }
    
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k){
            break;
        }
        temp=temp->next;
    }

    if(temp==NULL){
        Node* tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=newNode;
        newNode->prev=tail;
        return head;
    }

    Node* back=temp->prev;

    back->next=newNode;
    newNode->prev=back;
    newNode->next=temp;
    temp->prev=newNode;
    return head;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=covertArraytoDLL(arr);
    // printDLL(head);
    // head=deletingofHead(head);
    // printDLL(head);
    // head=deletingofTail(head);
    // printDLL(head);
    // head=deletingKthElement(head,7);
    // printDLL(head);
    // head=insertingtoHead(head,0);
    // printDLL(head);
    // head=insertingtoTail(head,10);
    // printDLL(head);
    // head=insertingtoKthElement(head,100,3);
    // printDLL(head);

    return 0;
}