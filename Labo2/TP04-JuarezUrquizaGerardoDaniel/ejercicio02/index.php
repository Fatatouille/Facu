<?php
$ruta='css';
require "php/encabezado.php";


?>
<form action="php/procesar.php" method="get">
        <legend>Compra de divisas</legend>
        <label for="montos">Monto Disponible</label>
            <input type="number" name="monto" id="montos">
        <label for="visa">Divisa</label>
            <input type="text" name="divi" id="visa" value="dolar">
            <input type="submit" name="enviar" id="enviar" value="Comprar">
</form>
<?php
require "php/pie.php";
?>