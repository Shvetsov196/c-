/*
 * MyWindow.cpp
 *
 *  Created on: 3 ���. 2022 �.
 *      Author: ����
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

 //������ ����� glPointSize(8.0f);

 //������� ����� glLineWidth(8.0f);
 /*
  * GL_POINT - ����� �� ����������� (�� ���� �� 4 ���������)
  * GL_LINES - ����� �� ���� ������
  * GL_LINE_STRIP - �������� ����� (�� ���� ������ �� �������)
  * GL_LINE_LOOP - �������� ����� � �������� �������� (������ ����� �����������
  *  � ���������, ������� ������)
  * GL_TRIANGLES - �� ���� ������ �������� �����������
  * GL_QUADS -������ ��������������� �� ���� ������������� (1,2,3 � 1,3,4)
  * GL_TRIANGLE_FAN (123 � 134 � 145 � �.�.)
  * GL_TRIANGLE_STRIP(123 � 234 � 345 � 456)
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

