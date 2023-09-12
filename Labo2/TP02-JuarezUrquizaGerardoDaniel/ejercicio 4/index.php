<?php
require 'php/encabezado.php';
$nai1=mt_rand(1,12);
$nai2=mt_rand(1,12);
?>
<article>
    <h2>9 y Medio</h2>
<?php if ($nai1>=10){
     switch ($nai1){
    case 10: $nai1=0.5?>
    <p>naipe 1:sota</p>
        <?php break;
        case 11: $nai1=0.5?>
    <p>naipe 1:caballo</p>
        <?php break;
        case 12: $nai1=0.5?>
    <p>naipe 1:rey</p>
        <?php break;}
}else{ ?>
        <p>naipe 1:  <?php echo $nai1; } ?></p>
<?php if ($nai2>=10){
    switch ($nai2){
   case 10: $nai2=0.5?>
   <p>naipe 2:sota</p>
    <?php break;
    case 11: $nai2=0.5?>
   <p>naipe 2:caballo</p>
    <?php break;
    case 12: $nai2=0.5?>
   <p>naipe 2:rey</p>
    <?php break;}
}else{?>
        <p>naipe 2:  <?php echo $nai2;}?></p>
<?php
$total=$nai1+$nai2;
   
   if ($total=="9.5"){ ?>
    <p><b>GANADOR</b></p>
    <?php }
    else{ ?>
        <p>PUNTOS OBTENIDOS: <?php echo $total; ?></p>
    <?php } ?>
</article>

<?php
require 'php/pie.php';