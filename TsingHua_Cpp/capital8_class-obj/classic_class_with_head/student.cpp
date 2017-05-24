#include<iostream>
#include"student.h"
void Student::display()
{cout<<"num:"<<num<<endl;
 cout<<"name:"<<name<<endl;
 cout<<"gender:"<<gender<<endl;
}

void Student::set_value()
{
	cout<<"num:";cin>>num;cout<<endl;
	cout<<"name:";cin>>name;cout<<endl;
	cout<<"gender:";cin>>gender;cout<<endl;
}
