# AUTOMATED DUSTBIN
 
**OVERVIEW:**

Although using dustbin do not involves that much of effort but while multitasking or even 
being busy with some other
engagement, can make the use cumbersome.
So here is the automation!!The lid of this dustbin gets lifted when some garbage is bought
near its opening.


### SOME MAJOR COMPONENTS USED:
* hc-Sr04 ultrasonic ranging module
* Servo motor
### The project can be divided into two basic parts:
 **inputs and processing**
 **outputs**
    
* INPUTS AND PROCESSING:
the inputs basically consist of the data received from the hc-Sr04 ultrasonic ranging
module at a continuous rate. These datas which are essentially values of the distances
measured by the sensor,are sent to the microcontroller which then processes the input 
data. The microcontroller used is Arduino UNO. The microcontroller is attached along 
with the dustbin and is powered by a battery attached with it.
             
The input received by the microcontroller is then analysed by it.It then sends signal 
to the Servo motor which then acts upon it.
* OUTPUT:
The output of it is basically act of opening of the lid of the dustbin .It is achieved 
by a servo motor which is powered with a 5V supply from the Arduino UNO board. Appropriate
measures are taken to tackle the sudden high current draws by the servo motor,which otherwise
would have damaged the microcontroller circuit board.for this a capacitor of minimum 
100 micro Farad is attached in parallel to the source voltage to the servo.The capacitor
would provide the extra current if the servo motor would need without causing damage to 
the Arduino board.
## WORKING:
The working of the automated dustbin is quite simple.The distances monitored by the sensor are 
taken as inputs and are sent to the microcontroller through the GPIO(general purpose input/output)
pins on the Arduino. It is to note that the pins used while connecting the servo motor is a PWM
(pulse width modulation) pin on the Arduino UNO(here pin number 9 is used).In the processing part
the microcontroller with the appropriate code checks wheather the distance between the approaching
garbage and the lid has reached a certain point, if it does it sends a signal through the GPIO pin
which is a PWM one to the servo motor which rotates its shaft by an angle pf 90 degrees, and thereby
uncovering the dustbin. After a specified time the shaft rotate back to its normal position.
            
            
            
            
