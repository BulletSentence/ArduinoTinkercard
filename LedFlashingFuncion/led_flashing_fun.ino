#define RED_LED 2
#define YELLOW_LED 4
#define GREEN_LED 7
#define BLUE_LED 8

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
  pinMode(BLUE_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
}

void led_flash(int led_port){
  digitalWrite(led_port, ON);
  delay(ONE_SECOND);
  digitalWrite(led_port, OFF); 
  delay(ONE_SECOND);
}

void flashSequence1(){
  led_flash(RED_LED);
  led_flash(YELLOW_LED);
  led_flash(GREEN_LED);
  led_flash(BLUE_LED);
}

void serialView(){
  Serial.println(RED_LED);
  Serial.println(YELLOW_LED);
  Serial.println(GREEN_LED);
  Serial.println(BLUE_LED);
}

void loop()
{
  serialView();
  flashSequence1();
}

