#include "std_lib_facilities.h"
int main()
{

    
    /* tasks 1 to 5

    double a=0, b=0;

    vector<double> numbers;

    while (cin >> a >> b)

    {
        if(a < b)
            cout << "the smaller value is "<< a << "\nthe larger value is " << b << endl;       
            numbers.push_back(a);
        if(b < a)
            cout << "the smaller value is "<< b << "\nthe larger value is " << a << endl;
            numbers.push_back(b);
        if(a == b)
            cout << "the numbers equal\n";
        if (abs(a - b) <= 0.01)
            cout << "the numbers are almost equal\n";
    */

    double a=0;
    string units;
    string meter=" m";
    vector <double> numbers;
    vector <string> meretek;
    double sum=0;
    vector <double> valid_numbers;
    vector <string> valid_unit; //cm, m, in, ft
    string out;

    



    while(out !="|")
    {
        cout << "Hit | to exit the loop " << endl; 
        cin >> out;
        if(out == "|")
        {
            break;
        }
    

        cout << "Type in a number." << endl;
        cin >> a;
        numbers.push_back(a); 


        cout << "Please enter an unit for the given number. (ft, cm, m ,in):    ";
        cin >> units;

        if(units=="cm")
        {
            a=a/100;
            valid_numbers.push_back(a);
            valid_unit.push_back(meter);
        }
        if(units == "m")
        {
            a=a;
            valid_numbers.push_back(a);
            valid_unit.push_back(meter);
        }
        if(units == "ft")
        {
            a=((a*12)*2.54)/100;
            valid_numbers.push_back(a);
            valid_unit.push_back(meter);
        }
        if(units == "in")
        {
            a=a*0.0254;
            valid_numbers.push_back(a);
            valid_unit.push_back(meter);
        }
        
    }//while vége, legkissebb és legnagyobb vektor
    
    if(valid_numbers.size()>1)
    {
        cout << endl << "The smallest so far: " << *min_element(valid_numbers.begin(), valid_numbers.end()) << " m" << endl;  
        cout << endl << "The lagest so far: " << *max_element(valid_numbers.begin(), valid_numbers.end()) <<  " m" << endl << endl; 
    }

        sort(valid_numbers);
    if(valid_numbers.size()>1)
    {
        cout << endl  << "the sorted given numbers:" << endl << endl ;
        for (int i = 0; i < valid_numbers.size(); ++i)
        {
            cout << valid_numbers[i] << " " << valid_unit[i] <<endl << endl;
        }
    }

    
    if(valid_numbers.size()>1)
    {
        cout << endl  << "The sum of the numbers in meter is: ";
        for (int i = 0; i < valid_numbers.size(); ++i)
        {
            sum=sum+valid_numbers[i];

        }
        cout << sum << endl;
    }
    
    return 0;
}