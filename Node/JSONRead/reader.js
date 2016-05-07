var fs = require("fs");

fs.readFile('data.json', 'utf8', function (err, data) {
    var json_obj = JSON.parse(data);
    console.log(JSON.stringify(json_obj));
})