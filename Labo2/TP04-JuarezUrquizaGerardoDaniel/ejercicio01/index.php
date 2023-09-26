<?php
require 'php/encabezado.php';
require 'php/funciones.php';

const JUBI=13;
const OBRA=3.5;

?>

<table class="table table-bordered table-striped table-responsive table-sm ">
    <tr>
        <th>Porcentaje</th>
        <th>Sueldo Neto</th>
    </tr>
<?php
    for($i=15; $i<=20; $i++){
        $total = calcularSueldoNeto(JUBI,OBRA,$i);?>
        <tr>
            <td><?php echo "$i%"; ?></td>
            <td>$<?php echo number_format($total,2,".",","); ?></td>
        </tr>
<?php } ?>
</table>

<?php 
    require "php/pie.php";
?>