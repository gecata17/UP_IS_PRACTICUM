#include <iostream>   //task 0
using namespace std;
int main()
{
	double a, b;
	char operate;
	cin >> a >> operate >> b;
	switch (operate) {
	case '+':cout << a + b << endl; break;
	case'-': cout << a - b << endl; break;
	case'*':cout << a * b << endl; break;
	case'/':
		if (b != 0) {
			cout << a / b << endl; break;
		}
		else {
			cout << "Invalid division" << endl;
		}
	default: cout << "Invalid operation" << endl;

		return 0;
	}
}


#include <iostream>  //task1
using namespace std;
int main()
{
         int year;

        cout << "Enter a year: ";
        cin >> year;

        //First way
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                    cout << year << " is a leap year.";
                else
                    cout << year << " is not a leap year.";
            }
            else
                cout << year << " is a leap year.";
        }
        else
            cout << year << " is not a leap year.";

        return 0;
	}
  
 
#include <iostream>  //task2
using namespace std;
int main()
{
	char symbol;
	cin >> symbol;
	if ('a' <= symbol <= 'z') {
		cout << "The upper case character corresponding to is " << char(symbol - 32);
	}
	else if ('A' <= symbol <= 'Z') {
		cout << "The upper case character corresponding to is " << char(symbol + 32);
	}
	else {
		cout << symbol << "is not a letter" << endl;


		return 0;
	}
}


#include <iostream>  //task3
using namespace std;
int main()
{
	int month;
	cin >> month;
	switch (month) {
	case 1:case 2:case 12: cout << "The season is winter"; break;
	case 6:case 7:case 8:cout << "The season is summer"; break;
	case 3:case 4:case 5:cout << "The season is spring"; break;
	case 9:case 10:case 11:cout << "The season is autumn"; break;
	default:cout << "Invalid month" << endl;


		return 0;
	}
}

#include <iostream>  //task4
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int x = -b / a;
	if (a * x == -b)
		cout << x << endl;
	else if ((a == 0) && (b == 0))
	{
		cout << "INF" << endl;
	}
	else {

		cout << "NO" << endl;


		return 0;
	}
}


#include <iostream>  //task5
using namespace std;
int main()
{
	int month, year;
	cin >> month >> year;
	int days = 0;
	switch (month) {
	case 1:case 3:case 5:case 7: case 8:case 10: case 12:days = 31; cout << days << endl; break;
	case 4:case 6:case 9:case 11: days = 30; cout << days << endl; break;
	case 2:
		if (year % 4 == 0) {
			if ((year % 100 == 0) && (year % 400 == 0)) {
				days = 29;
				cout << days << endl;
			}
			else {
				days = 28;
				cout << days << endl;

			}

			return 0;
		}
	}
}


#include <iostream>  //task6
using namespace std;
int main()
{
	double money;
	int ram, usbPort;
	bool ssdIn;
	cin >> money >> ram >> usbPort>>ssdIn;
	bool purchase = ((1000 <= money && money <= 1500) && (usbPort >= 3) && (ram >= 8) && ssdIn);
	bool purchaseGiveup = ((money <= 800) && (!ssdIn || ram < 8));
	bool result = purchase || purchaseGiveup;
	cout<<result<<endl;
	return 0;
}


#include <iostream>  //task7
using namespace std;
int main()
{
	int num;
	cin >> num;
	bool statement = 1;
	bool wrongStatement = 0;
	int firstDigit = num / 1000;
	int secondDigit = num / 100 % 10;
	int thirdDigit = num / 10 % 10;
	int fourthDigit = num % 10;
	if (firstDigit % 2==1 && firstDigit>secondDigit && firstDigit>thirdDigit && firstDigit>fourthDigit) {
		cout << boolalpha << statement << endl;

	}
	else {
		cout << boolalpha << wrongStatement << endl;

		return 0;
	}
}


#include <iostream>  //bonus task
using namespace std;
int main()
{
	int tomatoes, peppers, carrots, olives, potatoes, addIngredients;
	cin >> tomatoes >> peppers >> carrots >> olives >> potatoes >> addIngredients;
	bool partnerOut = 0;
	bool partnerIn = 1;
	bool salad = (tomatoes >= 1 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && addIngredients >= 150 && partnerOut);
	bool soup = (tomatoes >= 2 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && addIngredients >= 200 && partnerIn);
	bool meal = (tomatoes >= 5 && peppers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && addIngredients >= 300 && partnerIn);
        bool result = salad || soup || meal;

	cout << boolalpha << result << endl;

	  return 0;
	
}
