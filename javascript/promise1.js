const myPromise = new Promise((resolve, reject) => {
	// Simulate an asynchronous operation (e.g., fetching data)
	setTimeout(()=>{
		const sucess = true; // Change to false to simulte a  rejection
		if (sucess) {
			resolve("Operation suceeded!");
		} else{
			reject(new Error("Operation failed!"));
		}
	}, 1000); // simulate a delay of 1 second
});

myPromise
.then(result => {
	console.log("Fufillled:", result);
})
.catch(error=> {
	console.error("Rejected:", error);
})

