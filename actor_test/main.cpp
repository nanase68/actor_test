#include "mbed.h"
#include "Actor.h"
#include "Message.h"
#include "GlobalQueue.h"

DigitalOut led1(LED1);


Actor actor;



int main() {
	MessageInt message(&actor, &actor, 0);
	gqueue.enqueue(&message);

	actor.start();

}
