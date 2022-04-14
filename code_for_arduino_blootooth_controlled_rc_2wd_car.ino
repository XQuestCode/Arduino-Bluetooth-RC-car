char t;
 
void setup() {
pinMode(11,OUTPUT);   //left motors forward
pinMode(12,OUTPUT);   //left motors reverse
pinMode(13,OUTPUT);   //right motors forward
pinMode(10,OUTPUT);   //right motors reverse
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);    //
pinMode(7,OUTPUT);    //front led
Serial.begin(9600);
 
} 
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //move forward(all motors rotate in forward direction)
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(t == 'B'){      //move reverse (all motors rotate in reverse direction)
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
 
else if(t == 'L'){      
  digitalWrite(13,HIGH);//turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
}
 
else if(t == 'R'){      //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
  digitalWrite(11,HIGH);
}

else if(t == 'W'){    //turn led on or off)
  digitalWrite(9,HIGH);
}
else if(t == 'w'){
  digitalWrite(9,LOW);
}
 
else if(t == 'S'){      //STOP (all motors stop)
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
else if(t == 'V'){    //horn on
  digitalWrite(8,HIGH);
}
else if(t== 'v') {
  digitalWrite(8,LOW);
}
else if(t == 'U'){   // back light
  digitalWrite(7,HIGH);
}
else if(t== 'u') {
  digitalWrite(7,LOW);
}

delay(100);
}
