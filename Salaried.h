/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#ifndef SALARIED_H_INCLUDED
#define SALARIED_H_INCLUDED
#include "Short_String.h"
#include "Employee.h"

class Salaried: public Employee
{
  double _monthly_salary;
public:
  Salaried ( );
  Salaried ( const STRING& Name, unsigned Dependents, double Salary );
  Salaried ( const Salaried& );

  const Salaried& operator= ( const Salaried& );

  double getMonthlySalary ( )const;
  void setMonthlySalary ( double );

  friend ostream &operator<<( ostream& os, const Salaried& );
  void Display ( ostream& )const;
  //grossly???

};


#endif // SALARIED_H_INCLUDED
