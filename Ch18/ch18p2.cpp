#include "std_lib_facilities.h"

vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};


void f(vector<int>& v)
{
	vector<int> lv(10);

	lv=v;
	cout << "\n" << "lv:\n";
	for (int i = 0; i < v.size(); ++i)
		cout << lv[i] << endl;

	
	vector<int> lv2;
	cout << "\n";
	lv2 = lv;// lv value-ei átkerülnek lv2-be
	cout <<"lv2:\n";
	for (int i = 0; i < v.size(); ++i)
	{
		cout << lv2[i] << endl;
	}
}



int fac(int n) //faktoriális függvény
{
	return n > 1 ? n*(fac(n - 1)) : 1;
}



int main()
{
	for (int i = 0; i < 10; ++i)
		cout  << endl;


	f(gv);
	cout << "\nvv vector:\n";
	vector<int> vv = {1, fac(2), fac(3), fac(4), fac(5), fac(6), fac(7), fac(8), fac(9), fac(10) };
	f(vv);


	return 0;
}