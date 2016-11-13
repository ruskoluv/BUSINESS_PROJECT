/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#include "Salaried.h"

Salaried::Salaried()
:Employee()
{
  _monthly_salary=0;
}

Salaried::Salaried( const STRING& Name, unsigned Dependents, double Salary )
:Employee( Name, Dependents )
{
  _monthly_salary = Salary;
}

Salaried::Salaried( const Salaried& S)
:Employee(static_cast<const Employee&>(S))
{
  _monthly_salary = S._monthly_salary;
}

const Salaried& Salaried::operator=( const Salaried& S )
{
  if(&S==this) return(*this);
  static_cast<Employee&>(*this) = static_cast<const Employee&>(S);
  _monthly_salary = S._monthly_salary;
  return *this;

}

double Salaried::getMonthlySalary() const {return _monthly_salary;}

void Salaried::setMonthlySalary( double S) {_monthly_salary=S;}


ostream &operator<<( ostream& os, const Salaried& S)
{
  os<<static_cast<const Employee&>(S);
  os<<"monthly salary: "<<S._monthly_salary<<endl;
  return os;
}

void Salaried::Display ( ostream& os )const
{
  os << *this;
}























