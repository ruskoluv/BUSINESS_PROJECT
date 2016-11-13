/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#ifndef HOURLY_H_INCLUDED
#define HOURLY_H_INCLUDED
#include "Employee.h"

class Hourly: public Employee
{
  double _hourly_rate;
  double _hours_worked;
public:
  Hourly( );
  Hourly( const STRING& Name, unsigned Dependents, double rate, double hoursWorked );
  Hourly( const Hourly& );

  const Hourly& operator=( const Hourly& );

  double getHourlyRate()const;
  double getHoursWorked()const;
  void setHourlyRate( double );
  void setHoursWorked( double );

  friend ostream &operator<<( ostream&, const Hourly& );
  virtual void display ( ostream& )const;
};

#endif // HOURLY_H_INCLUDED
