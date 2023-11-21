<?php

if (!empty($_POST['usuario']) && !empty($_POST['pass'])) {
    
    require_once 'conexion.php';
    $conexion = conectar();
    if($conexion){
        $correo = $_POST['usuario'];
        $contra = sha1($_POST['pass']);
        $activo="S";

        $usuario='';
        $pass='';
        $activado='';

        $query = mysqli_prepare($conexion, 'SELECT usuario, pass, activado FROM usuario WHERE usuario=? AND pass=? AND activado=?');
        mysqli_stmt_bind_param($query, 'sss', $correo, $contra, $activo);
        $exe = mysqli_stmt_execute($query);
        mysqli_stmt_bind_result($query, $usuario, $pass, $activado);

        if($exe){
            mysqli_stmt_fetch($query);
            echo $usuario, $pass, $activado.' <br>';
            desconectar($conexion);
            //header("refresh:0;url=usuario_listado.php");
            echo $correo, $contra;
        }else{
            ?><script>alert("Los datos ingresados son incorrectos")</script> <?php
            desconectar($conexion);
            header("refresh:0.1;url=../index.php");
        }
    }
}