#ifndef ATOM_H
#define ATOM_H
#include "term.h"

class Atom : public Term{
public:
  Atom(string s):Term(s) {}
};

class Number : public Term{
public:
  Number(double db):Term(db) {}
};

#endif
