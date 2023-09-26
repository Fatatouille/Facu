<?php
$ruta='../css';
require "funciones.php";
require "encabezado.php";

if(!empty($_GET["dep"]) && !empty($_GET["plazos"])){
    $dep=$_GET["dep"];
    $plazos=$_GET["plazos"];

    $inter=calcularIntereses($dep, $plazos);
    $total=$dep+$inter;

?>
    <main class="row text-center">
        <h2>Tus Datos</h2>
        <p>Su deposito Inicial es de: <?php echo number_format($dep, 2, ",", "."); ?></p>
        <p>Su plazo es de: <?php echo $plazos ; ?> dias</p>
        <p>Su interes es de: <?php echo number_format($inter, 2, ",", ".") ; ?></p>
        <p>Su monto total es de: <?php echo number_format($total, 2, ",", "."); ?></p>
    </main>
<?php } 
require "pie.php"
?>