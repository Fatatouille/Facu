<?php
if(isset($_GET['enviar'])){
    $nombre = $_GET['nombre'];
    $precio = $_GET['precio'];
    define('IVA', 21);
    $iva = ($precio* IVA)/100;
    $total = $precio+$iva;
}
?>
<!DOCTYPE html>
<html lang="es-la">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Factura</title>
    <meta author="Gimenez Francisco Miguel">
    <link rel="stylesheet" href="css/estilo.css">
</head>
<body>
    <form action="" method="GET">
        <input type="text" name="nombre" id="nombre" placeholder="Nombre del producto">
        <input type="number" name="precio" id="precio" placeholder="Precio entre 10k y 50k" min="10000" max="50000" step="0.1">
        <input type="submit" name="enviar" value="Enviar">
    </form>
    <?php if(isset($_GET['enviar'])){ ?>
    <main>
        <section class="header">
        <b>Detalle</b> <b>IMPORTE</b>
        </section>
        <section class="detalle">
            <article><p><?php echo $nombre?></p> <b><?php echo $precio; ?></b></article>
            <article><p>Total sin IVA</p> <b><?php echo $precio?></b></article>
            <article><p>IVA 21,00%</p> <b><?php echo $iva; ?></b></article>
            <article><p>TOTAL</p> <b><?php echo $total ?></b></article>
        </section>
    </main>
    <?php } ?>
    <footer>Copyright 2023 - Giménez Francisco Miguel</footer>
</body>
</html>