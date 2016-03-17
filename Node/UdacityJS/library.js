/**
 * Class to create cars
 * @param  integer loc  The location of the car
 * @return object       The car object instance
 */
exports.Car = function(loc) {
  // DONE:0 Change this from object decorator to a class
  this.loc = loc;
};
exports.Car.prototype.move = function() {
  this.loc++;
};

exports.Van = function(loc) {
  Car.call(this, loc);
};
Van.prototype = Object.create(Car.prototype);
Van.prototype.constructor = Van;
Van.prototype.grab = function() {
  console.log("Grabbed!");
}
