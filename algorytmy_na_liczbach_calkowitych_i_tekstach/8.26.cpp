#include<iostream>

using namespace std;

int main()
{
	int n,liczba,min=9;
	cout<<"Podaj liczbe: ";
	cin>>n;
	while(n>0)
	{
		liczba=n%10;
		if(liczba<min)
			min=liczba;
		n=n/10;
	}
	cout<<"najmniejsza cyfra tej liczby to: "<<min;
}
