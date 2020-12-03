#include "std_lib_facilities.h"


// első rész //ga 10 elemű int array
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

// 2es és 3as rész
void f(int a[], int n) //array és a benne lévő számok (a és n)
{
	// 3a
	int la[10];
	// 3b
	for (int i = 0; i < n; ++i)
		la[i] = ga[i];

	// 3c
	for (int i = 0; i < n; ++i)
		cout << la[i] << ", ";
	cout << endl;

	// 3d
	int *p = new int[n];
	// 3e

	for (int i = 0; i < n; ++i)
	{
		p[i] = a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cout << p[i] << endl;
	}
	delete[] p;


}


//faktoriállis fg
int fac(int n)
{
	return n > 1 ? n*(fac(n - 1)) : 1;
}



//4. rész
int main()
{
	// 4a
	f(ga, 10);

	// 4b
	int aa[10] {1, fac(2), fac(3), fac(4), fac(5), fac(6), fac(7), fac(8), fac(9), fac(10) };

	// 4c
	f(aa, 10);
	return 0;
}
