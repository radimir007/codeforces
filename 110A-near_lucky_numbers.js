const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
  });

readline.question("", (input) => {
    for (let char of input) {
        if (char !== '4' && char !== '7') {
            console.log("NO")
            readline.close()
            return
        }
    }

    console.log("YES")

    readline.close()
})