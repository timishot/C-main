const userLeft = false
const userWathingCatMeme = false

// function watchTutorialCallback(callback, errorCallback) {
// 	if (userLeft) {
// 		errorCallback({name: 'User Left',
// 	 			message: ':('})
// 	} else if (userWathingCatMeme){
// 		errorCallback({name: 'user watching cat meme\n',
// 				message:'webDevSimplified < cat'})
// 	} else {
// 		callback('Thumbs up and Subscribe')
// 	}
// }

// watchTutorialCallback((message) => {
// 	console.log('success:' + message)
// }, (error) =>{
// 	console.log(error.name + ' ' + error.message)
// })


function watchTutorialPromise() {
	return new Promise((resolve, reject) =>{
		if (userLeft) {
			reject({name: 'User Left',
					 message: ':('})
		} else if (userWathingCatMeme){
			reject({name: 'user watching cat meme\n',
					message:'webDevSimplified < cat'})
		} else {
			resolve('Thumbs up and Subscribe')
		}
	})
}

watchTutorialPromise().then((message) => {
	console.log('success:' + message)
}).catch((error) =>{
	console.log(error.name + ' ' + error.message)
})
