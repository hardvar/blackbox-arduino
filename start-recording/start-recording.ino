const int buttonPin = 2;

void setup() 
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
  pinMode(buttonPin, INPUT);        //button input
  //pinMode(13, OUTPUT);
}
void loop()
{
  sendButtonData();
  //digitalWrite(13, digitalRead(buttonPin));
}

void sendButtonData()
{
    //puts # before the values so our app knows what to do with the data
    if (!digitalRead(buttonPin)) {
        Serial.print("#");
    }
    delay(10);        //added a delay to eliminate missed transmissions
}
