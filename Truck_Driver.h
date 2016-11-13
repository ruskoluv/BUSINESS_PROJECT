/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#ifndef TRUCK_DRIVER_H_INCLUDED
#define TRUCK_DRIVER_H_INCLUDED
#include "Hourly.h"

class Truck_Driver: public Hourly
{
protected:
  double _hours_driven;
  double _hours_driven_bonus;
public:
   Truck_Driver ( );
   Truck_Driver ( const STRING& Name, unsigned Dependents, double rate, double hoursWorked, double hoursDriven, double Bonus );
   Truck_Driver ( const Truck_Driver& );

   const Truck_Driver& operator= ( const Truck_Driver& );

   friend ostream &operator << ( ostream&, const Truck_Driver& );

   virtual void Display( ostream& ) const;
   virtual double GrossPay ( ) const;

};

#endif // TRUCK_DRIVER_H_INCLUDED
