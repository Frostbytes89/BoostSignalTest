//---------------------------------------------------------------
//
// main.cpp
// Joshua Sanders
//

#include "Controller.h"
#include "View.h"

#include <iostream>

int main()
{
	ObserverTest::Controller controller;
	ObserverTest::View view;

	controller.Subscribe(view);

	controller.Subscribe([] (int x)
	{
		std::cout << "Now we're in the lambda from main\n";
	});

	controller.Update();

	system("pause");
	return 0;
}
