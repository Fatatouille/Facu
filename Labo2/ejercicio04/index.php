<?php
$ruta='css';
require 'php/encabezado.php';
?>
<form action="php/procesar.php" method="get" >
    <h1>INICIAR SESIÓN</h1>
    <p>Ingrese su mail y contraseña</p>
    <section>
    <input type="mail" name="email" id="email">
    <label for="email">Email</label>
    </section>
    <section>
    <input type="password" name="contra" id="contra">
    <label for="contra">Contraseña</label>
    </section>
    <input type="submit" value="Login">
</form>
<?php require 'php/pie.php';