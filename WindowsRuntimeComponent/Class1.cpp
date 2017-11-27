#include "pch.h"
#include "Class1.h"
#include <ppltasks.h>
#include <concurrent_vector.h>

using namespace WindowsRuntimeComponent;
using namespace Platform;
using namespace concurrency;
using namespace Platform::Collections;
using namespace Windows::Foundation::Collections;
using namespace Windows::Foundation;
using namespace Windows::UI::Core;

Class1::Class1()
{
}
// Determines whether the input value is prime.
bool Class1::IsPrime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i < n; ++i)
	{
		if ((n % i) == 0)
			return false;
	}
	return true;
}
