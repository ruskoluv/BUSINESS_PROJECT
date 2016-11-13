/*
/    Cameron Fitzpatrick
/    CISP 400
/    FOX PROJECT 5
/
*/
#include "Payroll.h"
#include "time.h"
#include "cstring"

unsigned Payroll::MainMenu()
{
  unsigned ret = 0;
  do
  {
    cout << "\n1. Enter a new employee if there is room.\n";
    cout << "2. Calculate the gross payroll for the period.\n";
    cout << "3. Display all of the Business Employees.\n";
    cout << "4. Exit the simulation.\n";
    cin >> ret;
  } while( ret == 0 || ret > 4 );
  if(ret==4) return 0;

  return ret;
}

void Payroll::_New_Employee()
{
  srand(time(0));
  if ( _num == MAX )
  {
    cout<<"Payroll is full";
  }
  char* c = new char[5];
  strcpy(c,"Bob ");
  static char a = '1';
  c[3] = a++;
  unsigned emp = 0;
  if (!emp)
    emp = rand() % 5;
  switch(emp)
  {
    case 1:
      _pr[_num++] = new Truck_Driver( c, rand() %10, rand() %10 , rand() %40+1, rand() %40+1, rand() %40+1 );
      break;
    case 2:
      _pr[_num++] = new Assembler( c, rand() %10, rand() %40+1, rand() %40+1, rand() %40+1, rand() %40+1 );
      break;
    case 3:
      _pr[_num++] = new Manager( c, rand() %10, rand() %200000+1, rand() %50+1 );
      break;
    case 4:
      _pr[_num++] = new Foreperson( c, rand() %10, rand() %40000+20000, rand() %20+1 );
  }
}

void Payroll::_GrossPay( )const
{
  unsigned long long payroll = 0;
  for ( unsigned i =0; i < _num; i++ )
    payroll += _pr[i] -> GrossPay ( );
  cout << "Payroll is: $" << payroll << endl;
}

void Payroll::_Display() const
{
  if ( _num == 0 )
    cout<<"Payroll is empty."<<endl;
  else
  {
    for ( unsigned i =0; i < _num; ++i )
    {
      _pr[i]->Display( cout );
    }
  }
}

void Payroll::run()
{
  unsigned option = Payroll::MainMenu();
  while( option )
  {
    switch( option )
    {
      case 1:
        _New_Employee();
        break;
      case 2:
        _GrossPay();
        break;
      case 3:
        _Display();
        break;
    default: break;         //I like formatting like this.
    }
  }
}

Payroll::Payroll()
{
  _num=0;
  for(unsigned i=0 ; i<MAX ; ++i)
    _pr[i] = NULL;
}

Payroll::~Payroll()
{
  for(unsigned i=0 ; i<MAX ; ++i)
    delete _pr[i];
}













