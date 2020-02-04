#include <iostream>
#include <string>
using namespace std;
int main()
{
	string P;
	string p;
	int choice;
	int terno;
	
	main:
		{
		
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout<<"@          PROOFS       @"<<endl<<"@@@@@@@@@@@@@@@@@@@@@@@@@\n"<<endl;
		cout<<"Give a name for the object 1\n";
		getline(cin,P);
		cout<<"Give a name for the object 2\n";
		getline(cin,p);
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout<<"@ TYPE THE NUMBER OF YOUR CHOICE @";
		cout<<"\n@ 1. CONTINGENCY		 @\n@ 2. TAUTOLOGY			 @\n@ 3. CONTRADICTION		 @\n";
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cin>>choice;
		if(choice==1)
		{
			system("cls");
			cout<<P<<" is "<<p<<"\n\n@@@@@@@@@@@@@@@@@@@@@@@@@\n"<<"\n\n\nTHAT CAN BE TRUE AND CAN BE FALSE";
			cout<<"\n\nTYPE 0 TO TERMINATE THE PROGRAM\n";
			cin>>terno;
			if(terno==0)
			{
				goto exit;
			}
		}
		if(choice==2)
		{
			system("cls");
			cout<<P<<" is "<<p<<" or "<<P<<" is not "<<p<<"\n\n@@@@@@@@@@@@@@@@@@@@@@@@@\n"<<"\n\n\nIT IS TRUE";
			cout<<"\n\nTYPE 0 TO TERMINATE THE PROGRAM\n";
			cin>>terno;
			if(terno==0)
			{
				goto exit;
			}
		}
		if(choice==3)
		{
			system("cls");
			cout<<P<<" is "<<p<<" and "<<P<<" is not "<<p<<"\n\n@@@@@@@@@@@@@@@@@@@@@@@@@\n"<<"\n\n\nIT IS FALSE";
			cout<<"\n\nTYPE 0 TO TERMINATE THE PROGRAM\n";
			cin>>terno;
			if(terno==0)
			{
				goto exit;
			}
		}
		if(choice!=1&&choice!=2&&choice!=3)
		{
			system("cls");
			cout<<"TYPE A VALID CHOICE\n";
			system("pause");
			system("cls");
		goto main;	
		}
	}
	exit:
	{
			system("cls");
					cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
					cout<<"@ JAIRO PONCE BSCpE-1B 2019-2020 @\n";
					cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	}
	}
