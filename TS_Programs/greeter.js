var Student = (function () {
    function Student(firstName, lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }
    Student.prototype.greet = function () {
        return "Hello, " + this.firstName + " " + this.lastName + "!";
    };
    ;
    return Student;
}());
var student = new Student("Jane", "Doe");
console.log(student.greet());
//# sourceMappingURL=greeter.js.map