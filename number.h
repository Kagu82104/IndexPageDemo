#ifndef NUMBER_H
#define NUMBER_H
#include <string>

using std::string;
class Number {
public:
  Number(int v);
  int value();
  string symbol();
private:
	int _value;
	const string _symbol;
};


#endif
