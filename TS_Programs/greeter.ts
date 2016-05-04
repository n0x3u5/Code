interface Person {
    firstName: string;
    lastName: string;
}

class Student implements Person {
    firstName: string;
    lastName: string;
    constructor (firstName: string, lastName: string) {
        this.firstName = firstName;
        this.lastName = lastName;
    }
    greet(): string {
        return "Hello, " + this.firstName + " " + this.lastName + "!";
    };
}

var student = new Student("Jane", "Doe");
console.log(student.greet());