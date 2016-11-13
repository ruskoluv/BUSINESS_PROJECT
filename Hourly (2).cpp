/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#include "Hourly.h"

Hourly::Hourly()
:Employee()
{
  _hourly_rate=0;
  _hours_worked=0;
}

Hourly::Hourly( const STRING& Name, unsigned Dependents, double rate, double hoursWorked )
:Employee(Name, Dependents)
{
  _hourly_rate=rate;
  _hours_worked=hoursWorked;
}

Hourly::Hourly( const Hourly& H )
:Employee(static_cast<const Employee&>(H))
{
  _hourly_rate=H._hourly_rate;
  _hours_worked=H._hours_worked;
}

const Hourly& Hourly::operator=( const Hourly& H )
{
  if(&H==this) return (*this);
  static_cast<Employee&>(*this) = static_cast<const Employee&>(H);
  _hourly_rate=H._hourly_rate;
  _hours_worked=H._hours_worked;
  return *this;
}

double Hourly::getHourlyRate()const { return _hourly_rate; }
double Hourly::getHoursWorked()const { return _hours_worked; }
void Hourly::setHourlyRate( double R ) { _hourly_rate=R; }
void Hourly::setHoursWorked( double W ) { _hours_worked=W; }

ostream &operator<<( ostream& os, const Hourly& H )
{
  os<<static_cast<const Employee&>(H);
  os<<" Hourly rate: "<<H._hourly_rate<<endl;
  os<<" Hours worked: "<<H._hours_worked<<endl;
  return os;
}

void Hourly::display ( ostream& os)const
{
  os << *this;
}




























