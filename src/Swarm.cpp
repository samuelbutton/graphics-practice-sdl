/*
 * Swarm.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: sambutton
 */

#include "Swarm.h"
//#include "Particle.h"

namespace samsPackage {

Swarm::Swarm() {
	m_pParticles = new Particle[NPARTICLES];
	last_time = 0;
}

void Swarm::update(int elapsed) {

	int interval = elapsed - last_time;

	for (int i = 0; i < Swarm::NPARTICLES; i++) {
		m_pParticles[i].update(interval);
	}

	last_time = elapsed;
}

Swarm::~Swarm() {
	delete[] m_pParticles;
}

} /* namespace samsPackage */
