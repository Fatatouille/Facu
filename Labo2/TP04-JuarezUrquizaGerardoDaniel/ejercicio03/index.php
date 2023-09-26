<?php
$ruta='css';
require 'php/encabezado.php';
?>
<form action="php/procesar.php" method="GET" class="border border-primary p-3 shadow">
    <h2>Financiera</h2>
        <label for="depo">Depósito inicial</label>
        <input type="number" name="dep" id="depo">
    <fieldset>
    <h2>Plazo</h2>
    <section class="form-check form-switch">
        <label for="tre">30 dias</label>
        <input type="radio" name="plazos" id="tre" value="30">
    </section>
        <label for="cuat">45 dias</label>
        <input type="radio" name="plazos" id="cuat" value="45">
        <label for="sei">60 dias</label>
        <input type="radio" name="plazos" id="sei" value="60">
        <label for="nue">90 dias</label>
        <input type="radio" name="plazos" id="nue" value="90">

        <input type="submit" id="simp" value="Simular">
    </fieldset>
    
</form>
<?php require 'php/pie.php';