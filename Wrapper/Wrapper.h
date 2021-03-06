#pragma once
#include <Native.h>
using namespace System;

namespace Wrapper {
	public ref class WrapperClass
	{
	public:
		void Run() {
			auto strategy = std::make_unique<Strategy>();
			auto calculator = std::make_unique<Calculator>();
			calculator->Run(std::move(strategy));
		}
	};
}
