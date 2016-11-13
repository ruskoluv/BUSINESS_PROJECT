/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#include "Truck_Driver.h"

Truck_Driver::Truck_Driver ( )
:Hourly()
{

}
Truck_Driver::Truck_Driver ( const STRING& Name, unsigned Dependents, double rate, double hoursWorked,
                            double hoursDriven, double Bonus )
:Hourly( Name, Dependents, rate, hoursWorked )
{
  if(hoursDriven<0) _hours_driven = 0;
  if(Bonus<0) _hours_driven_bonus = 0;
}

Truck_Driver::Truck_Driver ( const Truck_Driver& T)
:Hourly( static_cast<const Hourly&>(T) )
{
  _hours_driven = T._hours_driven;
  _hours_driven_bonus = T._hours_driven_bonus;
}

const Truck_Driver& Truck_Driver::operator= ( const Truck_Driver& T )
{
  if ( &T == this ) return *this;
  static_cast<Hourly&>(*this) = static_cast<const Hourly&>(T);
  _hours_driven = T._hours_driven;
  _hours_driven_bonus = T._hours_driven_bonus;

  return *this;
}

ostream &operator << ( ostream& OS, const Truck_Driver& T )
{
  OS << static_cast<const Hourly&>(T);
  OS << "Hours Driven: " << T._hours_driven << endl;
  OS << "Hours Driven Bonus: " << T._hours_driven_bonus << endl;

  return OS;
}

void Truck_Driver::Display( ostream& OS ) const
{
  OS << *this;
}

double Truck_Driver::GrossPay ( ) const
{
  cout << "Truck Driver Gross Pay: ";
  cout << ( getHoursWorked() * getHourlyRate() ) + ( _hours_driven * _hours_driven_bonus ) << endl;

  return 5;
}





















