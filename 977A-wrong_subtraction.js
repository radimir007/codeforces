const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
  });

readline.question("", (input) => {
    
    const numbers = input.split(" ")

    let result = parseInt(numbers[0])

    for (let i = 0; i < parseInt(numbers[1]); i++) {
        if (result % 10 == 0) {
            result /= 10
        } else {
            result--
        }
    }

    console.log(result)

    readline.close()
})