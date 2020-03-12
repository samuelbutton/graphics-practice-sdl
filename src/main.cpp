//============================================================================
// Name        : SDL.cpp
// Author      : Sam Button
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include "Screen.h"
#include "Swarm.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
using namespace samsPackage;

int main() {

	srand(time(NULL));

	Screen screen;

	if (screen.init() == false) {
		cout << "ERROR" << endl;
	}

	Swarm swarm;

	while (true) {
		// Draw particles

		int elapsed = SDL_GetTicks();

//		screen.clear();
		swarm.update(elapsed);

		unsigned char green = 128 * (1 + sin(elapsed * 0.0005));
		unsigned char red = 128 * (1 + sin(elapsed * 0.0006));
		unsigned char blue = 128 * (1 + sin(elapsed * 0.0007));

		const Particle *const pParticles = swarm.getParticles();
		for (int i = 0; i < Swarm::NPARTICLES; i++) {
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * (Screen::SCREEN_WIDTH / 2);
			int y = particle.m_y * (Screen::SCREEN_WIDTH / 2) + Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, green, red, blue);
		}

		screen.boxBlur();

		screen.update();

		if (!screen.processEvents()) {
			break;
		}
	}

	screen.close();

	return 0;
}
