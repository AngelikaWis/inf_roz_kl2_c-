#include<iostream>
#include<string>

using namespace std;

int main()
{
	string slowo;
	char litera;
	int i, ile=0;
	cout<<"Podaj slowo: ";cin>>slowo;
	cout<<"Podaj litere: ";cin>>litera;
	for(i=0;i<slowo.size();i++)
		if (slowo[i]==litera)ile++;
		cout<<"Litera "<<litera<<" wystepuje ";
		cout<<"w slowie "<<slowo<<" "<<ile<<" razy.";
		return 0;
}
