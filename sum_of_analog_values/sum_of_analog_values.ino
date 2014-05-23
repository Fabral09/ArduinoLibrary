/* 
 * This program reads the values from two analogic ports and sends the sum of them 
 * to the serial port. If the both the values from the analogic ports are not equal 
 * to 0 the led blinks.
 */

#define LED 13
#define ANALOG1 A1
#define ANALOG2 A2
#define BIT_RATE 9600

int analog1Value = 0, analog2Value = 0, sum = 0;

void setup( void )
{
  pinMode( LED, OUTPUT ); 
  Serial.begin( BIT_RATE );
}

void loop( void )
{
  analog1Value = analogRead( ANALOG1 );
  analog2Value = analogRead( ANALOG2 );
  if ( analog1Value != 0 && analog2Value != 0 )
  {
    digitalWrite( LED, HIGH );
    sum = analog1Value + analog2Value;
    Serial.println( "The sum of the values is: " + sum );
  }
  else
    digitalWrite( LED, LOW );
}
