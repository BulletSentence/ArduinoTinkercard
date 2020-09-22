# Arduino & Tinkercard ⚙
Arduino programming using Tinkercard simulator

-----

# Ports 📌
<details>
<summary>GND</summary>
<dl>
  <dt> * Ground Port</dt>
  <dd> </dd>
</dl>
</details>

<details>
<summary>5V</summary>
<dl>
  <dt>* Volt Port</dt>
  <dd> </dd>
</dl>
</details>

-----

# Wires 🔌
<details>
<summary>Black - Ground Wire</summary>
<dl>
  <dt>* Ground Wire</dt>
  <dd>It takes energy from the circuit</dd>
</dl>
</details>

<details>
<summary>Red - Energy Wire</summary>
<dl>
  <dt>* Volt Wire</dt>
  <dd>It gives energy to the circuit</dd>
</dl>
</details>

-----

# Peripherals 🛠

<details>
<summary>Protoboard</summary>
<dl>
  <dt>Device with multiple serial ports</dt>
  <dd>Connections are shared in series with other port pins</dd>
</dl>

![Capture](https://user-images.githubusercontent.com/37451620/93883412-e803cf80-fcb7-11ea-852d-2c1eee68b2cc.JPG)

</details>

<details>
<summary>Resistor</summary>

![Capture](https://user-images.githubusercontent.com/37451620/93900120-66b63800-fccb-11ea-996b-6036b00c841a.JPG)

</details>

------

# Setting Up Things 🕹
<details>
<summary>Setting up a Motor</summary>
<dl>
  <dt>1. Connect the red wire on 5v port</dt>
  <dd>The red wire is for volts</dd>

  <dt>2. Connect the black wire on GND port</dt>
  <dd>The black one is for grounding</dd>
</dl>

![Capture](https://user-images.githubusercontent.com/37451620/93835796-ccb4a800-fc56-11ea-83eb-242b0519ef4e.PNG)

</details>



<details>
<summary>Setting up a Motor with Protoboard</summary>
<dl>
  <dt>1. Connect the red wire on the protoboard</dt>
  <dd>The red wire is for volts</dd>

  <dt>2. Connect the black wire on a diferent protoboard port (vertical)</dt>
  <dd>The black one is for grounding</dd>
  
   <dt>3. Connect the 5v volt port from arduino on a vertical pin where is placed the motor red wire</dt>
  <dd>They share the same vertical ports so they need to be in the same vertical line</dd>
  
   <dt>4. Connect the Ground volt port from arduino on a vertical pin where is placed the motor Black wire</dt>
  <dd>They share the same vertical ports so they need to be in the same vertical line</dd>
</dl>

![Capture](https://user-images.githubusercontent.com/37451620/93836886-895c3880-fc5a-11ea-8936-c4bb0115f6b5.PNG)

</details>

