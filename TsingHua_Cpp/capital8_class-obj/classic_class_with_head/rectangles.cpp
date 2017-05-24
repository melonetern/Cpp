#include"rectangles.h"
void Rec::set_value()
{	
	cout << "input value:";
	cin >> length>>width>>height;
	cout<<endl;
}

void Rec::volumn()
{
	float v;
	v =length*width*height;
	cout<< "volumn:"<<v<<endl;
}

