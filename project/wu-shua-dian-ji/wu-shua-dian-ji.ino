#include <Servo.h>

Servo ESC;      //创建servo来控制ESC

int potValue=0;   //来自模拟引脚的值

void setup() {
  // 把ESC连接到引脚9上
  ESC.attach(9);  //(引脚，最小脉冲宽度，最大脉冲宽度（单位：密耳))
  Serial.begin(9600);
  // ESC.writeMicroseconds(1940);
  // delay(3000);
  ESC.writeMicroseconds(0);
  delay(3000);
  // potValue = 1800;    //1100~1940
}

void loop() {

  potValue = analogRead(A0);  //读取电位器的值
  
  potValue = map(potValue, 0, 1023, 1100, 1940);  //对其进行缩放以便与之配合使用
  Serial.println(potValue);
  ESC.writeMicroseconds(potValue);  //把信号传给ESC
  delay(10);

}
