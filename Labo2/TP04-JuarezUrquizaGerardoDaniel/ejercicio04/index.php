<?php
$ruta='css';
require 'php/encabezado.php';
?>
<form action="php/procesa.php" method="get">
    <h1>INICIAR SESIÓN</h1>
    <p>Ingrese su mail y contraseña</p>
    <input type="mail" name="email" id="email">
    <label for="email">Email</label>
    <input type="password" name="contra" id="contra">
    <label for="contra">Contraseña</label>
    <input type="submit" value="Login">
</form>
<?php require 'php/pie.php';