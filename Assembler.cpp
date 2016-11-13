/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#include "Assembler.h"

Assembler::Assembler()
:Hourly()
{
  _piece_work_bonus = 0;
  _num_pieces_this_pay_period = 0;
}

Assembler::Assembler( const STRING& Name, unsigned Dependents, double rate, double hoursWorked, double PWB,
             unsigned NPP )
:Hourly( Name, Dependents, rate, hoursWorked )
{
  if( PWB < 0 ) _piece_work_bonus = 0;
  _piece_work_bonus = PWB;
  _num_pieces_this_pay_period = NPP;

}

Assembler::Assembler( const Assembler& A )
: Hourly( static_cast<const Hourly&>(A) )
{
  _piece_work_bonus = A._piece_work_bonus;
  _num_pieces_this_pay_period = A._num_pieces_this_pay_period;
}

const Assembler& Assembler::operator= ( const Assembler& A )
{
  if ( &A == this ) return *this;
  static_cast<Hourly&>(*this) = static_cast<const Hourly&>(A);
  _piece_work_bonus = A._piece_work_bonus;
  _num_pieces_this_pay_period = A._num_pieces_this_pay_period;

  return *this;
}

ostream &operator << ( ostream& OS, const Assembler& A )
{
  OS << static_cast<const Hourly&>(A);
  OS << "Piece Work Bonus: " << A._piece_work_bonus <<endl;
  OS << "Number of Pieces this pay period: " << A._num_pieces_this_pay_period<<endl;

  return OS;
}

void Assembler::Display( ostream& OS ) const
{
  OS << *this;
}

double Assembler::GrossPay ( ) const
{
  cout << "Assembler Gross Pay: " << (getHoursWorked()*getHourlyRate())+(_num_pieces_this_pay_period * _piece_work_bonus) << endl;
  return 4;
}















































