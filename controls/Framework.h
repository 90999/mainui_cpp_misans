#pragma once
#ifndef FRAMEWORK_H
#define FRAMEWORK_H

#include "BaseWindow.h"

class CMenuFramework : public CMenuBaseWindow
{
public:
	CMenuFramework();

	void Show();
	void Init();
	void VidInit();
	void Hide();
	bool IsVisible();
	bool IsRoot() { return true; }
};

#endif // FRAMEWORK_H
