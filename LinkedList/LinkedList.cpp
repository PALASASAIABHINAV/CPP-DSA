#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArraytoLL(vector<int> &arr){
    if(arr.size()==0) return nullptr;
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int lengthofLL(Node* head){
    Node* temp=head;
    int count=0;
    while(temp){
       count++;
       temp=temp->next;
    }
    return count;
}

bool searchofLL(Node* head,int target){
    Node* temp=head;
    while(temp){
        if(temp->data==target){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

Node* deletingofHead(Node* head){
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* deletekthElement(Node* head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    int count=0;
    Node* temp=head;
    Node* prev=nullptr;
    while(temp){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

/*Insertion of the Linked List*/
Node* insertinginHead(Node* head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    return temp;
}

Node* insertingTail(Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    
    return head;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=convertArraytoLL(arr);
    // // printLL(head);
    // cout<<lengthofLL(arr);
    // cout<<searchofLL(head,9);
    // head=deletingofHead(head);
    // printLL(head);
    // head=deletekthElement(head,7);
    // // printLL(head);
    // head=insertinginHead(head,10);
    // printLL(head);
    head=insertingTail(head,6);
    printLL(head);
    return 0;
}