#include "number.h"
#include "atom.h"
#include "variable.h"
#include <string>

using std::string;
Number :: Number(int v):_value(v),_symbol(std::to_string(v)){}
  int Number :: value(){return std::to_string(_value);}
  string Number :: symbol(){return _symbol;}
  bool Number :: match(Number num){return _value==num._value;}
  bool Number :: match(Atom at){return _symbol==at.symbol();}
  bool Number :: match(Variable var){
  	bool ret = var.getassignable();
    string num_value = std::to_string(_value);
  	if(ret ||(var.value()==num_value){
  		return true;
  	}
  	return false;
  }
