/*
Pattern : 1 
*****
*****
*****
*****

*/
// -----For loop

/*

let print = parseInt(readline("Enter the number of rows"));

for (let row = 0; row < print; row++) {
    let stars = "";
    for (let col = 0; col < print; col++) {
        stars += "*";
    }
    console.log(stars);
}

*/

//---- While loop

let print = parseInt(prompt("Enter the row number:"));

let row = 0;
while (row < print) {
  let stars = "";
  let col = 0;
  while (col < print) {
    stars += "*";
    ++col;
  }
  console.log(stars);
  ++row;
}
