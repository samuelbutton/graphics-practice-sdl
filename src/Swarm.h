/*
 * Swarm.h
 *
 *  Created on: Mar 10, 2020
 *      Author: sambutton
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace samsPackage {

class Swarm {
public:
	const static int NPARTICLES = 5000;
private:
	Particle * m_pParticles;
	int last_time;
public:
	Swarm();
	virtual ~Swarm();
	void update(int elapsed);

	const Particle * const getParticles() {return m_pParticles;}
};

} /* namespace samsPackage */

#endif /* SWARM_H_ */
