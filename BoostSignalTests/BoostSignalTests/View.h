//---------------------------------------------------------------
//
// View.h
// Joshua Sanders
//

#pragma once

#include "Listener.h"

namespace ObserverTest
{

//==================================================================

class View : public Listener
{
public:
	View() {};
	~View() {};
	virtual void OnUpdate(int x) override;
}; 

//==================================================================

} // namespace ObserverTest
