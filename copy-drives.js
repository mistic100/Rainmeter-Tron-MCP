const fs = require('fs');

const measuresContent = fs.readFileSync('./Drive1/Measures.inc', 'utf8');
const rectangleContent = fs.readFileSync('./Drive1/Rectangle.ini', 'utf16le');
const squareContent = fs.readFileSync('./Drive1/Square.ini', 'utf16le');

for (let i = 2; i <= 6; i++) {
    fs.writeFileSync(`./Drive${i}/Measures.inc`, measuresContent.replace(/Drive1/g, `Drive${i}`), {encoding: 'utf8'});
    fs.writeFileSync(`./Drive${i}/Rectangle.ini`, rectangleContent.replace(/Drive1/g, `Drive${i}`), {encoding: 'utf16le'});
    fs.writeFileSync(`./Drive${i}/Square.ini`, squareContent.replace(/Drive1/g, `Drive${i}`), {encoding: 'utf16le'});
}
