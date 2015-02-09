//---------------------------------------------------------------
//
// Controller.cpp
// Joshua Sanders
//

#include "Controller.h"
#include "Listener.h"

namespace ObserverTest
{

//==================================================================

void Controller::Subscribe(Listener& listener)
{
	m_emitsUpdateSignal.connect(boost::bind(&Listener::OnUpdate, &listener, _1));
}

void Controller::Subscribe(BoostSignal::slot_type handler)
{
	m_emitsUpdateSignal.connect(handler);
}

void Controller::Update()
{
	int someInt = 11;
	m_emitsUpdateSignal(someInt);
}

//==================================================================

} // namespace ObserverTest
