//Aaryan arora
#include <IRremote.h>
int IRpin = 12; // Data pin for IR reciever
IRrecv irrecv(IRpin);
decode_results results;
void setup()
{
 Serial.begin(9600);
 irrecv.enableIRIn(); // Start the receiver
}
void loop()
{
 if (irrecv.decode(&results))
 {
 /*Serial.println(results.value); // Print the Serial
'results.value'
 */
 if(results.value==2659543774)
 {
  Serial.println("OK");
  delay(100);}
  else if(results.value==3273486638)
  {
    Serial.println("Vup");
    delay(10);
  }
  else if(results.value==1240786751)
  {
    Serial.println("Vdown");
    delay(10);
  }
  else if(results.value==1539061182)
  {
    Serial.println("forward");
    delay(10);
  }
  else if(results.value==186864975)
  {
    Serial.println("rewind");
    delay(10);
  }
  else if(results.value==2719332322)
  {
    Serial.println("i");
    delay(10);
  }
  else if(results.value==2825787859)
  {
    Serial.println("k");
    delay(10);
  }
  else if(results.value==3480262093)
  {
    Serial.println("j");
    delay(10);
  }
  else if(results.value==3463484474)
  {
    Serial.println("l");
    delay(10);
  }
  else if(results.value==2060953561)
  {
    Serial.println("Mup");
    delay(10);
  }
  else if(results.value==1421800062)
  {
    Serial.println("Mdown");
    delay(10);
  }
  else if(results.value==535975662)
  {
    Serial.println("Mleft");
    delay(10);
  }
  else if(results.value==1557726997)
  {
    Serial.println("Mright");
    delay(10);
  }
  else if(results.value==3757616022)
  {
    Serial.println("Mclick");
    delay(10);
  }
  else
  {
    Serial.println(results.value);
    delay(10);
  }
 irrecv.resume(); // Receive the next value
 }
} 
