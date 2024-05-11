#include<iostream>
#include<string>

using namespace std;

int main()
{
	int wiek;
	string imie;
	cout<<"Podaj imie: ";cin>>imie;
	cout<<"Podaj wiek: ";cin>>wiek;
	
	if(wiek>=18)
		cout<<"Dzien dobry "<<imie;
	else
		cout<<"Czesc "<<imie;
		
	return 0;
}
