# Smart-Street-Lighting-System
Smart Street Lighting System based on vehicle movement using Arduino. A cost-effective, energy-efficient street lighting solution that uses PIR and LDR sensors to control LED streetlights based on vehicle movement and ambient light. Designed to reduce power consumption and promote sustainable urban infrastructure.

## 🌟 Features

- **Automatic Day/Night Detection** using an LDR
- **Motion Detection** using a PIR sensor
- **Adaptive Light Control**:
  - Dim lights during nighttime with no vehicle
  - Increase brightness when a vehicle is detected
  - Lights stay bright briefly after vehicle passes
- **Energy Efficient** and suitable for sustainable development

## 🧰 Components Used

| Component              | Description                                |
|------------------------|--------------------------------------------|
| Arduino Uno            | Microcontroller                            |
| PIR Motion Sensor      | Detects vehicle movement                   |
| LDR (Light Sensor)     | Detects ambient light level                |
| LED Streetlight (PWM)  | Simulated using an LED or actual bulb      |
| Resistors, Wires       | For circuit setup                          |
| Power Supply           | 5V regulated                               |

## 🖼️ Working Principle
1. **Night Detection**: LDR checks for low ambient light.
2. **Motion Trigger**: PIR detects moving vehicles.
3. **Brightness Control**:
   - Bright when motion is detected.
   - Dim when no vehicle is present.
4. **Auto Off**: Lights dim again after ~30 seconds of no motion.

> Note: Use resistors where needed. You can simulate the LED with brightness control using PWM in prototyping platforms like Tinkercad or real components.

## 🔄 Future Improvements
- Integration with **Solar Power**
- **IoT-based Monitoring** and control via mobile/web
- **Advanced sensors** for multi-lane detection
- **Scalability** to large urban areas

## 📝 License
This project is licensed under the [MIT License](LICENSE).

## 🙋‍♀️ Author
**Akshita Sondhi**  
Student (ECE), IIIT-Naya Raipur  
Enthusiastic about electronics, AI, and real-world applications of technology.
