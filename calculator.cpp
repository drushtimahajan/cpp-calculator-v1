#include <iostream>
using namespace std;
int main()
{
	int choice;
	float a,b;

	cout<<"\n1. ADD \n2. SUB \n3. MUL \n4. DIV"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>choice;

	cout<<"Enter a=";
	cin>>a;

	cout<<"Enter b=";
	cin>>b;

	switch(choice)
	{
		case 1: cout<<"Addition="<<a+b<<endl;
		break;
		case 2: cout<<"Subtraction="<<a-b<<endl;
		break;
		case 3: cout<<"Multiplication="<<a*b<<endl;
		break;
		case 4:
		    if(b==0)
                cout<<"Error: Division by zero"<<endl;
            else
            cout<<"Division="<<a/b<<endl;
		break;
		default:  cout<<"Invalid choice"<<endl;
	}
		return 0;
}
