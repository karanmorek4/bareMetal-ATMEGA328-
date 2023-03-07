#include <Arduino.h>

#define PORT_B  *((volatile byte*) 0x25)
#define DDR_B   *((volatile byte*) 0x24)


void setup()
{
  DDR_B = 32; // 0010000
}

void loop()
{
  // volatile byte* tmp = 0x25;
  // *tmp = 32;

  // *((volatile byte*) 0x25) = 32;

  PORT_B = 32;

  for (long i = 0; i < 1000000; i++)
  {
    // *tmp = 32;
    // *((volatile byte*) 0x25) = 32;

    PORT_B = 32;
  }

  // *tmp = 0;
  // *((volatile byte*) 0x25) = 0;
  PORT_B = 0;
  for (long i = 0; i < 1000000; i++)
  {
    // *tmp = 0;
    // *((volatile byte*) 0x25) = 0;
    PORT_B = 0;
  }
}

/*


void loop()
{
  PORTB = 32;
  for(long i = 0 ; i < 1000000; i++)
  {
    PORTB = 32;
  }
  PORTB = 0;
  for(long i = 0 ; i < 1000000; i++)
  {
    PORTB = 0;
  }

}
*/
