#include "std_lib_facilities.h"

int main()
{
	
	cout << "Please enter the name of the person you want to writ to:\n";
	
	string first_name;
	

	cin >> first_name;

	cout << "Dear " << first_name << ",\n";
	cout << "I am fine. Started to learn programing.\n";

	cout << "Please enter a friend's name: \n";

	string friend_name;
	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";

	cout << "Is " << friend_name << " a male or a female ? (enter m/f)\n";

	char friend_sex = 0;
	cin >> friend_sex;

	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	else if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}
	else
	{
		simple_error("You might hit the wrong key\n");
	}



	
	cout << "Please enter " << friend_name << "'s age:\n";
	
	int age = 0;
	cin >> age;

	
	
	
	if  (age < 0 || age > 110)
		{
			simple_error("you are kidding!\n");
		}

	else if (age <= 12)
		{
			cout << "Next year you will be " << age+1 <<".\n";
		}

	else if (age = 17)
		{
			cout << "Next year you will be able to vote.\n";
		}

	else if (age > 70)
		{
			cout << "I hope you are enjoying retirement.\n";
		}

	



	cout << "Yours sincerely,\n\n\n Gergő\n";


	return 0;
}