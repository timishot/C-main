#!/usr/bin/node

const myExecutorFunc = (resolve, reject)=>{
	//Simulate an asynchronous operation
	setTimeout(()=>{
		const success = false;
		if (success){
			resolve("Resolved value");
		}else{
			reject("Reject value");
		}
	}, 1000); // Simulate a delay o f 1 second
}

const handleFulfilled1 = (result)=>{
	console.log("Fulfilled 1", result);
	return "value from handleFufilled1";
}

const handleRejected1 = (error)=>{
	console.log("Rejected 1:", error);
	return "value from handleRejected1";
}

function handleFulfilled2(result) {
	console.log("Fulfilled 2:", result);
	return "Value from handleFulfilled2";
}
      
function handleRejected2(error) {
	console.error("Rejected 2:", error);
	return "Value from handleRejected2";
}



const promiseA = new Promise(myExecutorFunc);
const promiseB = promiseA.then(handleFulfilled1, handleRejected1);
const promiseC = promiseA.then(handleFulfilled2, handleRejected2);