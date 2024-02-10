#include<iostream>
using namespace std;

class node
{
public:
    string task;
    bool status;
    node *next;
    node(string task,bool status)
    {
        this->task=task;
        this->status=status;
        next=NULL;
    }
};

class linkedlist
{
public:
    node *head;
    linkedlist()
    {
        head=NULL;
    }
    void add()
    {
        string task;
        cout<<"Input the task you want to add: ";
        cin>>task;
        node *newnode = new node(task,0); //initially, the status of the task is Pending
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            node *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }

    void view()
    {
        node *temp=head;
        while(temp->next!=NULL)
        {
            cout<<"Task: "<<temp->task<<"\tStatus: ";
            if(temp->status==0)
            {
                cout<<"PENDING";
            }
            if(temp->status==1)
            {
                cout<<"COMPLETE";
            }
            temp=temp->next;
        }
    }

    void mark()
    {
        string t;
        int flag=0;
        cout<<"Enter the Task you want to mark as complete: ";
        cin>>t;
        node *temp=head;
        while(temp->task!=t)
        {
            temp=temp->next;
            if(temp->task==t)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            temp->status=1; //marked as completed
        }
        else
            cout<<"Entered Task not found in the list";
    }

    void remove()
    {
        string t;
        cout<<"Enter the Task you want to remove: ";
        cin>>t;
        node *temp=head;
        node *ptr=NULL;
        while(temp->task!=t)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=temp->next;
        delete temp;
    }
};

int main()
{
    linkedlist l;
    int ch;
    while(1)
    {
        cout<<"\nChoose what you want to do:\n1)Add a Task\n2)View current Tasks\n3)Mark a Task as completed\n4)Remove a Task from the list\n5)Exit Program\n";
        cin>>ch;
        if(ch==1)
        {
            l.add();
        }
        else if(ch==2)
        {
            l.view();
        }
        else if(ch==3)
        {
            l.mark();
        }
        else if(ch==4)
        {
            l.remove();
        }
        else if(ch==5)
        {
            break;
        }
    }
}
