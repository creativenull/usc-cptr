//Arnold Chand

/*
 * Simple calculator program
 * Performs addition, subtraction, multiplication, division
 * and the square of two numbers. 
 */

#include<iostream>
#include<string>
 
using namespace std;
 
double number;
 
double result;
char myOperator;
 
int main ()
 
{
   cout << "Calculator v2.0" << endl;
   cin >> result;
   do
   {
       cin >> myOperator;
       switch(myOperator)
       {
           case '+':   cin >> number;
                       result=result + number;
                       cout << "="<< result <<endl;
                       break;
           case '-':   cin >> number;
                       result=result - number;
                       cout << "="<< result <<endl;
                       break;
           case '*':
                       cin >> number;
                       result=result * number;
                       cout << "="<< result <<endl;
                       break;
           case '/':
                       cin >> number;
                       result=result / number;
                       cout << "="<< result <<endl;
                       break;
           case 's':
                       result=result*result;
                       cout << "Square is " << result <<endl;
                       break;
           case 'H':
           case 'h' :
                       cout <<endl << "Help" <<endl;
                       cout << "-----------------";
                       cout << "+ for Addition" << endl;
                       cout << "- for Substraction" << endl;
                       cout << "* for Multiplication" << endl;
                       cout << "/ for Division" << endl;
                       cout << "s for Square" << endl;
                       cout << "x for Exit" << endl << endl;
                       break;
           case 'X':
           case 'x':   exit(0);
                       break;
           default :
                       cout << "Invalid Operator. Start again." << endl;
                       cin.clear();
                       cin >> result;
                       break;
       }
 
   }while(myOperator!='x');
 
   return 0;
}

