//////////////////////////////////////////////////////////////////////////////
// prog: sensor_mutex.c

// note: for OSMboxCreate, see main.c!
// comm: I2C protocol is used for communication with the sensors.
// auth: CB
//////////////////////////////////////////////////////////////////////////////



#include <includes.h>
#include "main.h"

#define SLAVE_ADDRESS 20

void getData(char address)
{
	address++ = address << 1; 			        //bitshift address naar links en vul de lege bit met een een voor READ
	I2C_GenerateSTART (I2C1, ENABLE); 		    //stuur START
	I2C_Send7bitAddress (I2C1, address +1); 	//stuur adres
	I2C_ReceiveData (I2C1);	 				    //leest de i2c buffer uit MISSCHIEN IS DIE NIET ZO SNEL VOL PAS OP
	
}

void Sensor_Task(void *pdata)
{
	I2Cinit();
	
	while(1){
		getData(SLAVE_ADDRESS);
		
		OSTimeDly(LOOP_DELAY);
	}
	
}
