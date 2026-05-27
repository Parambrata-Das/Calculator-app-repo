# C-Style Web Calculator

A simple, lightweight web calculator that brings the logic of a classic C program terminal calculator into a clean, modern web interface. 

## 🚀 Features
* **Size Input:** Enter the number of elements(`n`) you want to count.
* **Number Inputs:** Enter your integers just like the original `scanf` prompts.
* **Terminal Operations:** Choose from Addition (`+`), Subtraction (`-`), Multiplication (`*`), and Division (`/`).
* **Exit Simulation:** Includes an `!` button to simulate program exits.
* **Error Prevention:** Built-in safeguards against division-by-zero errors.

## 🛠️ Built With
* HTML5
* CSS3 (Terminal dark-theme styling)
* C language (Form handling and math logic)

## 💻 How to Run This Project Locally

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Parambrata-Das/Calculator-app-repo.git
   ```
2. Navigate into the project folder.
3. Double-click the `index.html` file to open it instantly in any web browser.

## 📜 Original C Code Logic
This project is a web migration of a standard C `switch-case` calculator structure:
```c
switch (ch) {
    case '+': ch = a + b; break;
    case '-': ch = a - b; break;
    case '*': ch = a * b; break;
    case '/': ch = a / b; break;
}
```
