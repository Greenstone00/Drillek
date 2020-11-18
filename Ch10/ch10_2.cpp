#include "std_lib_facilities.h"


struct Reading {
	double x;
	double y;
};



bool operator==(const Reading& p1, const Reading& p2)
{
	return (p1.x==p2.x && p1.y==p2.y);
}


int main()
try{

	cout << "Define x and y 7 times" << endl;
	vector<Reading> original_points;
	double x;
	double y;
	for (int i = 0; i < 7; ++i)
	{
		
		cin >> x;
		cin >> y;
		original_points.push_back(Reading{x,y});
	}
	cout << endl;
	cout << "original points" << endl; //eredeti imput x és y
	for(const auto& r : original_points)
		cout << r.x << ' ' << r.y << endl;

	cout << "\nrewriting mydata.txt" << endl;
	string output_file = "mydata.txt"; // a txt kiterjesztésű output file neve lesz
	ofstream ost {output_file};

	for (const auto& r : original_points)
		ost << r.x << ' ' << r.y << endl;
	ost.close();
	cout << "Done!\n";
	cout << "\n";


	vector<Reading> processed_points;
	string inputname = "mydata.txt";
	ifstream ist {inputname};
	while (ist >> x >> y)
	{
		processed_points.push_back(Reading{x,y});
	}
	ist.close();

	cout << "processed points" << endl;
	for(const auto& r : processed_points)
		cout << r.x << ' ' << r.y << endl;

	vector<Reading> diff; //csekkoljuk hogy az eredeti és a kiírt mérete egyezik e
	if (original_points.size() != processed_points.size())
	{
		cout << "Something's wrong!" << endl;
	}
	
	if (original_points != processed_points) //itt pedig azt csekkoljuk hogy az eredeti tartalma megegysezik e a kiírtal
	cout << "\nSomething's wrong!\n";
	else cout << "\nSame numbers!\n";


	cout << endl;
	return 0;

}
catch (runtime_error& e)
{
	cerr << "Error: " << e.what() << endl;
	return 1;
}
catch (...)
{
	cerr << "Some error\n";
	return 2;
}