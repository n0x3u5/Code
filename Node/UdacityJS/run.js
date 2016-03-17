var library = require("./library.js");

var zed = new library.Car(3);
zed.move();

var amy = new library.Van(9);
console.log("Amy started at " + amy.loc + ".");
amy.move();
console.log("Amy moved to " + amy.loc + ".");
amy.grab();

// var ben = new library.Car(1);
// console.log("Ben started at " + ben.loc + ".");
// ben.move();
// console.log("Ben moved to " + ben.loc + ".");
