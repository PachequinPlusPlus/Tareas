var numbersOfSquares = 6;
var colors = [];
var pickColor;
var squares = document.querySelectorAll(".square");
var colorDisplayed = document.getElementById("colorDisplayed");
var messageDisplayed = document.querySelector("#message");
var h1 = document.querySelector("h1");
var reset = document.querySelector("#reset");
var modeButtons = document.querySelectorAll(".mode");
var puntaje = document.querySelector("#Points");
var puntiacion=0;

init();

function init() {
		//Mode buttons event listener
	setUpModeButtons();
	setUpSquares();
	rest();
}

function setUpModeButtons() {
	for (var i = 0; i < modeButtons.length; i++) {
	modeButtons[i].addEventListener("click", function(){
		modeButtons[0].classList.remove("selected")
		modeButtons[1].classList.remove("selected")
		this.classList.add("selected");
		this.textContent === "Easy" ? numbersOfSquares = 3: numbersOfSquares = 6;
		rest();
	});
	}
}

function setUpSquares() {
	for (var i = 0; i < squares.length; i++) {
	//Click listeners
	squares[i].addEventListener("click", function() {
		//Grab color 
		var clickedColor = this.style.background;
		//and compare it
		if (clickedColor == pickColor) {
		if(messageDisplayed.textContent != "Correct!"){puntiacion++;}
			//Correct
			messageDisplayed.textContent = "Correct!";
			puntaje.textContent = puntiacion + " Puntos";
			reset.textContent = "Play Again?"
			h1.style.background = clickedColor;
			change(clickedColor);
		}else {
			this.style.background = "#232323"
			messageDisplayed.textContent = "Try again!";
			puntiacion=0;
			puntaje.textContent = puntiacion + " Puntos";

		}
	});
}
}

function rest() {
		//Generate all new colors
	colors = generateRandomColors(numbersOfSquares);
	//Pick a new random color
	pickColor = createColor();
	//Change color displayed
	colorDisplayed.textContent = pickColor;

	reset.textContent = "New Colors"
	messageDisplayed.textContent = "";
	//Change the colors 
	for (var i = 0; i < squares.length; i++) {
		if (colors[i]) {
			squares[i].style.display = "block";
			squares[i].style.background = colors[i];
		}else {
			squares[i].style.display = "none";
		}
	}
	h1.style.background = "steelblue"
}

reset.addEventListener("click", function() {
	rest();
});

function change(color) {
	for (var i = 0; i < squares.length; i++) {
		squares[i].style.background = color;
	}
}

function createColor() {
	var random = Math.floor(Math.random() * colors.length);
	return colors[random];
}

function generateRandomColors(num) {
	var arr = [];
	for(var i = 0; i<num; i++){
		//Get random color and push into array
		arr.push(randomColor());
	}
	return arr;
}
function randomColor()
{
	// Pick red from 0 - 255
	var r = Math.floor(Math.random() * 256);
	// Pick green from 0 - 255
	var g = Math.floor(Math.random() * 256);
	// Pick blue from 0 - 255
	var b = Math.floor(Math.random() * 256);
	return "rgb(" + r + ", " + g + ", " + b + ")";
}