<?php
require 'php/encabezado.php';;
$nivel=mt_rand(65,67);
$nivel=chr($nivel);
?>
<header>
    <h1>Sistema Facturación</h1>
</header>
<section class="container-fluid">
     <section class ="row">
         <aside class = "col-md-3 lateral">
         <h4>Nivel: <?php echo $nivel?></h4>
         <?php switch($nivel){
            case $nivel=="A":?>
                <p>Listado productos</p>
                <p>informe</p>
            <?php break;?>

            <?php case $nivel=="B":?>
                <p>CRUD productos</p>
                <p>CRUD categorías</p>
                <p>informe</p>
            <?php break;?>

            <?php case $nivel=="C":?>
                <p>CRUD productos</p>
                <p>CRUD categorías</p>
                <p>informe</p>
                <p>CRUD usuarios</p>
                <p>Balances</p>
            <?php break;?>        
            <?php } ?>

         </aside>
         <main class="col-md-9 principal">
            <h6>parte Principal</h6>
        </main>
    </section>
</section>  
<?php require "php/pie.php";

