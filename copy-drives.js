const fs = require('fs');

const baseContent = fs.readFileSync('./Drive1/Drive1.ini', 'utf16le');

for (let i = 2; i <= 6; i++) {
    const content = baseContent.replace(/Drive1/g, `Drive${i}`);
    fs.writeFileSync(`./Drive${i}/Drive${i}.ini`, content, {encoding: 'utf16le'});
}
