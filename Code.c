from machine import Pin, I2C, PWM
from time import sleep
from hcsr04 import HCSR04
from i2c_lcd import I2cLcd

# --- ESP32 Pin Setup ---
sensor = HCSR04(trigger_pin=5, echo_pin=18)
led = Pin(14, Pin.OUT)
servo_motor = PWM(Pin(15), freq=50)

# LCD: SDA=21, SCL=22
i2c = I2C(0, sda=Pin(21), scl=Pin(22), freq=400000)
lcd = I2cLcd(i2c, 0x27, 2, 16)

def set_servo_angle(angle):
    duty = int(((angle / 180) * 6554) + 1638)
    servo_motor.duty_u16(duty)

def open_gate():
    set_servo_angle(90)
    led.on()
    lcd.clear()
    # If write() fails, try print() or display()
    lcd.write("Gate: Open") 
    sleep(2)

def close_gate():
    set_servo_angle(0)
    led.off()
    lcd.clear()
    lcd.write("Gate: Closed")
    sleep(2)

# Startup
lcd.clear()
lcd.write("System Ready")
sleep(1)

while True:
    try:
        distance = sensor.distance_cm()
        print("Distance:", distance)
        
        if 0 < distance < 20:
            open_gate()
        else:
            close_gate()
    except Exception as e:
        print("Error:", e)
        
    sleep(1)