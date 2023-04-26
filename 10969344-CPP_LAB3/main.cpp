#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



// Shows the options to the user and explains how to enter data
void showChoice() {
  cout << "Select an operation:" << endl;
  cout << "1. Addition (+)" << endl;
  cout << "2. Subtraction (-)" << endl;
  cout << "3. Multiplication (*)" << endl;
  cout << "4. Division (/)" << endl;
  cout << "Enter your choice (1, 2, 3, or 4): ";
}

// Accepts two numbers as arguments and returns their sum
double add(double a, double b) {
  return a + b;
}

// Accepts two numbers as arguments and returns their difference
double subtract(double a, double b) {
  return a - b;
}

// Accepts two numbers as arguments and returdoublens their product
double multiply(double a, double b) {
  return a * b;
}

// Accepts two numbers as arguments and returns their quotient
double divide(double a, double b) {
  return a / b;
}

// Accepts two numbers as arguments and returns num raised to the power p
double power(double num, int p=2)
{
    double result = 1;
    for (int i = 0; i<p; i++)
        result *= num;
    return result;
}
// Displays the specified pattern using nested for loops, conditional statements and 2 cout statements
void displayPattern()
{
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            if (j==0)
                cout<<"XOXOXOXOX"<<endl;
            else
                cout<<"OXO"<<endl;
        }
    }
}
int main()
{
    cout<<"_____Question 1_____"<<endl;
    srand(time(0));
    int randomNum = 1 + (rand()%100);
    int userInput;
    while(userInput != randomNum)
    {
        cout<<"Guess Number: ";cin>>userInput;
        (userInput < randomNum)
            ? cout << "Too low\n"
            : (userInput == randomNum)
                ? cout<<"\n"
                : cout << "Too high\n";
    }
    cout <<"Right"<<endl;


    cout<<"\n_____Question 2_____"<<endl;
    int choice;
    double a, b;

    showChoice(); cin>>choice;
    cout<<"Operands must be separated. ie: 2\" \"4\n";
    cout<<"Enter Operands: ";
    cin>>a>>b;

    switch (choice) {
    case 1:
      cout<< a << " + " << b << " = " << add(a, b) << endl;
      break;
    case 2:
      cout << a << " - " << b << " = " << subtract(a, b) << endl;
      break;
    case 3:
      cout << a << " * " << b << " = " << multiply(a, b) << endl;
      break;
    case 4:
      cout << a << " / " << b << " = " << divide(a, b) << endl;
      break;
    default:
      cout << "Invalid choice." << endl;
    }

    cout<<"\n_____Question 3_____"<<endl;
    double num;
    int p;
    cout<<"Enter the number: ";cin>>num;
    cout<<"Enter the power: ";cin>>p;
    cout<<"Result: "<<power(num, p)<<endl;

    cout<<"\n_____Question 4_____"<<endl;
    displayPattern();
    return 0;
}
