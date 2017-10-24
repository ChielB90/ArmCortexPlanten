#define SENSORPIN 5
#define SLAVE_ADDRESS 20 

char recieveBuff[256]; //voor de I2CRecieve interrupt

union I2C {
  float f;
  byte* I2Cdata;
}; //omdat de i2c send functie een groep bytes verwacht


void setup() {
  Serial.begin(9600);
  Serial.print("startI2C returns: ");
  Serial.println(startI2C(SLAVE_ADDRESS));
}

void loop() {
  prepareI2Cdata(checkHumidity());
  
  
}
