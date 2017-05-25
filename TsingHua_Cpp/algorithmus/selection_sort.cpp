#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
	int a[10]={9,5,7,4,3,8,2,1,0,6};
	int i,j,t;
	cout<<"before sorted:"<<endl;
	for(i=0;i<10;i++)
		cout<<setw(4)<<a[i];
		
	for(i=0;i<10;i++)
		for(j=i+1;j<10;j++)
			if(a[i]>a[j])
				{
					t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
	
		cout<<endl<<"after sorted:"<<endl;
	for(i=0;i<10;i++)
		cout<<setw(4)<<a[i];	
	return 0;
} 
