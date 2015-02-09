//---------------------------------------------------------------
//
// Controller.h
// Joshua Sanders
//

#pragma once

#include <boost/signals2.hpp>

namespace ObserverTest
{

//==================================================================

class Listener;
typedef boost::signals2::signal<void (int)> BoostSignal;

class Controller
{
public:
	Controller() {};
	~Controller() {};

	BoostSignal m_emitsUpdateSignal;

	void Subscribe(Listener& listener);
	void Subscribe(BoostSignal::slot_type handler);
	void Update();
};

//==================================================================

} // namespace ObserverTest
