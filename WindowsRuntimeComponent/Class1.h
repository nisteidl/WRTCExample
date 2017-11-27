#pragma once
#include <collection.h>
#include <ppl.h>
#include <amp.h>
#include <amp_math.h>

namespace WindowsRuntimeComponent
{
	public delegate void PrimeFoundHandler(int result);
	public ref class Class1 sealed
	{
	public:
		Class1();
		bool IsPrime(int n);
	};
}
