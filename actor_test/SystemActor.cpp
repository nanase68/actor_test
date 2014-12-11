/*
 * SystemActor.cpp
 *
 *  Created on: 2014/12/09
 *      Author: Ys
 */

#include "mbed.h"
#include "SystemActor.h"
#include "Message.h"
#include "TickerComposite.h"

SystemActor sysActor;

/*
 *  periodic time : sec
 */
bool SystemActor::setPeriodicTask(Actor *dest, Message *msg, float periodicTime){
	TickerComposite *tc = new TickerComposite(dest, msg, periodicTime);
	SystemActor::tcVector.push_back(tc);

	return true;
}

SystemActor::SystemActor() {
	// TODO Auto-generated constructor stub

}

SystemActor::~SystemActor() {
	// TODO Auto-generated destructor stub
}

std::vector<TickerComposite*> SystemActor::tcVector;
