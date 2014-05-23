/* 
 * Simple Hello world program for Arduino.
 * The led blinks every second and an ASCII  
 * character message is sent to the serial port
 */

#define LED 13
#define TIME 1000
#define BIT_RATE 9600

void setup( void )
{
  pinMode( LED, OUTPUT );
  Serial.begin( BIT_RATE );
}

void loop( void )
{
  digitalWrite( LED, HIGH );
  Serial.println( "Hello! Now the led is ON!" );
  delay( TIME );
  digitalWrite( LED, LOW );
  Serial.println( "Hello! Now the led is OFF!" );
  delay( TIME );
}
