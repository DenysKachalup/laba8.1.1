//#define// _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int Perevirka(char* a, size_t size)
{
	int k = 0;
	int pos = 0;
	char* t;
	while (t = strchr(a + pos, ','))
	{
		pos = (t - a + 1);
		if (a[pos + 1] == '-')
			k++;
	}
	return k;
}
int Perevirka1(const string a,size_t size)
{
	int k = 0;
	size_t pos = 0;

	while ((pos = a.find(',', pos)) != -1)
	{
		pos++;
		if (a[pos + 1] == '-')
			k++;

	}

	return k;
}
int main()
{
	const size_t size = 101;
	char a[size];
	
	cout << "Vvedit shos: ";
	cin.getline(a, 100);
	
	cout<<Perevirka(a,size)<<endl;
	cout << Perevirka1(a,size) << endl;
}