<?php

function conectar(){

    set_error_handler(function(){ throw new Exception("Error"); });

    try{
        $link = mysqli_connect('localhost', 'root', 'root', 'labo2');
    } catch (Exception $e){
        $link = false;
        ?> <script>alert("Ha ocurrido un error")</script> <?php
        echo '<h1>ups!</h1>';
    }

    return $link;
}

function desconectar($link){
    if($link){
        mysqli_close($link);
    }else{
        echo '<h1>No existe conexión abierta</h1>';
    }
}