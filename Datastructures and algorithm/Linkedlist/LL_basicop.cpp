//In this I will be covering the following operations
//1. Printing of the nodes 5. Insert of the node
//2. Taking custom input   6. Find a node
//3. Length of the node    7. Print reverse of the linked list
//4. Delete of the node    

#include<iostream>
using namespace std;

//Basic Node
class Node {
public:
    int data;
    Node *next;
    
    Node(int data){  //Constructor
        this -> data = data;
        this -> next = NULL;
    }
};

//Printing the LL function
void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<< " ";
        temp = temp -> next;
    }
}

//Printing the ith node in LL function
void printithnode(Node *head, int i){
    Node *temp = head;
    int count = 0;

    while(temp->next != NULL){
        if(count == i){
            cout << temp -> data;
        }
        count++;
        temp = temp -> next;
    }
}

//Function to take input in the linkedlist
Node *takeinput(){
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

//Insert node at ith position
Node *insertNode(Node *head, int i,int data){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;

    if(i == 0){
        newNode -> next = head;
        head = newNode;
        return head;
    }

    while(temp != NULL && count < i -1){
        temp = temp->next;
        count++;
    }

    if(temp != NULL){
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    }
    return head;
}

//Length of the linkedlist
int length(Node *head){
    int i = 1;
    Node *temp = head;
    if(temp == NULL){
        return(0);
    }
    while(temp->next != NULL){
        i = i + 1;
        temp = temp->next;
    }
    return(i);
}

//Function to delete node the linkedlist
Node *deleteNode(Node *head,int pos)
{
    int count = 0;
    Node *first = head;
    Node *second = head->next;
    if(pos == 0){
        Node *c = head;
        head = head->next;
        free(c);
        return head;
    }
    if(pos == 1){
        Node *c = head->next;
        head->next = head->next->next;
        free(c);
        return head;
    }
    while(count < pos-1){
        second = second->next;
        first = first ->next;
        count++;
    }
    if(second != NULL){
        Node *c = second;
        first->next = second->next;
        free(c);
    }
    return head;

}

//Find a node in the linkedlist
int find_node(Node *head, int data){
    Node *temp = head;
    int count;
    if(temp->data == data){
        return count;
    }
    temp = temp->next;
    count++;
}

//Reverse the linkedlist

Node *reversell(Node *head){ //Recursivelly
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *smallAns = reversell(head->next);
    Node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return smallAns;
}

int main(){
    int t;
    Node *head = NULL;
    int i;
    int data;
    cout<<"\nThe user menu for the linkedlist program is.";
    cout<<"\n----------------------------------------------";
    cout<<"\n1. Take input";
    cout<<"\n2. Print the LL";
    cout<<"\n3. Insert at the ith position";
    cout<<"\n4. Print the ith node in the LL";
    cout<<"\n5. Delete the node";
    cout<<"\n6. Length of the Linkedlist";
    cout<<"\n7. Find a node in LL";
    cout<<"\n8. Reverse the linkedlist";
    cout<<"\nEnter the choice:";
    cin>>t;
    switch(t) {
        case 1:
        Node *head = takeinput();

        case 2:
        print(head);

        case 3:
        cout<<"\nEnter the position where the node needs to be entered : ";
        cin>>i;
        cout<<"\nEnter the data";
        cin>>data;
        Node *head_nl = insertNode(head,i,data);

        case 4:
        cout<<"Enter the position where the node needs to be printer : ";
        cin>>i;
        printithnode(head,i);

        case 5:
        cout<<"Enter the position where the node needs to be deleted : ";
        cin>>i;
        Node *head_dl = deleteNode(head,i);
        cout<<"The linked list after deleting the node is : ";
        print(head_dl);


        case 6:
        int length_ll;
        length_ll = length(head);
        cout<<"\nThe length of the linked list is %d",length;

        case 7:
        int data;
        cout<<"\nThe data that needs to be found is %d",data;
        int ans = find_node(head,data);
        cout<<"\nThe data is in the position %d",ans;

        case 8:
        Node *head_r = reversell(head);
        cout<<"\nThe reversed linked list is:";
        print(head_r);


        
    }
}