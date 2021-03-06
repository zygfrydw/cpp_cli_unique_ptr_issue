// Native.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Native.h"
#include <iostream>


void Strategy::Run()
{
	std::cout << "Strategy::Run" << std::endl;
}

Strategy::~Strategy()
{
	std::cout << "Strategy::Dtor" << std::endl;
}

void Calculator::Run(std::unique_ptr<Strategy> strategy)
{
	std::cout << "Calculator::Run" << std::endl;
	strategy->Run();
}
