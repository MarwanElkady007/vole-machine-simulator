#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include <iostream>
#include <iomanip>
#include <array>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>
#include <limits>
#include <memory>
#include "Register.h"
#include "Memory.h"

using namespace std;

class Instruction {
public:
    static void execute(uint16_t instruction, Register& reg, Memory& mem, uint8_t& PC, bool& running);
};

#endif // INSTRUCTION_H
