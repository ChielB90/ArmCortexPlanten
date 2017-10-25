/* deze functie checkt een millisecone lang hoeveel statechanges
 * er zijn op de pin. gedeelt door twee om van de state changes
 * aantal periodes te maken en keer duizend om er het aantal 
 * periodes per seconde van te maken.
 * de functie returnt een float. de ferquentie.
 * SENSORPIN moet in de main file gedefinet worden.
 */

float checkHumidity() //checkDankness of checkDank zou beter kloppen
{
  float count = 0;
  bool pinState = digitalRead(SENSORPIN);
  
  for(int i = micros()+1000; i > micros(); i = micros()) 
  {
    if (pinState != digitalRead(SENSORPIN)) count++;
    
    pinState = digitalRead(SENSORPIN);
  }

  //Serial.print("frequency is: ");
  //Serial.println(count * 500);
  
  return count * 500; 
}


