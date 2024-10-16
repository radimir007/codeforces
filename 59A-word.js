const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
  });

readline.question("", (input) => {
    let lowercaseCount = 0
    let upperCaseCount = 0
    for (let i = 0; i < input.length; i++) {
        if (input.charCodeAt(i) <= 90 && input.charCodeAt(i) >= 65 ) {
            lowercaseCount++
        } else {
            upperCaseCount++
        }
    }

    if (lowercaseCount <= upperCaseCount) {
        console.log(input.toLowerCase())
    } else {
        console.log(input.toUpperCase())
    }

    readline.close()
})