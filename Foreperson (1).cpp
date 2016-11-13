/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#include "Foreperson.h"


Foreperson::Foreperson( )
:Salaried()
{
  _bonus_Rate = 0;
}

Foreperson::Foreperson( const STRING& Name, unsigned Dependents, double Salary, double BR )
:Salaried( Name, Dependents, Salary )
{
  if (BR<0) _bonus_Rate=0;
  _bonus_Rate = BR;
}

Foreperson::Foreperson( const Foreperson& FP )
:Salaried( static_cast<const Salaried&>(FP) )
{
  _bonus_Rate = FP._bonus_Rate;
}

const Foreperson& Foreperson::operator=( const Foreperson& FP )
{
  if(&FP==this) return *this;
  static_cast<Salaried&>(*this) = static_cast<const Salaried&>(FP);
  _bonus_Rate = FP._bonus_Rate;
  return *this;
}

double Foreperson::getBonusRate()const { return _bonus_Rate; }
void Foreperson::setBonusRate( double ud ) { _bonus_Rate = ud; }

ostream &operator<<( ostream& OS, const Foreperson& FP)
{
  OS<<static_cast<const Salaried&>(FP)<<endl;
  OS<<"Profit Share: "<<FP._bonus_Rate<<endl;
  return OS;
}

void Foreperson::Display ( ostream& OS )const
{
  OS << *this;
}

double Foreperson::GrossPay ( ) const
{
  cout << "Foreperson Pay: " << getMonthlySalary()+(getMonthlySalary()*_bonus_Rate)<<endl;
  return 2;
}




































