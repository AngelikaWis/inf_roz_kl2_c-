#include<iostream>
using namespace std;

int main()
{
	int tablica[5];
	int licznik=1;
	
	cout<<"Podaj 5 liczb: ";
	
	cin>>tablica[0];
	for(int i =1;i<5;i++)
	{
		cin>>tablica[i];
		if (tablica[1]>tablica[i-1])
		{
			licznik=licznik+1;
		}
	}

	if(licznik==5)
		cout<<"tak";
	else
		cout<<"nie";
	return 0;
	
}
