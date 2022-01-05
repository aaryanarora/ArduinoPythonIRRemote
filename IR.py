import serial #Serial imported for Serial communication
import time #Required to use delay functions
import pyautogui
ArduinoSerial = serial.Serial('com3',9600) #Create Serial port object called arduinoSerialData
time.sleep(2) #wait for 2 seconds for the communication to get established
while 1:
 incoming = str (ArduinoSerial.readline()) #read the serial data and print it as line
 print (incoming)
 currentMouseX, currentMouseY = pyautogui.position()
 if 'Mup' in incoming:
 pyautogui.moveTo(currentMouseX, currentMouseY-10)
 if 'Mdown' in incoming:
 pyautogui.moveTo(currentMouseX, currentMouseY+10)
 if 'Mleft' in incoming:
 pyautogui.moveTo(currentMouseX-10, currentMouseY)
 if 'Mright' in incoming:
 pyautogui.moveTo(currentMouseX+10, currentMouseY)
 if 'Mclick' in incoming:
 pyautogui.click()

 if 'OK' in incoming:
 pyautogui.typewrite(['space'],0.2)
 if 'rewind' in incoming:
 pyautogui.hotkey('ctrl', 'left') 
 if 'forward' in incoming:
 pyautogui.hotkey('ctrl', 'right')
 if 'Vup' in incoming:
 pyautogui.hotkey('ctrl', 'up')

 if 'Vdown' in incoming:
 pyautogui.hotkey('ctrl', 'down')
 if 'i' in incoming:
 pyautogui.typewrite(['up'], 0.2)
 if 'k' in incoming:
 pyautogui.typewrite(['down'], 0.2)
 if 'j' in incoming:
 pyautogui.typewrite(['left'], 0.2)
 if 'l' in incoming:
 pyautogui.typewrite(['right'], 0.2)

 incoming = "";
