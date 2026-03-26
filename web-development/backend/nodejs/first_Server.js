const http = require('http'); // importing built-in HTTP module
const fs = require('fs'); // importing file system module

const myserver = http.createServer(function (req, res) {
    const data = fs.readFileSync('D:/Vishal mahajan/nodeJS/table1.html');
    res.writeHead(200, { 'Content-Type': 'text/html' }); // status code should be 200
    res.end(data);
});

const port=8000
myserver.listen(port,function(err){
    if(err){throw err}
    console.log(' Server is running on http://localhost:${port} ');
});

// myserver.listen(3000, () => {
//     console.log('Server is running on http://localhost:3000');
// });
