//---------------------------------------------------------------
//
// View.cpp
// Joshua Sanders
//

#include "View.h"

#include <iostream>

namespace ObserverTest
{

//==================================================================

void View::OnUpdate(int x)
{
	std::cout << "Updating in View\n" << "Argument Passed: " << x << std::endl;
}

//==================================================================

} // namespace ObserverTest
