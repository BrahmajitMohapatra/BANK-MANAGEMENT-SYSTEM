#include<iostream>
#include<conio.h>
using namespace std;

class bank{
	char name[50];
	int accno;
	char acType[20];
	float balance;
	public:
		
		bank()
		{
			accno = 0000;
			balance = 0.0;
		}
		
		void input();
	    void deposit();
	    void withdraw();
	    void display();
};

void bank::input()
{
	cout<<"\n \01 Hey User, Enter All Required Information To Proceed Further";
	cout<<"\n\n Enter Your Name : ";
	cin>>name;
	cout<<"\n Enter Account Number : ";
	cin>>accno;
	cout<<"\n Enter Account Type : ";
	cin>>acType;
	cout<<"\n Enter Amount to Deposit : Rs ";
	cin>>balance;
	cout<<"\n\n		\04\04\04\n";
}

void bank::deposit()
{
	float a;

	cout<<"\n Enter Amount to Deposit : Rs ";
	cin>>a;
	balance+=a;
	cout<<"\n\n Current Balance : Rs "<<balance;  
	cout<<"\n\n		\04\04\04\n";
}

void bank::withdraw()
{
	float amount;

	cout<<"\n Enter amount to Withdraw : Rs ";
	cin>>amount;
	balance-=amount;
	cout<<"\n\n Current Balance : Rs "<<balance;  
	cout<<"\n\n		\04\04\04\n";
	
}

void bank::display()
{
	//cout<<"\n Account Details : ";
	cout<<"\n Name of Depositor : "<<name<<endl;
	cout<<"\n Account Number : "<<accno<<endl;
	cout<<"\n Account Type : "<<acType<<endl;
	cout<<"\n Balance : Rs "<<balance<<endl;
}

int main()
{
	cout<<"\n			\03 \03  BANK MANAGEMENT SYSTEM  \03 \03 \n";
	cout<<"			     **********************\n\n";
	bank bd;

	int choice = 1;
	while(choice!=0)
	{
		cout<<"\n\n\n\04 MAIN MENU \n\n 0) Exit\n 1) Creat New Account \n 2) Deposit \n 3) Withdraw \n 4) Account Status \n\n  :";
		cin>> choice;
		cout<<"\n\n		\04\04\04\n";
		
		switch(choice)
		{
			case 0: bd.display();
			cout<<"\n\n \03 Thanks for using bank management system \03\n\n";
			cout<<"		\06 Brahmajit Mohapatra	\n		\06 K18ZV \n		\06 11801682  \n\n ";
			break;
			case 1: bd.input();
			break;
			case 2: bd.deposit();
			break;
			case 3: bd.withdraw();
			break;
			case 4: bd.display();
			break;
			default: cout<<"Invalid option!"<<endl;
			
		}
	}
	
}
