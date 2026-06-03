# C-Style Web Calculator - v.0.1.2

A simple, lightweight web calculator that brings the logic of a classic C program terminal calculator into a clean, modern web interface. 

## 🚀 Features
* **Number Inputs:** Enter your integers & decimel numbers just like the original `scanf` prompts.
* **Terminal Operations:** Choose from Addition (`+`), Subtraction (`-`), Multiplication (`*`), and Division (`/`).
* **Error Prevention:** Built-in safeguards against division-by-zero errors.
* **Short-cut buttons:** New short-cut buttons. (`c`/`s`/`e`)
* **Multiple oparations:** You can now use multiple oparations(`+`/`-`/`*`/`/`/`!`) at a time.

## 🛠️ Built With
* HTML5
* CSS3 (Terminal dark-theme styling)
* Javascript (Form handling and math logic)
* C - language (Terminal version)

## 🏃‍➡️ Code Updates & User manual
* **Calculation:** You can now give & get both the `input` & `output` in `decimel` number.
* **No-count:** You can now `directly` enter the number to calculate.
* **Count-increase:** Now you can count upto `100` numbers.
* **Bug-fixed:** Division bug is now fixed.
* **User display:** More enhanced user display.
* **Reset button:** New button `s` added for reset/start over.
* **Countinue button:** New button `c` added for continue calculating with `prev` result.
* **New exit button:** New exit button `e` added.
* **Force-stop button:** New force stop button `!` added.
* **Oparations:** You can now use multiple oparations at a time.
* **Backspace:** New button `b` was added for backspace.
* **History button:** New history button `h` added to show calculation history. (Terminal only)
* **MORE UPDATE COMING SOON** 

## 💻 How to Run This Project Locally

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Parambrata-Das/Calculator-app-repo.git
   ```
2. Navigate into the project folder.
3. Put the `index.html`,`style.css`,`script.js` files to a single folder.
4. Then run the folder in `VS code` or other compailars.

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
