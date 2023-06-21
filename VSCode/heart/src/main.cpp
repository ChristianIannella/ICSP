#include <Arduino.h>
#include <avr/sleep.h>
#include <avr/power.h>

int randNumber;

const byte LED_1 = 0;
const byte LED_2 = 1;
const byte LED_3 = 3;
const byte LED_4 = 4;

const byte Button = 2;

volatile byte last_sw_state = true;
volatile byte state = false;
bool effect = false;

ISR(PCINT0_vect)
{
  byte sw_state;
  sw_state = digitalRead(Button);
  if (sw_state == LOW)
  {
    state = true;
  }
  last_sw_state = sw_state;
}

void enter_sleep()
{
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  ADCSRA = 0;
  power_all_disable();
  sleep_enable();
  sleep_cpu();
  sleep_disable();
  power_all_enable();
}

void light_spin()
{
  state = false;
  effect = !effect;

  for (int x = 0; x < 10; x++)
  {
    digitalWrite(LED_1, HIGH);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, LOW);
    digitalWrite(LED_4, LOW);
    delay(100);
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, HIGH);
    digitalWrite(LED_3, LOW);
    digitalWrite(LED_4, LOW);
    delay(100);
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, HIGH);
    digitalWrite(LED_4, LOW);
    delay(100);
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, LOW);
    digitalWrite(LED_4, HIGH);
    delay(100);
  }
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
}

void light_beat()
{
  state = false;
  effect = !effect;

  for (int x = 0; x < 10; x++)
  {
    digitalWrite(LED_1, HIGH);
    digitalWrite(LED_2, HIGH);
    digitalWrite(LED_3, HIGH);
    digitalWrite(LED_4, HIGH);
    delay(100);
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, LOW);
    digitalWrite(LED_4, LOW);
    delay(100);
  }
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
}

void setup()
{

  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);

  pinMode(Button, INPUT_PULLUP);

  cli();                // Disable interrupt
  PCMSK |= bit(PCINT2); // D2 / pin 7
  GIFR |= bit(PCIF);    // Clear any outstanding interrupts
  GIMSK |= bit(PCIE);   // Enable pin change interrupts
  sei();                // Enable interrupt
}

void loop()
{
  if (state == true)
  {
    if (effect == true)
    {
      light_spin();
    }
    else
    {
      light_beat();
    }
  }
  state = false;
  enter_sleep();
}