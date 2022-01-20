#include<iostream>
using namespace std;
class contact
{
    private:
	double num;
	string name;
	contact *next;
	int size;
	contact *head,*tail,*temp,*current,*c;
	
	public:
	contact()
	{
	head=NULL;
	tail=NULL;
	temp=NULL;
	current=NULL;
	c=NULL;
	size=0;
	}
	
	void insert();
	void showcont();
	void shownum();
};

void contact:: insert() // insert fun
{
  double num;
  string name;
  cout<<"ADD NUMBER "<<endl;
  cin>>num;
  cout<<"ADD NAME "<<endl;
  cin>>name;
  
  temp=new contact;
  temp->next=NULL;
  temp->num=num;
  temp->name=name;
  size++;
  if (head==NULL)
 {
	head=temp;
	tail=temp;
	current=temp;
 }	
 else
 {
  tail->next=temp;
  tail=tail->next;
  current=current->next;	
 }	
}

void contact:: showcont() // show fun
{
if(head==NULL)
 {
	cout<<"List is Empty \n\n"; 
 } 
  current=head;
  while(current!=NULL)
 {
  cout<<"NAME "<<current->name<<" "<<"NUMBER "<<current->num<<endl<<endl;
  current=current->next;	
 }	
}

void contact:: shownum() // show fun
{
if(head==NULL)
 {
	cout<<"List is Empty \n\n"; 
 } 
  current=head;
  while(current!=NULL)
 {
  cout<<"NUMBER "<<current->num<<endl<<endl;
  current=current->next;	
 }	
}

main()
{
  cout<<"************************************"<<endl;
  cout<<"\t CONTACT BOOK \t"<<endl;
  cout<<"************************************"<<endl;
  contact obj;	
  int choice;
  while(true)
 {
	cout<<" PRESS 1 TO ADD CONTACT "<<endl;
	cout<<" PRESS 2 TO DISPLAY ALL CONTACT "<<endl;
	cout<<" PRESS 3 TO DISPLAY NUMBERS OF CONTACT "<<endl;
	cout<<" PRESS 4 T0 EXIT"<<endl;
	
	cin>>choice;
	switch(choice)
	{
	case 1:
	obj.insert();
	break;
	
	case 2:
	obj.showcont();
	break;
	
	case 3:
	obj.shownum();
	break;
		
    case 4:
	system("cls");
	break;

	default: 
	cout<<"invalid \n\n";						
	}
 }

}
