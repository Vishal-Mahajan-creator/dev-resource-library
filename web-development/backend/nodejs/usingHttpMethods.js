const http = require("node:http"); //require is use for importing a module

function req_res_handler(req) {
    if (req.method == "GET") {
        console.log("A new GET request has been received");
    }
    else if (req.method == "POST") {
        console.log("A new POST request has been received");
    }
    else if (req.method == "PUT") {
        console.log("A new PUT request has been received");
    }
    else if (req.method == "PATCH") {
        console.log("A new PATCH request has been received");
    }
    else if (req.method == "DELETE") {
        console.log("A new DELTE request has been received");
    }
    else {
        console.log("Given method is not allowed");
    }
}

const server = http.createServer(req_res_handler);


const PORT = 8000;
function onServerStartUp() { console.log("Server started listening on http://localhost:" + PORT); }

server.listen(PORT, onServerStartUp);

