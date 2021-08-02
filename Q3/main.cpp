/*
Reda Roshdy
*/
#include<iostream>
using namespace std;
int insize=1000;
template<class T>
class Stack {
public:
    T *data=new T[insize];
    int sizee;
    Stack()
    {
        sizee=-1;

    }
    Stack(T value , int initial_Size)
    {
        int i;
        for (  i=0;i<initial_Size;i++)
        {
            data[i]=value;
        }
        sizee=i-1;
    }
    ~Stack()
    {
     delete []data;
     data=NULL;
    }

     void push(T val)
     {
         sizee++;
         data[sizee]=val;

     }
     void pop()
     {
         if (sizee == -1)
			cout << "Empty " << endl;
		else
		{
		    cout<<"POP the top element :";
		    cout<<data[sizee]<<endl;
		    sizee--;
		    cout<<"##########################"<<endl;

		}
     }
    T& top()
    {
     if(sizee == -1)
            cout <<"Stack is empty"<<endl;
        else
            return data[sizee];
    }


     int Size()
     {
        return sizee+1;
     }


   void display()
   {

       for(int i=sizee;i>=0;i--)
       {
           cout<<data[i]<<endl;
       }
    }
    bool isempty()
    {
        if(sizee==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }



};
int main()
{
     Stack<int>ST;
     ST.push(5);
     ST.push(20);
     ST.push(15);
     ST.push(40);
      ST.push(70);
     cout<<"after adding elements to the  stack :"<<endl;
     ST.display();
    cout <<endl<<"Size of Stack before popping : " <<endl;
    cout << ST.Size()<<endl;
    ST.pop();
    ST.pop();
    cout <<"\nSize of Stack after two popping : " <<endl;
    cout << ST.Size();
    cout<<endl<<"after two popping :"<<endl;
     ST.display();
    cout <<endl<<"Top element : "<<endl;
    cout <<ST.top()<<endl;
    cout<<"using pop to empty the stack"<<endl;
    ST.pop();
    ST.pop();
    ST.pop();
    ST.pop();
    cout<<"is the stack empty :"<<ST.isempty()<<endl;
   cout << "##########################"<<endl;
    Stack<int>s(4,5);
    cout<<"using the stack(value , intial_size)constructor:"<<endl;
    s.display();
    //################################################################

return 0;

}
