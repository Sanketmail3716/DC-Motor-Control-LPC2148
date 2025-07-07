# 🚀 LPC2148 Motor Control System

This project demonstrates how to control the direction of a DC motor using the **LPC2148 ARM7 microcontroller**. The motor's rotation direction (clockwise or counter-clockwise) is controlled using two push switches. The system also includes two LEDs that indicate the current direction of the motor.

---

## 📁 Project Details

- **Microcontroller**: LPC2148 (ARM7 TDMI-S)
- **IDE Used**: Keil µVision
- **Programming Language**: Embedded C
- **Input**: 2 Push Buttons (SW1, SW2)
- **Output**: DC Motor via GPIO (IN1, IN2, EN), Direction Indicator LEDs

---

## 🛠️ Pin Configuration

| Component     | LPC2148 Pin |
|---------------|-------------|
| Motor IN1     | P0.7        |
| Motor IN2     | P0.8        |
| Enable Motor  | P0.9        |
| Switch SW1    | P0.14       |
| Switch SW2    | P0.15       |
| LED1 (CW)     | P0.17       |
| LED2 (CCW)    | P0.18       |

---

## ⚙️ How It Works

- **SW1 Pressed**: Motor rotates **clockwise**, LED1 glows
- **SW2 Pressed**: Motor rotates **anticlockwise**, LED2 glows
- **Delay Function**: Provides basic software debounce and motor timing



## 💻 Code Structure

- `main()` function initializes GPIO and handles logic
- `Delay()` function provides software-based delay
- Code written in C using Keil uVision and flashed using a suitable programmer (e.g., Flash Magic)

---

## 📦 Files Included

- `main.c` - Motor control source code
- `README.md` - This documentation file
- (Add `.hex` or schematic files if needed)

---

## ✅ Future Improvements

- Add PWM for speed control
- Add LCD or Serial feedback
- Use interrupts instead of polling

---

## 🔖 License

This project is open-source and free to use for educational and non-commercial purposes.

---

## 🙌 Acknowledgments

Made as part of embedded systems practice with LPC2148 using GPIO control.

