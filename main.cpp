/*
A simple programme to determine the grade that a user got relative to the grade they input.
This programme uses a combination of if else and switch logic to output the result.
All basic tasks have been worked into functions. 
*/

#include <iostream>

void printIntro();
int getValidGrade();
void getLetter();

int main()
{
	printIntro();
	getLetter();

	return 0;
}

// Prints the intro message
void printIntro()
{
	std::cout << "Welcome to my application!\n";
	std::cout << "This programe will show you your letter grade.\n\n";
	std::cout << "Please enter your grade between 0 and 100: ";
}

// Ensures the result is valid and stores the input for the users grade
int getValidGrade()
{
	int result = 0;

	std::cin >> result;
	std::cout << std::endl;

	if ((result < 0) || (result > 100))
	{
		std::cout << "You have entered an invalid number.\n";
		return 1;
	}
	else
	{
		return result;
	}
}

// Converts the grade into a letter grade and outputs the result
void getLetter()
{
	char letter;
	int grade = getValidGrade();
	
	// Converts the numeric grade into a character grade
	if ((grade >= 90) && (grade <= 100))
	{
		letter = 'A';
	}
	else if ((grade >= 80) && (grade <= 89))
	{
		letter = 'B';
	}
	else if ((grade >= 70) && (grade <= 79))
	{
		letter = 'C';
	}
	else if ((grade >= 60) && (grade <= 69))
	{
		letter = 'D';
	}
	else
	{
		letter = 'F';
	}

	// Switches the character grade to print the letter grade message
	switch (letter)
	{
	case 'A':
		std::cout << "Congratulations! You got an A!\n";
		break;
	case 'B':
		std::cout << "Great! You got a B!\n";
		break;
	case 'C':
		std::cout << "Good job. You got a C.\n";
		break;
	case 'D':
		std::cout << "You got a D. Try harder next time.\n";
		break;
	case'F':
		std::cout << "Wow. An F.\n";
		break;
	default:
		break;
	}
}
