const fs = require('fs');

const content = fs.readFileSync('../Drive1/Drive1.ini', 'utf16le');

for (let i = 2; i <= 6; i++) {
    fs.mkdirSync(`../Drive${i}`);
    fs.writeFileSync(`../Drive${i}/Drive${i}.ini`, content.replace(/Drive1/g, `Drive${i}`), {encoding: 'utf16le'});
}
