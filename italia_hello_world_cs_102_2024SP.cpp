//Antonino Italia 1/30/2024
//cs 102
//outputs information about my name, my age, what college i go to, and my semester
//using \n it outputs the date and 'Hello there!!!!'
//this program also shows the variables number and digit. They end up being added to 100
//the vars checking, miles, and diameter are used at the end of this program
//the program then uses the char variable type, it is used 3 times
//this code then finally uses strings, which can only be used when the #include <string>
//the strings spell out a first and last name
//I use a float and a double to describe file sizes
#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Antonino Italia is 18." <<endl;
    cout << "He is an Ohlone College student in the 2024 spring semester." <<endl;
    std::cout << "Today is \n" << "1/30/2024\n" <<endl;
    std::cout << "Hello" << "\nThere!!!!!\n";

    int number;
    int digit;

    number = 56;
    digit = 44;
    cout << "The value in the variable number is: \n" << number << endl;
    std::cout <<"When the variable number is added with the variable named digit, we get: \n" << number + digit << endl;
    cout << "\nI may not know C++ very well, however I have figured out how to add variables at 1:44 PM PST" << endl;

    int checking;
    unsigned int miles;
    long diameter;

    checking = -20;
    miles = 4276;
    diameter = 100000;
    std::cout << "\nToday, i checked my balance which is " << checking << endl;
    std::cout << "Tomorrow, I will have walked " << miles << " miles in a single day" << endl;
    std::cout << "In a month, I will cover a diameter of " << diameter << endl;

    char letter;

    letter = 'h';
    cout << letter << "ello \n" << endl;
    letter = 'H';
    cout << letter << "ello \n" << endl;
    letter = 'h';
    cout << letter << '\n' << endl;


    string firstName = "John";
    string lastName = "Blue";
    cout << "My name is " << firstName << " while my last name is " << lastName << endl;

    float file_size;
    double bigger_file_size;

    file_size = 1.495979E11;
    bigger_file_size = 1.989E30;

    std::cout << "My code is " << file_size << " gigabytes big." << endl;
    cout << "I know someone whose code is " << bigger_file_size << " megabytes big." << endl;

    std::cout << "\n whats the difference between std::cout and cout? Other than that, \n";
    std::cout << "bye bye,see you thursday";

    return 0;
}
