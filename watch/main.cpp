/*
 * main.cpp
 *
 *  Created on: 3 ???. 2022 ?.
 *      Author: ????
 */
/*
 * ??????????
 *
 * windows+mingw:
 * 		mingw32
 * 		SDL2main
 * 		SDl2
 * 		SDL2_image
 * 		opengl32
 * 		glu32
 * */
#include <iostream>
#include <stdexcept>

#include <SDL2/SDL.h>
#include <SDL2/SDL_main.h>

#include "MyWindow.h"
int main(int,char **)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	try{
		MyWindow w;

		w.main_loop();
	}catch(const std::exception &e){
		std::cerr<<"????????? ??????:\n"<<
				e.what()<<
				std::endl;
		exit(1);
	}




	return 0;
}
