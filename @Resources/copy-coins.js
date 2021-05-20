const fs = require('fs');

const content = fs.readFileSync('./Coin1/Coin1.ini', 'utf16le');

for (let i = 2; i <= 3; i++) {
    // fs.mkdirSync(`./Coin${i}`);
    fs.writeFileSync(`./Coin${i}/Coin${i}.ini`, content.replace(/Coin1/g, `Coin${i}`), {encoding: 'utf16le'});
}
