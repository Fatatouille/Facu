<?php
require 'php/encabezado.php';
$precio= mt_rand(10000, 30000);
$tarjeta= chr(mt_rand(77, 86));
if($tarjeta>"N"){
    if($tarjeta>="S"){
        if($tarjeta >"T"){
            if($tarjeta!="V"){
                $tarjeta= "V";
            }
        }
    }else{
        $tarjeta= chr(mt_rand(77, 78));
    }
}
switch($tarjeta){
    case "V":
        $pagar=$precio*0.8;
        $imagen="V.jpg";
        $descuento="20%";
        break;
    case "M":
        $pagar=$precio*0.82;
        $imagen="M.jpg";
        $descuento="18%";
        break;
    case "N":
        $pagar=$precio*0.85;
        $imagen="N.jpg";
        $descuento="15%";
        break;
    case "S":
        $pagar=$precio*0.9;
        $imagen="S.jpg";
        $descuento="10%";
        break;
    case "T":
        $pagar=$precio*0.92;
        $imagen="T.jpg";
        $descuento="8%";
        break;
}

?>
<section>
    <img src="img/<?php echo $imagen; ?>">
    <article>
        <p>Precio compra: <b>$ <?php echo number_format($precio, 2, '.', ',');?></b></p>
        <p>Descuento: <b><?php echo $descuento; ?></b></p>
        <p class="color">TOTAL A PAGAR: $ <b><?php echo number_format($pagar, 2, '.', ',');?></b></p>
    </article>
</section>
<?php require 'php/pie.php';