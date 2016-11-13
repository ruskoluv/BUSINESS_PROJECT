/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#include "Manager.h"

Manager::Manager ( )
:Salaried()
{
  _profit_share=0;
}

Manager::Manager( const STRING& Name, unsigned Dependents, double Salary, double PS )
:Salaried( Name, Dependents, Salary )
{
  if (PS<0) _profit_share = 0;
  _profit_share = PS;
}

Manager::Manager( const Manager & M )
:Salaried(static_cast<const Salaried&>(M))
{
  _profit_share = M._profit_share;
}

const Manager& Manager::operator=( const Manager& M )
{
  if(&M==this) return *this;
  static_cast<Salaried&>(*this) = static_cast<const Salaried&>(M);
  _profit_share = M._profit_share;
  return *this;
}

double Manager::getBonusRate()const { return _profit_share; }
void Manager::setBonusRate( double d ) { _profit_share = d; }

ostream &operator<<( ostream& OS, const Manager& M)
{
  OS<<static_cast<const Salaried&>(M)<<endl;
  OS<<"Profit Shared: "<<M._profit_share<<endl;
  return OS;
}

void Manager::Display ( ostream& OS )const
{
  OS << *this;
}

double Manager::GrossPay()const
{
  cout<<"Manager Gross Pay: "<<getMonthlySalary()+_profit_share<<endl;
  return 3;
}


























