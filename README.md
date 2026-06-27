# C-Style Terminal Calculator - v.0.1.3

A simple, lightweight Terminal calculator which is made by the classic C programs.

## 🚀 Features
* **Number Inputs:** Enter your integers & decimel numbers just like the original `scanf` prompts.
* **Terminal Operations:** Choose from Addition (`+`), Subtraction (`-`), Multiplication (`*`), and Division (`/`).
* **Error Prevention:** Built-in safeguards against division-by-zero errors.
* **Short-cut buttons:** New short-cut buttons. (`c`/`s`/`e`)
* **Multiple oparations:** You can now use multiple oparations(`+`/`-`/`*`/`/`/`!`) at a time.

## 🛠️ Built With
*   **Language:** C (C99 standard or higher)
*   **Libraries used:** `<stdio.h>`, `<stdlib.h>`

## 🎮 Usage Guide

### Data Entry Phase
When the program asks you to `Enter the number:`, use these control characters:
* `@` : **Stop Entry**. Concludes the data entry phase and moves to operations.
* `B` / `b` : **Undo Input**. Erases the last recorded number so you can overwrite it.

### Operation Phase
Apply these operators step-by-step to the remaining queue of numbers:
* `+` : **Addition**
* `-` : **Subtraction**
* `*` : **Multiplication**
* `/` : **Division** (Features an internal protection block against dividing by zero)
* `!` : **Emergency Stop**. Kills the program execution state instantly.

### Session Menu Phase
At the end of a calculation, navigate the execution loop with these single characters:
* `c` : **Continue**. Begins a new session using your last result as the starting number.
* `s` : **Start Over**. Wipes the current numbers and starts a fresh calculation.
* `h` : **History**. Displays all final answers computed in the active session.
* `e` : **Exit**. Closes the program gracefully.

## 💻 How to Run This Project Locally

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Parambrata-Das/Calculator-app-repo.git
   ```
2. Navigate into the project folder.
3. Put the `Terminal C file` to a single folder.
4. Then run the folder in `VS code` or any other compailars.

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

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to fork this project to expand features like calculation with multiple oparation at
a time, history feature to store calculation history.

