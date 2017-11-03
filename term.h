#ifndef TERM_H
#define TERM_H
#include <string>

using std::string;
// class Variable;
// class Struct;
// class List;
class Term{
public:
  virtual string  symbol() const = 0;
  virtual string  value() const{return symbol();};
  virtual bool match(Term & term) {
    return symbol() == term.symbol();
  }
  // virtual Variable * getVariable() { return 0; }
  // virtual List * getList() { return 0; }
  // virtual Struct * getStruct() { return 0; }
};


#endif
