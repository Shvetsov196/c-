/*
 * MyWindow.h
 *
 *  Created on: 3 ���. 2022 �.
 *      Author: ����
 */

#ifndef MYWINDOW_H_
#define MYWINDOW_H_

#include "Window.h"

class MyWindow: public Window {
public:
	static constexpr int WINDOW_WIDTH  = 600;
	static constexpr int WINDOW_HEIGHT = 500;

	virtual void render() override;
	virtual void setupGL() override ;


public:
	MyWindow();
	virtual ~MyWindow()=default;
};

#endif /* MYWINDOW_H_ */
