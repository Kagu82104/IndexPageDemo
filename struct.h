#ifndef STRUCT_H
#define STRUCT_H
#include <string>
#include <vector>
#include "atom.h"
using std::string;

class Struct: public Term {
public:
  Struct(Atom const & name, std::vector<Term *> args):_name(name), _args(args) {}
  Term * args(int index) { return _args[index]; }
  Atom const & name() { return _name; }
private:
  Atom _name;
  std::vector<Term *> _args;
};


#endif
