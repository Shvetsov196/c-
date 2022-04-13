/*
 * Texture.cpp
 *
 *  Created on: 12 ���. 2022 �.
 *      Author: ����
 */

#include "Texture.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdexcept>
#include <memory>
#include <GL/gl.h>
#include <GL/glu.h>


Texture::Texture(const char *filename)
{
	// TODO Auto-generated constructor stub
	auto tex_image = std::shared_ptr<SDL_Surface>(
			IMG_Load(filename),
			SDL_FreeSurface);
	if (tex_image == nullptr)
			throw std::runtime_error(
					std::string("�� ���� ������� ���� ��������: ") +
					std::string(SDL_GetError()));
	_width = tex_image->w;
	_height = tex_image->h;
	auto tex_image_2 = std::shared_ptr<SDL_Surface>(
				SDL_CreateRGBSurfaceWithFormat(0, _width, _height, 32, SDL_PIXELFORMAT_RGBA32),
				SDL_FreeSurface);
	SDL_UpperBlit(
				tex_image.get(), nullptr,
				tex_image_2.get(), nullptr);

		glGenTextures(1, &_tex_name);
		glBindTexture(GL_TEXTURE_2D, _tex_name);

		gluBuild2DMipmaps(GL_TEXTURE_2D,
						  GL_RGBA,
						  _width,_height,
						  GL_RGBA,
						  GL_UNSIGNED_BYTE,
						  tex_image_2->pixels);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
		/*
		 * GL_NEAREST -����� ���� ��������� �����
		 * GL_LINEAR - �������� ������������
		 * GL_xxx_MIPMAP_xxx - � �������������� ���� ������������� ����������.
		 */

}
Texture::~Texture()
{

}

