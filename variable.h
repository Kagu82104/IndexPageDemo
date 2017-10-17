#ifndef VARIABLE_H
#define VARIABLE_H
#include <vector>
#include <string>
#include "atom.h"
#include "number.h"
#include "struct.h"
using std::string;
using namespace std;
class Variable:public Term{
public:
  Variable(string s):_symbol(s),_value(s){}
  string value() const{ return _value; }
  string symbol() const{return _symbol;}
  bool match( Atom & atom ){
    bool ret = _assignable;
    if(_assignable||_value!=atom.value()){
      _value = atom.symbol();
      if(!_varassignable){
        for(int i=0;i<vec.size();i++){
            (*vec[i])._value = atom.symbol();
          }
      }
      _assignable = false;
    }
    return ret;
  }
  bool match(Variable & v){
    bool ret = _varassignable;
      vec.push_back(&v); //(X)val =(Y)address
      for (int i = 0; i < vec.size(); i++)
      {
        cout << "vec:"<< vec[i]->value() <<endl;
      }
      v.vec.push_back(&v);
      v.vec.push_back(this);
      _value =v.value();//(Y)value = X
      _varassignable = false;
    return ret;
  }
  bool match(Number & num){
      _value = num.value();
      if(!_varassignable){
          for(int i=0;i<vec.size();i++){
              *vec[i] = num.value();
        }
      }
    return true;
  }
  string _symbol;
  string _value;
  bool _assignable = true;
  bool _varassignable = true;
  std::vector<Variable *> vec;
};

#endif
