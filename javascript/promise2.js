const myPromise = new Promise((resolve, reject) => {
	const randomNumber = Math.random();
	if (randomNumber < 0.5) {
		resolve("Sucess!");
	} else{
		reject("Error")
	}
});

const handleFufiled = (result)=> {
	console.log("Resolved:", result);
	return "value from handleFulfilled" // Passes a value to the next .then()
}

const handleRejected = (error)=> {
	console.error("Rejectered:", error);
	return "Value from handleRejected";// Passes a value to the next .then()
}

const handleFinally = (value)=> {
	console.log("finally:", value);
}

myPromise
	.then(handleFufiled)
	.catch(handleRejected)
	.then(handleFinally);
