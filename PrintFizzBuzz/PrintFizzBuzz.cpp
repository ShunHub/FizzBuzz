#include<iostream>

using std::cout; using std::cin; using std::endl;


void printFizzBuzz(int number = 100) {

	for (int counts = 1; counts <= number; counts++)
	{
		if (counts % 3 == 0) 
			counts % 5 == 0 ? cout << "FizzBuzz" << "  " : cout << "Fizz" << "  ";
		else if (counts % 5 == 0)
			cout << "Buzz" << "  ";
		else
			cout << counts << "  ";
	}

}



int main(int argc, char **argv) {

	printFizzBuzz();

	cin.get();
	return 0;
}
