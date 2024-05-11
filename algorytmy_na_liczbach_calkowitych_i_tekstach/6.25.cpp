#include<iostream>
#include <string>

using namespace std;

int main()
{
	int n;

	cout<<"Podaj liczbe: ";
	cin>>n;
	string liczba  = to_string(n);
	
	if(liczba[0]==liczba[liczba.length()-1])
		cout<<"tak"<<endl;
	else
		cout<<"nie"<<endl;
		
	return 0;
		
}
