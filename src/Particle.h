/*
 * Particle.h
 *
 *  Created on: Mar 10, 2020
 *      Author: sambutton
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace samsPackage {

struct Particle {
	double m_x;
	double m_y;

private:
	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	void update(int interval);

};

} /* namespace samsPackage */

#endif /* PARTICLE_H_ */
