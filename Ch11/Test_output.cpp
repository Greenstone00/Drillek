#include "std_lib_facilities.h"

void int_output()
{
    cout << showbase << "Birth year:" << endl
        << 2000 << "\t(decimal)" << endl
        << hex << 2000 << "\t(hexadecimal)" << endl
        << oct << 2000 << "\t(octal)" << endl;

    cout << dec << endl << "Age:" << endl
        << 20 << "\t(decimal)" << endl
        << hex << 20 << "\t(hexadecimal)" << endl
        << oct << 20 << "\t(octal)" << endl;
}

void int_input()
{
    int a;
    int b;
    int c;
    int d;
    cin >> a >> hex >> b >> oct >> c >> d;
    cout << a << '\t' << b << '\t' << c << '\t' << d << endl;
}

void float_output()
{
    cout << 1234567.89 << "\t(general)\n"
        << fixed << 1234567.89 << "\t(fixed)\n"
        << scientific << 1234567.89 << "\t(scientific)\n";
}

int main()
{
    cout << setw(12) << "Szurovcsák" << " | " << setw(9) << "Gergő" << " | " << setw(16) << "06306966587" << " | " << setw(24) << "greenstone.sg@gmail.com" << endl;

    cout << setw(11) << "Makkai" << " | " << setw(8) << "Csaba" << " | " << setw(16) << "06302962261" << " | " << setw(26) << "makkai.csaba@freemail.com" << endl;
        
    cout << setw(10) << "Lentvorszki" << " | " << setw(8) << "Noel" << " | " << setw(16) << "06703059202" << " | " << setw(29) << "noellentvorszki@freemail.com" << endl;
}