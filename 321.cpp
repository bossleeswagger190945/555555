#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void displaymenu();
float area(const float radius);
float area(const float length,const float widht);
float area(double base,double high);
int main()
{
	char choice;
	bool flag = true;
	do{
		displaymenu();
		cin>>choice;
		if (choice =='1'){
			float radius;
			cout<<"\nEnter radius : ";
			cin>>radius;
			cout<<"area of circle :"<<fixed;
			cout<<setprecision(2)<<area(radius)<<endl;
		}
		else if (choice =='2'){
			double base,high;
			cout<<"enter base and high :";
			cin>>base>>high;
			cout<<"area of rectangle :"<<fixed;
			cout<<setprecision(2)<<area(base,high);
			cout<<endl;
		}
		else if (choice =='3'){
			float length,widht;
			cout<<"enter length and widht :";
			cin>>length>>widht;
			cout<<"area of triangle :"<<fixed;
			cout<<setprecision(2)<<area(length,widht);
			cout<<endl;
		}
		else if (choice =='4') bool flag = false;
		else {
			cout<<"\nYou choose out of range is";
			cout<<"not process.";
		}
	} while (flag);
	cout<<"\n...exit program...\n";
	return 0;
}
float area(const float radius)
{
	return(3.14159F * radius * radius);
}
float area(double base,double high)
{
	return(base * high);
}
float area(const float length,const float widht)
{
	return(0.5 * length * widht);
}
void displaymenu()
{
	cout<<endl;
	cout<<"program calculate area"<<endl;
	cout<<"1.circle"<<endl;
	cout<<"2.rectangle"<<endl;
	cout<<"3.triangle"<<endl;
	cout<<"4.exit"<<endl;
	cout<<"enter your menu : ";
}
