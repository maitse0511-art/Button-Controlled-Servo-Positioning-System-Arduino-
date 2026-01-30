# Button-Controlled-Servo-Positioning-System-Arduino-
An Arduino-based servo motor control system that allows precise angular positioning using push buttons, with visual and audible feedback for direction, neutral position, and mechanical limits.

How It Works:
Two push buttons increment and decrement the servo angle
Internal pull-up resistors ensure stable button readings
The servo angle is constrained between 0° and 180°

LEDs indicate position zones:
🟢Low-angle region
🟡 Mid/transition region
🔴 High-angle or limit warning
A buzzer activates when the servo reaches its mechanical limits

Technical Highlights:
Servo.h library for PWM-based servo control
Button debouncing via timing delay
Boundary protection using software limits
Real-time feedback using LEDs and buzzer
Serial output for debugging and calibration

Hardware Used:
Arduino Uno
SG360 / standard servo motor
Push buttons (×2)
LEDs (Red, Yellow, Green)
Active buzzer
Resistors & jumper wires

Skills Demonstrated:
Embedded C/C++ (Arduino)
Servo motor control (PWM)
Digital input handling with pull-ups
State-based logic
Human–machine interface (HMI)
Safety and limit protection

Future Improvements:
Software debouncing using millis()
Speed control via long-press detection
EEPROM position memory
LCD or OLED position display
PID-based position smoothing
