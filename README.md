# ArduinoPythonIRRemote
Control Laptop/PC using IR remote with the help of Arduino and Python


Hardware Component Used:
   Name of Components:-
1. Arduino Uno
2. IR Receiver Sensor
3. Remote Control
4. Breadboard


Every Tv remote on pressing a button sends an IR signal which can be detected through an IR receiver
and be converted to its respective HEX code using an Arduino Library “IRremote”. Using Arduino
IDE, we can code different actions corresponding to pressing a particular button. Here we have send
particular strings corresponding to their buttons to the Serial monitor. Using the python pyserial
library we were able to read the Arduino’s serial monitor from the python IDLE. We used a special
python library PyAutoGUI, which is a cross-platform GUI automation Python module for human
beings. Used to programmatically control the mouse & keyboard. We programmed different computer
keys to be pressed corresponding to the strings being received from the Arduino’s Serial monitor.

DEMO Video:- https://drive.google.com/file/d/1HRrC3b6_7in4-IbcFOSy5WNgEBMBruJK/view?usp=sharing

STEPS:-

1. Make the Circuit connections as mentioned in the Circuit.png

2. Open the "Arduino.ino" file in the Arduino IDE and then include the IRremote library from Include Library section and then browse the zip file from Add .ZIP Library  

<img width="679" alt="image" src="https://user-images.githubusercontent.com/62216774/148251596-eb63b594-426e-48d0-84bf-d5ee3f60e6c2.png">

3. Uncomment this part of the code 
<img width="316" alt="image" src="https://user-images.githubusercontent.com/62216774/148252251-be0b87b2-884d-4c01-a5b3-5a0dd32a3d6b.png">
and comment all the later part before irrecv.resume()
<img width="320" alt="image" src="https://user-images.githubusercontent.com/62216774/148252397-18f61b68-3749-49f7-83fb-ab1975ef5e4c.png">

4. Run the code and Open Serial Monitor to get different values for different buttons of your Remote control and Note them.

5. Now uncomment the code you commented and comment back the DEBUG code of step 3 and now replace the values in the code with the values you got from your respective buttons and Test the code


NOW PYTHON STEPS:-

6.Install Python into your PC from https://www.python.org/downloads/

You can then check the install using Terminal with code "python --version"

<img width="300" alt="image" src="https://user-images.githubusercontent.com/62216774/148253694-18e0f7bd-1024-4aa8-acd0-2c38dfc50765.png">

7. Install libraries PyAutoGUI (Used for controlling computer keys) and PySerial (To communicate with arduino Serial Monitor) using code:-

"pip install pyautogui" and "pip install pyserial" in terminal

8. Open the IR.py file in the Python IDLE and Run that along with arduino code and you would see Laptop responding according to the Remote buttons
