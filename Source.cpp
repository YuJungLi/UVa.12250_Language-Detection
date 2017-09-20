#include <iostream>
#include <string.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	char table[6][15] = { "HELLO", "HOLA", "HALLO", "BONJOUR", "CIAO", "ZDRAVSTVUJTE" };
	char table2[6][8] = { "ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN" };
	char a[15];
	int cnt = 1;
	while (cin >> a)
	{
		if (a[0] == '#')
			break;
		bool flag = 0;
		for (int i = 0; i < 6; i++)
		{
			if (!strcmp(a, table[i]))
			{
				cout << "Case " << cnt++ << ": " << table2[i] << endl;
				flag = 1;
			}
		}
		if (!flag)
			cout << "Case " << cnt++ << ": " << "UNKNOWN" << endl;
	}
	return 0;
}