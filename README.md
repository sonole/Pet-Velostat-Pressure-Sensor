## Introduction
The Velostat Pressure Sensor Activated Pet Fountain is a creative and functional project designed to provide your pets with a convenient and hygienic way to access water.  
This project utilizes a Velostat pressure sensor to detect the presence of your pet and trigger a 5V relay, which in turn controls the opening of a pet fountain.


## Demonstration
#### Video demonstration (no cats were harmed while taking these pictures)

[![Video demo](https://apaliampelos.me/assets/images/github/pet-velostat-pressure-sensor/thumbnail.png)](https://apaliampelos.me/assets/images/github/pet-velostat-pressure-sensor/demonstration.mp4)
#### Relay Off  
<img src="https://apaliampelos.me/assets/images/github/pet-velostat-pressure-sensor/relay_off.jpg" alt="Relay OFF" width="50%"/>

#### Relay On  
<img src="https://apaliampelos.me/assets/images/github/pet-velostat-pressure-sensor/relay_on.jpg" alt="Relay ON" width="50%"/>


## Components 
- Velostat Pressure Sensor: Velostat is a pressure-sensitive material that changes its resistance when pressure is applied. In this project, the Velostat sensor serves as the key element for detecting your pet's presence.
- Arduino Microcontroller: An Arduino microcontroller serves as the brain of the project, facilitating the interaction between the Velostat sensor, 5V relay, and the pet fountain. It processes the sensor data and controls the relay accordingly.
- 5V Relay Module: The 5V relay acts as a switch that is controlled by the Velostat sensor. When the sensor detects pressure, it triggers the relay to activate the pet fountain.
- Power Supply: A stable power supply, typically 5V, is required to power the Arduino, the Velostat sensor, and the 5V relay.
- USB A Female: The output that will give power to the Pet Fountain. The pet fountain is a water dispenser that is designed to provide a continuous flow of fresh water for your pets. 


## Schematics
<img src="https://apaliampelos.me/assets/images/github/pet-velostat-pressure-sensor/schematics.png" alt=" Schematics"/>


## Project Steps  
### Step 1: Assemble the Hardware  
Gather all the necessary components and connect the Velostat pressure sensor, 5V relay, Arduino microcontroller, and pet fountain as per the provided schematics. Ensure proper wiring and connections to avoid any issues.  
<img src="https://apaliampelos.me/assets/images/github/pet-velostat-pressure-sensor/step_1.jpg" alt="Step 1" width="50%"/>
<img src="https://apaliampelos.me/assets/images/github/pet-velostat-pressure-sensor/step_2.jpg" alt="Step 2" width="50%"/>
<img src="https://apaliampelos.me/assets/images/github/pet-velostat-pressure-sensor/step_3.jpg" alt="Step 3" width="50%"/>
<img src="https://apaliampelos.me/assets/images/github/pet-velostat-pressure-sensor/step_4.jpg" alt="Step 4" width="50%"/>

### Step 2: Program the Arduino  
Write and upload the necessary Arduino code to read data from the Velostat sensor and control the 5V relay. The code should be designed to respond to pressure changes and activate the relay when a pet is detected.  

### Step 3: Calibration/Testing
Calibrate the Velostat sensor to ensure accurate detection of your pet's pressure. This step involves adjusting the sensitivity of the sensor to match the weight and size of your pet.  
Here you can alter the values ```thresholdValue``` which decleres the value to that will trigger the realy, and the ```timeThreshold``` which species after how many ms the relay will be triggered.  
Test the entire system to verify that the Velostat sensor accurately detects your pet's presence, triggering the relay to open the pet fountain. Make any necessary adjustments to optimize performance.  

### Step 5: Finalization  
Secure all connections, tidy up the wiring, and make any final adjustments to the project. Ensure that the pet fountain is functioning correctly and providing a reliable water source for your pets.
