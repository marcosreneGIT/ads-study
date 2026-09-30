var http = require('http');

//cria um objeto servidor 
http.createServer(function(req, res){
    res.write('Olá Mundo!'); //escreve uma resposta ao cliente
    res.end(); //finalizar a resposta
}).listen(8080); //o objeto esta acessivel na porta 8080