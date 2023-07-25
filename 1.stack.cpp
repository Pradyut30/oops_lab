#include<iostream>
using namespace std;
#define N 5
int stack[N];
int top=-1;
void push()
{
    int n;
    cout<<"enter the value to be inserted:\n";
    cin>>n;
    if(top==N-1)
    {
        cout<<"stack overflow";
    }
    else
    {
        top++;
        stack[top]=n;
        cout<<"element is inserted\n";
    }
    
}
void pop()
{
    if(top==-1)
    {
        cout<<"element cannot be inserted:\n";
    }
    else
    {
        cout<<"the element deleted is \n"<<stack[top];
        top--;
    }
    
}
void display()
{
     if(top==-1)
    {
        cout<<"element cannot be inserted:";
    }
    else
    {
        
        {
            cout<<"the elements it stack are:\n";
            
            for(int i=top;i>-1;i--)
            {
                cout<<stack[i]<<"\n";
            }
        
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        cout<<"1.push\n2.pop\n3.display\n4.exit\n";
        cout<<"enter your choice:\n";
        cin>>choice;
        switch(choice)
        {
            case 1:push();
                    break;
             case 2:pop();
                    break;        
             case 3:display();
                    break; 
             case 4:push();
                    break;   
            default:cout<<"pls enter a valid choice:";
            break;
        }
        
    }
}
