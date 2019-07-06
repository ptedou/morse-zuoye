# 开源硬件实战总结
> 彭云翔    
> 2019/07/02-2019/07/05

## 第一天 入门介绍
*  为什么要学习开源硬件
*  如何学习
*  几个常用软件      
1.  arduino    
2. fritzing    
3. processing

作业：注册github账号，下载 arduino，fritzing，processing软件
## 第二天 arduino编程
*  arduino基本编程语言，以及串口的介绍
* arduino基本操作
* arduino类库操作  
  实例 morse代码 
   
```  morse.cpp
#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(250);
	digitalWrite(_pin,LOW);
	delay(250);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(1000);
	digitalWrite(_pin,LOW);
	delay(250);
}    
```
作业：morse代码
## 第三天 元器件及电路
*  使用在线模拟网站    
*  小车电路图及代码   
* 7位译码器的使用   
* CD4511的使用   

作业：     
1. 小车代码与电路图    
2. 数码管代码和电路图
## 第四天 总结
* 以仿真形式完成第二天内容
* 答疑环节
* 自行总结 

作业：撰写总结报告