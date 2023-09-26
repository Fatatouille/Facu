<?php

$ruta='../css';
require "encabezado.php";

if(!empty($_GET["email"]) && !empty($_GET["contra"])){
    $email=$_GET["email"];
    $contra=$_GET["contra"];
?>
    <main>
        <h2>Su Email Es: <?php echo $email;?></h2>
        <h2>Su Contraseña Es: <?php echo $contra;?></h2>
    </main>
<?php }
else{
?>
        <main>
        <h2>No Completo Uno De Los Datos</h2>
    </main>

<?php }
require "pie.php";