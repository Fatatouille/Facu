<?php require 'php/encabezado.php';
$mes=mt_rand(1,12);
$dia=mt_rand(1,31);
switch($mes){
    case 3: $signo= $dia>=21 ? 'aries.jpg' : 'piscis.jpg';
    break;
    case 4: $signo= $dia>=21 ? 'tauro.jpg' : 'aries.jpg';
    break;
    case 5: $signo=$dia>=21 ? 'geminis.jpg' : 'tauro.jpg';
    break;
    case 6: $signo=$dia>=22 ? 'cancer.jpg' : 'geminis.jpg';
    break;
    case 7: $signo=$dia>=23 ? 'leo.jpg' : 'cancer.jpg';
    break;
    case 8: $signo=$dia>=24 ? 'virgo.jpg' : 'leo.jpg';
    break;
    case 9: $signo=$dia>=24 ? 'libra.jpg' : 'virgo.jpg';
    break;
    case 10: $signo=$dia>=23 ? 'escorpio.jpg' : 'libra.jpg';
    break;
    case 11: $signo=$dia>=23 ? 'sagitario.jpg' : 'escorpio.jpg';
    break;
    case 12: $signo=$dia>=22 ? 'capricornio.jpg' : 'sagitario.jpg';
    break;
    case 1: $signo=$dia>=20 ? 'acuario.jpg' : 'capricornio.jpg';
    break;
    case 2: $signo=$dia>=20 ? 'piscis.jpg' : 'acuario.jpg';
    break;
}

?>
<section>
    <h1>Signos del Zodíaco</h1>
    <p>Fecha generada: <?php echo $dia.'/'. $mes; ?></p>
    <figure>
        <img src="img/<?php echo $signo; ?>" title="<?php echo $signo; ?>">
    </figure>
</section>

<?php require 'php/pie.php'; ?>