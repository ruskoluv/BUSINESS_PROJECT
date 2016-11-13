/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#ifndef ASSEMBLER_H_INCLUDED
#define ASSEMBLER_H_INCLUDED
#include "Hourly.h"

class Assembler: public Hourly
{

protected:

  double _piece_work_bonus; //non-neg
  unsigned _num_pieces_this_pay_period; //this pay period

public:
  Assembler();
  Assembler( const STRING& Name, unsigned Dependents, double rate, double hoursWorked, double PWB, unsigned NPP );
  Assembler( const Assembler& );

  const Assembler& operator= ( const Assembler& );

  friend ostream &operator << ( ostream&, const Assembler& );

  virtual void Display( ostream& ) const;
  virtual double GrossPay ( ) const;
};

#endif // ASSEMBLER_H_INCLUDED
