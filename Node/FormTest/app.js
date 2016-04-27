var http = require('http');
var fs = require('fs');
var formidable = require('formidable');
var util = require('util');
var url = require('url');
var urijs = require('urijs');

var server = http.createServer(function (req, res) {
  if (req.method === "GET") {
    if (url.parse(req.url).query !== null) {
      processGetForm(req, res);
    } else {
      displayForm(res);
    }
  } else if (req.method === "POST") {
    processPostForm(req, res);
  }
});

var displayForm = function (res) {
  fs.readFile('node_form.html', function (err, data) {
    res.writeHead(200, {
      'Content-Type'    : 'text/html',
      'Content-Length'  : data.length
    });
    res.write(data);
    res.end();
  });
};

var processPostForm = function (req, res) {
  var form = new formidable.IncomingForm();
  form.parse(req, function(err, fields) {
    res.writeHead(200, {
      'Content-Type'  : 'text/plain'
    });
    res.write(JSON.stringify(fields));
    res.end();
  });
};

var processGetForm = function (req, res) {
  var data = urijs(req.url).query(true);
  res.writeHead(200, {
    'Content-Type'  : 'text/plain'
  });
  res.write(JSON.stringify(data));
  res.end();
}

server.listen(7878);
console.log("Server listening at 7878");
