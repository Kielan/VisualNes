#pragma once
#include "stdafx.h"

void initChip();
void halfStep();
void step();
int readBit(string name);
int readBits(string name, int n);
void writeBits(string name, int n, int x);
void writeBit(string name, int x);
void floatBits(string name, int n);
int readAddressBus();
int readDataBus();
uint8_t mRead(int a);
void mWrite(int a, int d);
void handleChrBus();
void handleIoBus();