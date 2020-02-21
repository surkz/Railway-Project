#include<iostream>
#include <cctype>
#include <algorithm>
#include <string>
#include <chrono>
#include <ctime>
using namespace std;
int main()
{
	string city[3] = { "KARACHI", "LAHORE", "ISLAMABAD" };
	string class_name[3] = { "FIRST CLASS", "LOWER CLASS","ECONOMY CLASS" };
	string name;
	string num;

	int to;
	int from;
	int seat = 50;
	int class_no;
	int class_price_kar_to_lhr[3] = { 6650, 3600, 1750 };
	int class_price_kar_to_isl[3] = { 7150, 4050, 1550 };
	int class_price_lhr_to_kar[3] = { 6150, 3450, 1400 };
	int class_price_lhr_to_isl[3] = { 1200, 800, 500 };
	int class_price_isl_to_kar[3] = { 6190, 3700, 1410 };
	int class_price_isl_to_lhr[3] = { 1200, 800, 500 };

	auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());
	cout << ctime(&timenow) << endl;
	cout << "#################### WELCOME TO RAILWAY BOOKING ####################" << endl;
	cout << "ENTER YOUR CITY" << endl;
	cout << " 1. Karachi\n 2. Lahore\n 3. Islamabad" << endl;
	cout << "NUMBER: ", cin >> to;
	/*cout << "enter where you want to go" << endl;
	cout << " 1. karachi\n 2. lahore\n 3. islamabad" << endl;
	cout << "number: ", cin >> from;*/

	// karachi condition
	if (to == 1)
	{
		cout << "YOU SELECTED " << city[1] << endl << endl;
		cout << "ENTER WHERE YOU WANT TO GO" << endl;
		cout << " 1. Lahore\n 2. Islamabad" << endl;
		cout << "NUMBER: ", cin >> from;

		// lahore
		if (from == 1)
		{
			cout << "YOU SELECTED " << city[1] << endl << endl;
			cout << "SELECT YOUR CLASS" << endl;
			cout << " 1. First Class Price: PKR." << class_price_kar_to_lhr[0] <<
				"\n 2. Lower Class Price: PKR." << class_price_kar_to_lhr[1] <<
				"\n 3. Economy Class Price: PKR." << class_price_kar_to_lhr[2] << endl;
			cout << "NUMBER: ", cin >> class_no;

			//class1
			if (class_no == 1)
			{
				cout << "YOU SELECTED " << class_name[0] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[1] << "		"
					<< city[0] << "		"
					<< class_name[0] << "		Rs. "
					<< class_price_kar_to_lhr[0] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class2
			else if (class_no == 2)
			{
				cout << "YOU SELECTED " << class_name[1] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[1] << "		"
					<< city[0] << "		"
					<< class_name[1] << "		Rs. "
					<< class_price_kar_to_lhr[1] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class3
			else if (class_no == 3)
			{
				cout << "YOU SELECTED " << class_name[2] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[1] << "		"
					<< city[0] << "		"
					<< class_name[2] << "		Rs. "
					<< class_price_kar_to_lhr[2] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}

		}

		// islamabad
		else if (from == 2)
		{
			cout << "YOU SELECTED " << city[1] << endl << endl;
			cout << "SELECT YOUR CLASS" << endl;
			cout << " 1. First Class Price: PKR." << class_price_kar_to_isl[0] <<
				"\n 2. Lower Class Price: PKR." << class_price_kar_to_isl[1] <<
				"\n 3. Economy Class Price: PKR." << class_price_kar_to_isl[2] << endl;
			cout << "NUMBER: ", cin >> class_no;

			//class1
			if (class_no == 1)
			{
				cout << "YOU SELECTED " << class_name[0] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[2] << "		"
					<< city[0] << "		"
					<< class_name[0] << "		Rs. "
					<< class_price_kar_to_isl[0] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class2
			else if (class_no == 2)
			{
				cout << "YOU SELECTED " << class_name[1] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[2] << "		"
					<< city[0] << "		"
					<< class_name[1] << "		Rs. "
					<< class_price_kar_to_isl[1] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class3
			else if (class_no == 3)
			{
				cout << "YOU SELECTED " << class_name[2] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[2] << "		"
					<< city[0] << "		"
					<< class_name[2] << "		Rs. "
					<< class_price_kar_to_isl[2] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
		}
	}

	// lahore condition
	else if (to == 2)
	{
		cout << "YOU SELECTED " << city[1] << endl;
		cout << "ENTER WHERE YOU WANT TO GO" << endl;
		cout << " 1. Karachi\n 2. Islamabad" << endl;
		cout << "NUMBER: ", cin >> from;
		// karachi
		if (from == 1)
		{
			cout << "YOU SELECTED " << city[0] << endl << endl;
			cout << "SELECT YOUR CLASS" << endl;
			cout << " 1. First Class Price: PKR." << class_price_lhr_to_kar[0] <<
				"\n 2. Lower Class Price: PKR." << class_price_lhr_to_kar[1] <<
				"\n 3. Economy Class Price: PKR." << class_price_lhr_to_kar[2] << endl;
			cout << "NUMBER: ", cin >> class_no;

			//class1
			if (class_no == 1)
			{
				cout << "YOU SELECTED " << class_name[0] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[0] << "		"
					<< city[1] << "		"
					<< class_name[0] << "		Rs. "
					<< class_price_lhr_to_kar[0] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class2
			else if (class_no == 2)
			{
				cout << "YOU SELECTED " << class_name[1] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[1] << "		"
					<< city[0] << "		"
					<< class_name[1] << "		Rs. "
					<< class_price_lhr_to_kar[1] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class3
			else if (class_no == 3)
			{
				cout << "YOU SELECTED " << class_name[2] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[0] << "		"
					<< city[1] << "		"
					<< class_name[2] << "		Rs. "
					<< class_price_lhr_to_kar[2] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}

		}

		// islamabad
		else if (from == 2)
		{
			cout << "YOU SELECTED " << city[2] << endl << endl;
			cout << "SELECT YOUR CLASS" << endl;
			cout << " 1. First Class Price: PKR." << class_price_lhr_to_isl[0] <<
				"\n 2. Lower Class Price: PKR." << class_price_lhr_to_isl[1] <<
				"\n 3. Economy Class Price: PKR." << class_price_lhr_to_isl[2] << endl;
			cout << "NUMBER: ", cin >> class_no;

			//class1
			if (class_no == 1)
			{
				cout << "YOU SELECTED " << class_name[0] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[2] << "		"
					<< city[1] << "		"
					<< class_name[0] << "		Rs. "
					<< class_price_lhr_to_isl[0] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class2
			else if (class_no == 2)
			{
				cout << "YOU SELECTED " << class_name[1] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[2] << "		"
					<< city[1] << "		"
					<< class_name[1] << "		Rs. "
					<< class_price_lhr_to_isl[1] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class3
			else if (class_no == 3)
			{
				cout << "YOU SELECTED " << class_name[2] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[2] << "		"
					<< city[1] << "		"
					<< class_name[2] << "		Rs. "
					<< class_price_lhr_to_isl[2] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
		}
	}

	// islamabad condition
	else if (to == 3)
	{
		cout << "YOU SELECTED " << city[2] << endl;
		cout << "ENTER WHERE YOU WANT TO GO" << endl;
		cout << " 1. Karachi\n 2. Lahore" << endl;
		cout << "NUMBER: ", cin >> from;

		// karachi
		if (from == 1)
		{
			cout << "YOU SELECTED " << city[0] << endl << endl;
			cout << "SELECT YOUR CLASS" << endl;
			cout << " 1. First Class Price: PKR." << class_price_isl_to_kar[0] <<
				"\n 2. Lower Class Price: PKR." << class_price_isl_to_kar[1] <<
				"\n 3. Economy Class Price: PKR." << class_price_isl_to_kar[2] << endl;
			cout << "NUMBER: ", cin >> class_no;

			//class1
			if (class_no == 1)
			{
				cout << "YOU SELECTED " << class_name[0] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[0] << "		"
					<< city[2] << "		"
					<< class_name[0] << "		Rs. "
					<< class_price_isl_to_kar[0] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class2
			else if (class_no == 2)
			{
				cout << "YOU SELECTED " << class_name[1] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[0] << "		"
					<< city[2] << "		"
					<< class_name[1] << "		Rs. "
					<< class_price_isl_to_kar[1] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class3
			else if (class_no == 3)
			{
				cout << "YOU SELECTED " << class_name[2] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[0] << "		"
					<< city[2] << "		"
					<< class_name[2] << "		Rs. "
					<< class_price_isl_to_kar[2] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}

		}

		// lahore
		else if (from == 2)
		{
			cout << "YOU SELECTED " << city[2] << endl << endl;
			cout << "SELECT YOUR CLASS" << endl;
			cout << " 1. First Class Price: PKR." << class_price_isl_to_lhr[0] <<
				"\n 2. Lower Class Price: PKR." << class_price_isl_to_lhr[1] <<
				"\n 3. Economy Class Price: PKR." << class_price_isl_to_lhr[2] << endl;
			cout << "NUMBER: ", cin >> class_no;

			//class1
			if (class_no == 1)
			{
				cout << "YOU SELECTED " << class_name[0] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[1] << "		"
					<< city[2] << "		"
					<< class_name[0] << "		Rs. "
					<< class_price_isl_to_lhr[0] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class2
			else if (class_no == 2)
			{
				cout << "YOU SELECTED " << class_name[1] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[1] << "		"
					<< city[2] << "		"
					<< class_name[1] << "		Rs. "
					<< class_price_isl_to_lhr[1] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
			//class3
			else if (class_no == 3)
			{
				cout << "YOU SELECTED " << class_name[2] << endl << endl;
				cout << "Please Enter your Name\n", cin >> name;
				transform(name.begin(), name.end(), name.begin(), ::toupper);
				cout << "Please Enter your NUmber\n", cin >> num;
				cout << endl << endl << endl << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl <<
					"NAME		NUMBER			TO		FROM		CLASS			AMOUNT" <<
					endl << endl;
				cout << name << "		"
					<< num << "		"
					<< city[1] << "		"
					<< city[2] << "		"
					<< class_name[2] << "		Rs. "
					<< class_price_isl_to_lhr[2] << endl <<
					"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<
					endl << endl << endl << endl;
				cout << "						" << ctime(&timenow) << endl;
			}
		}
		else
		{
			cout << "WRONG INPUT" << endl;
		}
		return 0;
	}
}