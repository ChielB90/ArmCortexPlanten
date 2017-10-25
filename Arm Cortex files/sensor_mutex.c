//////////////////////////////////////////////////////////////////////////////
// prog: sensor_mutex.c
//       shows the usage of mutual exclusion semaphores or 'mutexes'
// note: for OSMboxCreate, see main.c!
// comm: I2C protocol is used for communication with the sensors.
// auth: CB
//////////////////////////////////////////////////////////////////////////////

#include <includes.h>
#include "main.h"

void getData()
{
	DATA = 1;
}

void Sensor_Task(void *pdata)
{

	getData();
}
