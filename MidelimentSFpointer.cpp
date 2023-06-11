#include<iostream>

using namespace std;
class Node
{
    public:
    int val;
    Node *next;

     Node(int val)
    {
        this->val=val;
        this->next=NULL;

    }
   
        

    
   
};
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void insert(Node* &head,int data)
{
    Node* temp=new Node(data);
    if(head==NULL)
    {
        head=temp;
    }
    else{
        Node* p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}
   void MidElement(Node* &head)
    {
        if(head==NULL)
            {
                cout<<head->val<<endl;
            }


        
        Node* s=head;
        Node* f=head;
        while(f!=NULL && f->next!=NULL)
        {
            s=s->next;
            f=f->next->next;
        }
        cout<<"\nmid element is"<<endl;
        cout<<s->val<<endl;




    }

    

   



 Node* head=NULL;
int main()
{
    Node* node1= new Node(10);
   // Node* head = node1;
   // cout<<head->data<<endl;
   insert(head,10);
    
    insert(head,20);
    
    insert(head,30);
   
    insert(head,40);
    insert(head,50);
    insert(head,60);
    print(head);
    



 MidElement(head);

    
   
return 0;

}