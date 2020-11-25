#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << i+1 << ". elem: " << *a << "	memory: " << a << endl;
		a++;
	}
}





int main()
{
	//1es
	int n = 7;
	int* p1 = &n;
	


	//2es
	cout << "n: " << n << endl;
	cout << "*p1: " << *p1 << endl;
	cout << "&n: " << &n << endl;
	cout << "p1: " << p1 << endl;
	
	//3as
	int nums7[7] = { 1, 2, 4, 8, 16, 32, 64 };
	int* p2 = nums7;
	
	//4es
	print_array(cout, p2, 7);

	//5ös
	int* p3 = p2;

	//6os
	p2 = p1;
	
	//7es
	p2 = p3;
	
	//8a
	cout << "(p1) " << *p1 << "	memory: " << p1 << endl;
	cout << "p2-->" << endl;
	print_array(cout, p2, 7);

	//10es
	int nums10_1[10] = { 1,2,4,8,16,32,64,128,256,512 };
	p1 = nums10_1;
	
	//11es
	int nums10_2[10] = { 0,0,0,0,0,0,69,0,0,0 };
	p2 = nums10_2;

	//12es
	for (int i = 0; i < 10; ++i)
	{
		p2[i] = p1[i];
	}
	//print_array(cout, p2, 10);

	//13es
	vector<int> vector_nums10_1 { 1,2,4,8,16,32,64,128,256,512 };
	p1 = &vector_nums10_1[0];
	vector<int> vector_nums10_2 { 0,0,0,0,0,0,69,0,0,0 };
	p2 = &vector_nums10_2[0];
	for (int i = 0; i < 10; ++i)
	{
		p2[i] = p1[i];
	}
	

	return 0;
}