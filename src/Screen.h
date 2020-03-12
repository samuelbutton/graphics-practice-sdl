/*
 * Screen.h
 *
 *  Created on: Mar 10, 2020
 *      Author: sambutton
 */

#include <SDL.h>

#ifndef SCREEN_H_
#define SCREEN_H_

namespace samsPackage {

class Screen {
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;


public:
	Screen();
	bool init();
	bool processEvents();
	void update();
	void setPixel(int x, int y, Uint8 r, Uint8 g, Uint8 b);
	void close();
	void clear();
	void boxBlur();
};

} /* namespace samsPackage */

#endif /* SCREEN_H_ */
