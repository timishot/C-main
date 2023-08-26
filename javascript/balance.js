var balance = 10500;
var cameraOn = true;

function steal(amount){
	cameraOn = false;

	if (amount < balance){
		balance = balance - amount
	}
	return amount;
	cameraOn = true;
}

console.log(steal(200))
console.log(balance);