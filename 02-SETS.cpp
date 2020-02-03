#include<iostream>
using namespace std;
void menu()
{
	cout<<"[A] Union"<<endl;
	cout<<"[B] Intersection"<<endl;
	cout<<"[C] Complement"<<endl;
}
//union
void unionFunction(int a[],int b[],int m, int n)
{
	int i,j,flag;
	for(i=0;i<m;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<m;j++)
		{
			if(b[i]==a[j])
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			cout<<b[i]<<" ";
		}
	}
}
//intersection
void intersectionFunction(int a[],int b[], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				cout<<"Intersection: "<<a[i]<<" ";
			}
		}
	}
}
//Complement
void complementFunction(int a[], int b[], int m, int n) 
{ 
  int i = 0, j = 0; 
  while (i<m||j<n) { 
    if(a[i]<b[j])
	{ 
      cout <<a[i]<< " "; 
      i++; 
    } 
	else if(a[i]>b[j]) 
	{ 
      j++; 
    } 
	else if(a[i]==b[j]) 
	{ 
      i++; 
      j++; 
    } 
  }
  while (i<m)  
    cout <<a[i]<<" ";   
}
//main function
int main()
{
	int firstSet[100],secondSet[100];
	int size1,size2,i;
	char choice;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"           SETS";
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	menu();
	cout<<"Choose operation you want to perform: ";
	cin>>choice;
	cout<<"Size of the first element: ";
	cin>>size1;
	for(i=0;i<size1;i++)
	{
		cin>>firstSet[i];
	}
	cout<<"Size of the second element: ";
	cin>>size2;
	for(i=0;i<size2;i++)
	{
		cin>>secondSet[i];
	}

	switch(choice)
	{
		case 'A':
		case 'a':
			unionFunction(firstSet,secondSet,size1,size2);
			break;
		case 'B':
		case 'b':
			intersectionFunction(firstSet, secondSet,size1, size2);
			break;
		case 'C':
		case 'c':
			complementFunction(firstSet, secondSet,size1,size2);
			break;
	}
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"@ JAIRO PONCE BSCpE 1B 2019-2020 @"
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	return 0;
}
