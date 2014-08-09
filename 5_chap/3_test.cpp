//float type do not have unsinged or signed!!

#include <iostream>
 
using namespace std;

int main()
{
	 float cap1,cap2;
	 float sum1=0.0,sum2=0.0;
	 float pro1=0.0,pro2=0.0;

	cout<<"please enter you capatial "<<endl;
	cout<<"cap1:"<<endl;
	cin>>cap1;
	cout<<"cap2:"<<endl;
	cin>>cap2;
	cout<<"capital1 :"<<cap1<<" captial2 :"<<cap2<<endl;

	int i = 0;
		
	do{
		i++;

		pro1+=cap1*0.005;

		pro2+=cap2*0.0025;
		cap2+=cap2*0.0025;

		cout<<"pro1:\t"<<pro1<<"\tpro2:"<<pro2<<endl;
	}while(pro1>= pro2);
	
	cout<<"the year is i "<<i<<" and the profit is "<<pro1<<" and "<<pro2<<endl;
	
	return 0;
}
