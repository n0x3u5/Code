var size = 8;
var str = "";
for (var i = 1; i <= size; i++) {
  for (var j = 1; j <= size; j++) {
    if((i+j) % 2 == 0) {
      str += " ";
    } else {
      str += "#";
    }
  }
  str += "\n";
}
console.log(str);
