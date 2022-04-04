/*
 * MyWindow.cpp
 *
 *  Created on: 3 апр. 2022 г.
 *      Author: БЗМК
 */

#include "MyWindow.h"

MyWindow::MyWindow()
: Window(WINDOW_WIDTH, WINDOW_HEIGHT)
{
	// TODO Auto-generated constructor stub
	SDL_SetWindowTitle(_window.get(),"MY OpenGL");
}
void MyWindow::render()
{
 glClear(GL_COLOR_BUFFER_BIT);

 //размер точки glPointSize(8.0f);

 //толщина линии glLineWidth(8.0f);
 /*
  * GL_POINT - точка по координатам (от двух до 4 координат)
  * GL_LINES - линия по двум точкам
  * GL_LINE_STRIP - ломанная линия (по всем точкам по порядку)
  * GL_LINE_LOOP - ломанная линия с закрытым контуром (первая точка соединяется
  *  с последней, образуя фигуру)
  * GL_TRIANGLES - по трем точкам образует треугольник
  * GL_QUADS -рисует четырехугольник из двух треугольников (1,2,3 и 1,3,4)
  * GL_TRIANGLE_FAN (123 И 134 И 145 И Т.Д.)
  * GL_TRIANGLE_STRIP(123 И 234 И 345 И 456)
  */
 glBegin(GL_TRIANGLES);

 glVertex2d(0.0,0.9);
 glVertex2d(0.9,-0.9);
 glVertex2d(-0.9,-0.9);
 glEnd();
}
void MyWindow::setupGL()
{
 glClearColor(0.1f,0.25f,0.45f,1.0f);
}

