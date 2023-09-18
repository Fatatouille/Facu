<?php
require 'php/encabezado.php';
$carton=[2, 4, 6, 8, 9, 11, 13, 14, 16, 17, 19, 20, 22, 23, 25];
$cont=0;
$ganadores=[0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0];
?>

<main>
    <figure>
        <img src="img/logo_telekino.jpg" alt="Telekino">
    </figure>
    <article> <?php
for($i=0; $i<15; $i++){
    if($i%3==0){
        ?> </article> <article> <?php
    }
    ?> <b> <?php echo $carton[$i]; ?> </b> <?php
    $numero=mt_rand(1,25);
    while(in_array($numero, $ganadores)){
        $numero=mt_rand(1,25);
    }
    $ganadores[$i]=$numero;
    if(in_array($ganadores[$i], $carton)){
        $cont++;
    }
}
?> </main>
<section>
    <h1>NUMEROS GANADORES</h1>
    <?php
    if($cont==15){
        ?> <script> alert('Ganador del po<o de $150.000.000.') </script> <?php
    } 
    for($i=0; $i<15; $i++){
        ?> <b><?php echo $ganadores[$i]; ?></b> <?php
    }
    ?>
</section>
<?php
require 'php/pie.php';