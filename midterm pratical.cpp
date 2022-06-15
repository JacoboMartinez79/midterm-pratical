// midterm pratical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int question1()
{
	std::cout << "Question: how many donuts are in a dozen? \n";
	std::cout << "1. 24 donuts" << "\n";
	std::cout << "2. 14 donuts" << "\n";
	std::cout << "3. 12 donuts" << "\n";
	std::cout << "4. 13 donuts" << "\n";
	int ans;
	std::cin >> ans;
	while (true)
	{
		if (ans != 4) {

			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Incorrect\n";
			return ans;
		}
		else
		{
		
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Correct!";
			return ans;
		}

	}

}

int question2()
{
	std::cout << "Question: when was the last economic recession? \n";
	std::cout << "1. 2008" << "\n";
	std::cout << "2. 2004" << "\n";
	std::cout << "3. 1020" << "\n";
	std::cout << "4. 1949" << "\n";
	int ans;
	std::cin >> ans;
	while (true)
	{
		if (ans != 1) {

			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Incorrect\n";
			return ans;
		}
		else
		{

			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Correct!";
			return ans;
		}

	}
	
}

int question3()
{
	std::cout << "Question: Who was involved in the war of 1812? \n";
	std::cout << "1. Americans vs Great Britan" << "\n";
	std::cout << "2. The Spanish vs American" << "\n";
	std::cout << "3. Russians vs Americans" << "\n";
	std::cout << "4. Russians vs The Spanish" << "\n";
	int answ;
	std::cin >> answ;
	while (true)
	{
		if (answ != 1) {

			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Incorrect\n";
			return answ;
		}
		else
		{

			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Correct!";
			return answ;
		}

	}
}

int question4() 
{
	std::cout << "Question: How Many gbs are in a TerraByte? \n";
	std::cout << "1. 1024gbs" << "\n";
	std::cout << "2. 1014gbs" << "\n";
	std::cout << "3. 1012gbs" << "\n";
	std::cout << "4. 1016gbs" << "\n";
	int ans;
	std::cin >> ans;
	while (true)
	{
		if (ans != 1) {

			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Incorrect\n";
			return ans;
		}
		else
		{

			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Correct!";
			return ans;
		}

	}
}


int main()
{
	srand(time(NULL));
	int randomize = rand() % 4 + 1;
	
	switch (randomize)
	{
	case 1:
	question1();
		break;
	case 2:
	question2();
		break;
	case 3:
	question3();
		break;
	case 4:
	question4();
		break;
	}



}
