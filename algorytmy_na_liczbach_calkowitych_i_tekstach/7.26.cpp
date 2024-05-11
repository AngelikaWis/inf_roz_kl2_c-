#include<iostream>
using namespace std;

int main()
{
	int tablica[5];
	int max = 0;
	
	cout<<"Podaj 5 liczb: ";
	for (int i = 0; i < 5; i++)
	{
		cin>>tablica[i];
		if(tablica[i]>max)
			max=tablica[i];
	}
	
	cout<<"Najwieksza liczba to: "<<max;
	return 0;
}
