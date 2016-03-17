/*const http = require('http');

const hostname = '127.0.0.1';
const port = 1337;

http.createServer((req, res) => {
  res.writeHead(200, { 'Content-Type': 'text/plain' });
  res.end('Hello World\n');
}).listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});

*/
var http = require("http");
var a=1;
http.createServer(function (request, response) {
	response.writeHead(200, {'Content-Type': 'text/plain'});
	
	var events=require('events');
	var eventEmitter=new events.EventEmitter();
	var connectHandler = function connected() {
	console.log('connection successful.');
	console.log(a);
	a=a+1;
	} 
	if(a<4)
		response.end('Happy Browsing\n');
	else
		response.end('Server is busy\n');
	eventEmitter.on('connection',connectHandler);

	eventEmitter.emit('connection');

}).listen(8081);



/*
var events = require('events');
var http = require("http");

http.createServer(function (request, response) {
	response.writeHead(200, {'Content-Type': 'text/plain'});
	response.end('connecting ......\n');

	var eventEmitter = new events.EventEmitter();

	var connectHandler = function connected() {
	console.log('connection successful.');

	}
	eventEmitter.on('connection', connectHandler);

	eventEmitter.emit('connection');


}).listen(8081); 


*/
