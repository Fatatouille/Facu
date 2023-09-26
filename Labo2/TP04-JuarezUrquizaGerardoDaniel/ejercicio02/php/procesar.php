<?php
$ruta='../css';
require "encabezado.php";
require "funciones.php";


if(!empty($_GET["monto"]) && !empty($_GET["divi"])){
    $monto=$_GET["monto"];
    $divisa=$_GET["divi"];
    
    $coso=cotizacionDivisa($divisa, $monto);
?> <h1>Divisas</h1>
    <h2>Compra</h1>
    <p class="uno">Monto disponoible:$<?php echo $monto; ?></p>
    <p><?php echo $divisa; ?> adquiridas:<?php echo number_format($coso, 2, ".", ","); ?></p>


<?php }  
else{?>
<h1>no hay datos</h1>
<?php }
require "pie.php";
?>