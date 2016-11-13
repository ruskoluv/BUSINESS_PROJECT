/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#ifndef MANAGER_H_INCLUDED
#define MANAGER_H_INCLUDED

#include "Salaried.h"

class Manager: public Salaried
{
  double _profit_share;
public:
  Manager ( );
  Manager ( const STRING& Name, unsigned Dependents, double Salary, double PS );
  Manager ( const Manager& M );

  const Manager& operator= ( const Manager& );

  double getBonusRate ( ) const;
  void setBonusRate ( double );

  friend ostream &operator<<( ostream&, const Manager& );

  void Display ( ostream& )const;
  double GrossPay ( ) const;
};

#endif // MANAGER_H_INCLUDED
