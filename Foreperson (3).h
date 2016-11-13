/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#ifndef FOREPERSON_H_INCLUDED
#define FOREPERSON_H_INCLUDED

#include "Salaried.h"

class Foreperson: public Salaried
{
  double _bonus_Rate;
public:
  Foreperson ( );
  Foreperson ( const STRING& Name, unsigned Dependents, double Salary, double BR );
  Foreperson ( const Foreperson& );

  const Foreperson& operator= ( const Foreperson& );

  double getBonusRate ( ) const;
  void setBonusRate ( double );

  friend ostream &operator<<( ostream&, const Foreperson& );

  void Display ( ostream& )const;
  double GrossPay ( ) const;

};


#endif // FOREPERSON_H_INCLUDED
