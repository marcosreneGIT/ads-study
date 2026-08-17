<?php
// logica.php

// inicia a sessao
session_start():

/* as variáveis login e senha recebem os dados 
digitados no formulario da pagina index.php*/
$login = $_POST('usuario');
$senha = $_POST('senha');

//realizar a conexao com banco de dados
$mysqli = new mysqli("localhost", "root", "", mysql);
mysqli_set_charset ($mysqli, "utf8") // define os caracteres para UTF-8

// realiza consulta no banco de dados, procurando pelo usuário e senha
if ($result = $mysqli -> query("SELECT * FROM pessoa WHERE nome = '$login' AND senha = '$senha'")){
    // determina a quantidade de linhas resultante do banco de dados
    $row_cnt = $result -> num_rows;

    $result -> close();
    /* se a quantidade de linha for maior que zero,
    entao existe o usuario e senha digitado */

    if ($row_cnt > 0){
        $_SESSION['usuario'] = $login // coloca o nome do usuario na sessao
        $_SESSION['senha'] = $senha // coloca a senha na sessao (nao recomendado)
        header("Location: restrito.php"): // redireciona para a pagina restrito.php
    }
    else{
        unset($_SESSION['usuario']); //retira o usuario da sessao
        unset($_SESSION['senha']); // retira a senha da sessao
        header("Location: index.php") // redireciona para a pagina index.php
    }
}

// fecha (encerra) a conexao com banco de dados
$mysqli -> close();

?>