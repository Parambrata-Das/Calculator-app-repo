// State variables matching your C types
let num = [];         
let n = 0;            
let i = 1;            
let total = 0.0;      
let choice = 's';     

// Listen for keyboard "Enter" key on the input box
document.getElementById('counterInput').addEventListener('keypress', function(e) {
    if (e.key === 'Enter') processInput();
});

// Replicates your number gathering loop block
function processInput() {
    const inputField = document.getElementById('counterInput');
    let val = inputField.value.trim();
    if (val === '') return;

    const safe = (choice === 'c' || choice === 'C') ? 1 : 0;

    // Check for Finish Code Marker '@'
    if (val === '@') {
        finishNumberInput();
        inputField.value = '';
        return;
    }

    // Check for Backspace Symbol 'b'
    if (val.toLowerCase() === 'b') {
        if (n > safe) {
            n -= 2; 
            num.pop(); 
            document.getElementById('resultDisplay').innerText = "Last number erased!!! Re-enter values.";
        } else {
            n = safe - 1;
            num = (safe === 1) ? [total] : []; 
            document.getElementById('resultDisplay').innerText = "Nothing left to erase.";
        }
        n++; 
        updateUIElements();
        inputField.value = '';
        return;
    }

    // Normal float parsing conversion
    let parsedFloat = parseFloat(val);
    if (!isNaN(parsedFloat)) {
        num[n] = parsedFloat;
        n++;
        document.getElementById('resultDisplay').innerText = `Saved number: ${parsedFloat.toFixed(2)}`;
    } else {
        document.getElementById('resultDisplay').innerText = "Invalid input!!! Input any number, b or @";
    }

    updateUIElements();
    inputField.value = '';
}

// Updates array layout strings on your screen
function updateUIElements() {
    if (n >= 100) { finishNumberInput(); return; }
    document.getElementById('inputLabel').innerText = `Enter number ${n + 1}:`;
    if(num.length === 0) {
        document.getElementById('numberList').innerText = "Array Status: [ Empty ]";
    } else {
        document.getElementById('numberList').innerText = "Array Status: [ " + num.map(v => v.toFixed(2)).join(", ") + " ]";
    }
}

// Simulates the end of number entry block triggers
function finishNumberInput() {
    if (n === 0) {
        document.getElementById('resultDisplay').innerText = "No number entered!!! Platform stopped.";
        document.getElementById('entryPhase').classList.add('hidden');
        return;
    }
    total = num[0];
    i = 1; 
    document.getElementById('entryPhase').classList.add('hidden');
    document.getElementById('operationPhase').classList.remove('hidden');
    document.getElementById('resultDisplay').innerText = `Starting calculation total: ${total.toFixed(2)}`;
    evaluateOperationQueueStep();
}

// Loops sequentially through remaining array numbers 
function evaluateOperationQueueStep() {
    if (i < n) {
        document.getElementById('opInstructions').innerHTML = `The next number is: <strong>${num[i].toFixed(2)}</strong><br>Select operation to apply:`;
    } else {
        document.getElementById('operationPhase').classList.add('hidden');
        document.getElementById('postMenuPhase').classList.remove('hidden');
        document.getElementById('resultDisplay').innerHTML = `Final Result: ${total.toFixed(2)}`;
    }
}

// Replicates your switch(ch) calculation block
function applyOperation(ch) {
    if (ch === '!') {
        document.getElementById('resultDisplay').innerText = "Calculator Stopped.";
        document.getElementById('operationPhase').classList.add('hidden');
        return;
    }

    let currentVal = num[i];

    switch(ch) {
        case '+': total += currentVal; break;
        case '-': total -= currentVal; break;
        case '*': total *= currentVal; break;
        case '/':
            if (currentVal === 0) {
                document.getElementById('resultDisplay').innerText = "!!INVALID DIVISION BY ZERO!!";
                document.getElementById('operationPhase').classList.add('hidden');
                return;
            }
            total /= currentVal;
            break;
    }

    document.getElementById('resultDisplay').innerText = `Running total: ${total.toFixed(2)}`;
    i++; 
    evaluateOperationQueueStep();
}

// Handles the continuation decision modes (c, s, e)
function handlePostChoice(mode) {
    choice = mode;
    document.getElementById('postMenuPhase').classList.add('hidden');

    if (choice.toLowerCase() === 's') {
        num = []; n = 0; total = 0.0;
        document.getElementById('entryPhase').classList.remove('hidden');
        document.getElementById('resultDisplay').innerText = "Started fresh array storage.";
        updateUIElements();
    } 
    else if (choice.toLowerCase() === 'c') {
        num = [total]; n = 1;
        document.getElementById('entryPhase').classList.remove('hidden');
        document.getElementById('resultDisplay').innerText = `Using previous total (${total.toFixed(2)}) as base element.`;
        updateUIElements();
    } 
    else if (choice.toLowerCase() === 'e') {
        document.getElementById('resultDisplay').innerText = "GOODBYE!!! THANK YOU FOR CHOOSING US.";
    }
}
