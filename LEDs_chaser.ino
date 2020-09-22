int counter;
int led;
void setup(){
	counter=6;
	for(int i=2;i<counter;i++){
		pinMode(i,OUTPUT);
	}
}
void flash(int led,int duration){
	digitalWrite(led,HIGH);
	delay(duration);
	digitalWrite(led,LOW);
	delay(duration);
}
void loop(){
	led=2;
	for(int i=2;i<8;i++){
	
	flash(led,1000);
	if(i<5)
	led++;
else
	led--;
}
	}