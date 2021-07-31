#include<iostream>
#include<string>
/*
Reda Roshdy
*/
using namespace std;
int insize=200;
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
		    sizee--;

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
bool truePair(char open, char close)
{
	if (open == '(' && close == ')')
		return true;
	else if (open == '{' && close == '}')
		return true;
	else if (open == '[' && close == ']')
		return true;
	return false;
}
bool AreBalanced(string exp)
{
	Stack<char>  S;
	int length = exp.length();
	bool flag=true;//CHECK FOR COMMENTS
	for (int i = 0; i < length; i++)
	{
	    if(exp[i]=='/'&&flag){
            if(i!=length-1&&exp[i+1]=='*')
            {
                S.push(exp[i]);
                flag=false;
                i++;
            }
            else
            {
                return false;
            }
	    }
	    else if(flag){
		if ((exp[i] == '(' || exp[i] == '{' || exp[i] == '['))
			S.push(exp[i]);
		else if ((exp[i] == ')' || exp[i] == '}' || exp[i] == ']'))
		{
			if (S.isempty() || truePair(S.top(), exp[i])==false)
				return false;
			else
				S.pop();
		}
	}
	else if(exp[i]=='*'&&!flag)
        {
            if(i!=length-1&&exp[i+1]=='/')
            {
               S.pop();
               flag=true;
               i++;
            }
            else {
                continue;
            }
        }
	}
	return S.isempty() ? true : false;
}
int main()
{
    /*
     Stack<int>ST;
     ST.push(5);
     ST.push(20);
     ST.push(15);
     ST.push(40);
      ST.push(70);
     cout<<"after adding elements to the  stack :"<<endl;
     ST.display();
    cout <<endl<<"Size of Stack before popping : " <<endl;
    cout << ST.Size();
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
    cout<<"is the stack is empty :"<<ST.isempty()<<endl;
   cout << "##########################"<<endl;
    Stack<int>s(4,5);
    cout<<"using the stack(value , intial_size)constructor:"<<endl;
    s.display();*/
    //################################################################
    string expression;
	cout << "Enter an expression:";
	cin >> expression;
	if (AreBalanced(expression))
		cout << "valid\n";
	else
		cout << "not valid\n";

return 0;

}

