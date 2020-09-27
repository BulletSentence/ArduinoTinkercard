#define RED_LED 2
#define ON 1
#define OFF 0
#define ONE_SECOND 1000

// Variables Defined
// ON
// OFF
// ONE_SECOND


void setup()
{
  Serial.begin(9600);
  pinMode(RED_LED, OUTPUT);

}

void led_flash(){
  digitalWrite(RED_LED, ON);
  delay(ONE_SECOND);
  digitalWrite(RED_LED, OFF); 
  delay(ONE_SECOND);
}

void loop()
{
  Serial.println(RED_LED);
  led_flash();
  
}

