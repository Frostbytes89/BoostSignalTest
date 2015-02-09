//---------------------------------------------------------------
//
// Listener.h
// Joshua Sanders
//

#pragma once

namespace ObserverTest
{

//==================================================================

class Listener {
public:
	virtual ~Listener() {};
	virtual void OnUpdate(int x) = 0;
}; 

//==================================================================

}// namespace ObserverTest
