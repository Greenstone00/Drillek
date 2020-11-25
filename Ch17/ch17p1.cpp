#include "std_lib_facilities.h"



void printArray10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << "Int " << i << ": " << a[i] << endl;
}


void printArray(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << "Int " << i << ": " << a[i] << endl;
}


int* allocateArray(int n)
{
	int* a = new int[n];
	int s_szam = 100;
	for (int i = 0; i < n; ++i)
		a[i] = s_szam++;

	return a;
}


vector<int*> allocateVector(int n)
{
	vector<int*> vec;
	int s_szam = 100;
	for (int i = 0; i < n; ++i)
		vec.push_back(new int{s_szam++});
	
	return vec;
}


void printVector(vector<int*> v)
{
	for (int i = 0; i < v.size(); ++i)
		cout << "Int " << i << ": " << *v[i] << endl;
}


void deleteVector(vector<int*> v)
{
	for (int i = 0; i < v.size(); ++i)
		delete v[i];
}


int main()
{
	//1es
	int* tizint = new int[10];
	
	//2es
	for (int i = 0; i < 10; ++i)
		cout << "Int " << i << ": " << tizint[i] << endl;

	//3as
	//delete[] tizint; //4esben megtörténik

	//4es
	cout << "---------------------------------" << endl;
	printArray10(cout, tizint);
	delete[] tizint;

	//5ös
	int* tizint2 = new int[10]{ 100, 101, 102, 103, 104, 105, 106, 107, 108, 109 };
	cout << "---------------------------------" << endl;
	printArray10(cout, tizint2);
	delete[] tizint2;

	//6os és 7es
	int* intArray = new int[11]{ 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110 };
	cout << "---------------------------------" << endl;
	printArray(cout, intArray, 11);
	delete[] intArray;

	//8as
	int* huszint = allocateArray(20);
	cout << "---------------------------------" << endl;
	printArray(cout, huszint, 20);
	delete[] huszint;

	//10 es az 6, 6 és 8 vektorral
	vector<int*> v_tizint = allocateVector(10);
	cout << "---------------------------------" << endl;
	printVector(v_tizint);
	deleteVector(v_tizint);

	vector<int*> v_tizenegyInts = allocateVector(11);
	cout << "---------------------------------" << endl;
	printVector(v_tizenegyInts);
	deleteVector(v_tizenegyInts);

	vector<int*> v_huszints = allocateVector(20);
	cout << "---------------------------------" << endl;
	printVector(v_huszints);
	deleteVector(v_huszints);
	return 0;
}