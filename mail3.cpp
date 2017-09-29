#include<iostream>
#include"conio.h"
#include"stdio.h"
#include"string.h"
using namespace std;
struct node
{
   string data;
    node *next;
    node *prev;
};
node *start=NULL , *temp1,*temp2,*temp3;
class Mail
{
public:
void compose( );
void display( );
};
void Mail::compose()
{
char r;
temp1=new node;
cout<<"\n\nenter the Mail containt\n\n\n";
cin>>temp1->data;
	if(start==NULL)
        {
            start=temp1;
            temp1->next=NULL;
            temp1->prev=NULL;
        }
   	  else
        {
            temp2=start;
            temp1->next=temp2;
            temp1->prev=NULL;
            start=temp1;
            temp2->prev=temp1;
        }
}

void Mail:: display()        //displaying
{

    temp3=start;
    if(start==NULL)
        cout<<"\nno Mail to display\n"<<endl;
    else
    {
      while(temp3->next!=NULL)
      {
          cout<<temp3->data;
         temp3=temp3->next;
      }

    }
}

int main()
{
int ch;
Mail m;
std::cout << "*** Welecome to mailbox ***" << '\n';
while (ch!=0)
{
cout<<"\n\n1.for compose the mail\n2.for display the mails\n0.for exit\n\n";
cout<<"    \n\n";
cin>>ch;
switch(ch)
{
case 1:
{
m.compose();
break;
}
case 2:
{
m.display();
break;
}
}
}
getch();
}
