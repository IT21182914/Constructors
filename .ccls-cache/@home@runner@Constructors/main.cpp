#include <iostream>
#include <cstring>

using namespace std;

class Employee{

private:

   int empno;
   char name[20];
   double basicSal;
   double allowance;
   double salary;

public:

~Employee(); //Destructor
Employee(); // default constructor
Employee (int pempno,char pname[],double pallowance,double pbasicSal); //overloaded constructor
void assignDetails();
void assignDetails (int pempno,char pname[],double pallowance,double pbasicSal);
void setAllowance (double pallowance);
void calcSalary();
void printPaySlip();



};



int main() 
{
  Employee emp;

  Employee emp1(100,"Nimal",500.0,1000.0);

 
  
  emp1.printPaySlip();




  return 0;
}

Employee::Employee()
{
   empno = 0;
  strcpy (name, "Default");
  allowance = 0;
  basicSal = 0;
}


Employee::Employee (int pempno,char pname[],double pallowance,double pbasicSal) 
{
  empno = pempno;
  strcpy (name, pname);
  allowance = pallowance;
  basicSal = pbasicSal;
  
  
}

Employee::~Employee()
{
  cout << "Destructor is called" << endl;
}










void Employee::assignDetails (int pempno,char pname[],double pallowance,double pbasicSal)
{
  empno = pempno;
  strcpy (name, pname);
  allowance = pallowance;
  basicSal = pbasicSal;
  
  
}

void Employee::setAllowance (double pallowance)
{
  allowance = pallowance;
}

void Employee::printPaySlip()
{
  cout  << "Employee No: " << empno << endl;
  cout  << "Employee Name: " << name << endl;
  cout  << "Employee Allowance: " << allowance << endl;
  cout  << "Employee Basic Salary: " << basicSal << endl;
  
}

void Employee::calcSalary()
{
cout  << allowance + basicSal << endl;
  
}

void Employee::assignDetails()
{
 empno = 0;
  strcpy (name, "Default");
  allowance = 0;
  basicSal = 0;
  
}

