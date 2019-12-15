int LED_SOCKET = 10;
int INTERVAL = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin( 9600 );
  pinMode( LED_SOCKET, OUTPUT );
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite( LED_SOCKET, HIGH );
  Serial.println( "LED ON" );
  
  delay( INTERVAL );
  
  digitalWrite( LED_SOCKET, LOW );
  Serial.println( "LED OFF" );
  
  delay( INTERVAL );
}
