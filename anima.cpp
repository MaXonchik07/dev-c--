#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	for (int i = 1; i<101; ++i)
	{
		cout << "Downloading " << "\\\r" << i;
		Sleep(10);
		cout << "Downloading " << "|\r" << i;
		Sleep(10);
		cout << "Downloading " << "/\r" << i;
		Sleep(10);
		cout << "Downloading " << "-\r" << i;
		Sleep(10);
	}
	}
