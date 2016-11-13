/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/

#ifndef PAYROLL_H_INCLUDED
#define PAYROLL_H_INCLUDED

#include "Employee.h"
#include "Sales.h"
#include "InsideSales.h"
#include "Salaried.h"
#include "Hourly.h"
#include "Foreperson.h"
#include "Manager.h"
#include "Truck_Driver.h"
#include "Assembler.h"
const unsigned MAX = 100;

class Payroll
{
  Employee *_pr[MAX];
  unsigned _num;
  unsigned MainMenu();
  void _New_Employee();
  void _GrossPay()const;
  void _Display()const;
public:
  Payroll();
  ~Payroll();
  void run();
};

#endif // PAYROLL_H_INCLUDED
