//////////////////////////////////////////////////////////////////////////////
// prog: sensor_mutex.c
//       shows the usage of mutual exclusion semaphores or 'mutexes'
// note: for OSMboxCreate, see main.c!
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
