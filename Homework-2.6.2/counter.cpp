#include "counter.h"


Counter::Counter(int num) { this->num = num; }

void Counter::add() { num++; }

void Counter::sub() { num--; }

int Counter::get() { return num; }
