#define GLM_FORCE_PURE
#include<iostream>
#include "Application.h"

int main()
{

	if (app->startUp() == true)
	{
		while (app->update() == true)
			app->Draw();
		app->Destroy();
	}

	delete app;
	return 0;

}