#include<iostream>
/*
Reda Roshdy 
*/
using namespace std;
class Node
{
    public:
    string value;
    int priority;
    Node * next;
};
class PQueue
{
private:
    Node *head=new Node;

public:
    PQueue()
    {
        head=NULL;
    }
    void enqueue(string item,int priority)
    {
                    Node * newNode=new Node;
            newNode->value=item;
            newNode->priority=priority;
        if(head!=NULL)
        {
            newNode->next=NULL;
            Node*current=new Node;
            Node*prv=new Node;
            current=head;
            prv=NULL;
            while( current!=NULL&&newNode->priority>=current->priority )
            {
                prv=current;
                current=current->next;
            }
            if(prv==NULL)
            {
                if(current->priority>newNode->priority)
                {

                    newNode->next=current;
                    head=newNode;
                }
                else
                {
                    head->next=newNode;
                    newNode->next=NULL;
                }
            }
            else
            {
                prv->next=newNode;
                newNode->next=current;
            }


        }
        else{
             newNode->value=item;
            newNode->priority=priority;
            newNode->next=NULL;
            head=newNode;
        }
    }
    string dequeue()
    {
        if(head!=NULL)
        {
           string firstp= head->value;
           if(head->next!=NULL){
           head=head->next;
           }
           else
           {
               head=NULL;
           }
           return firstp;


        }
        else
        {
            return "\nthe queue is empty";

        }
    }
};
int main()
{
   int counter=0;
   PQueue p;
   while(true)
   {
      cout<<"choose"<<endl;
      cout<<"1- add to the priority queue :";
      cout<<endl<<"2- dequeue the list element";
      cout<<endl<<"3- exit"<<endl;
      int choice;
      cin>>choice;
      if(choice==1)
      {
          int pr;
          string s;
          cout<<"enter the string:";
          cin>>s;
          cout<<"enter its priority:";
          cin>>pr;
          p.enqueue(s,pr);
          counter++;
      }
      else if(choice==2)
      {
          cout<<"after the dequeue: ";
          for (int i=0;i<counter+1;i++)
          {
         cout<<p.dequeue()<<" ";
          }
          counter=0;
          PQueue p;

      }
      else
      {
          counter=0;
          break;
      }
      cout<<endl<<"###################"<<endl;
   }
    return 0;
}
