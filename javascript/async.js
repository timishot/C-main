const myPromise = new Promise((resolve, reject) => {
	setTimeout(()=>{reject("Something went wrong!");}, 300);
});

const handleFufiledA = (result)=> {
	console.log("Fulfilled A:", result);
	return "bar"; //passes "bar" to the  next .then()
}

const handRejectedA = (error)=>{
	console.error("Reject A:", error);
	throw new Error("A failed"); // Throws an error to trigger rejection
}

const handleFufiledB = (result)=>{
	console.log("FUlfilled B:", result);
	return Promise.resolve("baz") //Returns a new promise that resolves with "baz"
}

const handRejectedB = (error)=> {
	console.error("Reject B:", error);
	return "qux"; //resolves with "qux"
}

const handleFufiledC = (result)=> {
	console.log("Fufilled C", result);
	// No return value, so the next .then() will recieve undefined
}

const handRejectedC = (error)=> {
	console.error("Reject C:", error);
	// No return value, so the nex then() will receive undefined
}

myPromise.then(handleFufiledA, handRejectedA).then(handleFufiledB, handRejectedB).then(handleFufiledC, handRejectedC)