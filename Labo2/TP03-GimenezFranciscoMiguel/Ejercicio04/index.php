<?php
require 'php/encabezado.php';
require 'php/piezas.php';

?> <table> <?php
$cont=0;
for ($y=0; $y<8; $y++){
    ?> <tr> <?php
    if($y%2==0){
        for ($x=0; $x<8; $x++){
            ?> <td> <?php
            if ($cont%2==0){    
                if($tablero[$cont]=='vacio'){
                    ?> <img src="img/<?php echo $tablero[$cont].'_b.jpg'; ?>" alt="<?php echo $tablero[$cont]; ?>"> <?php
                }else{
                    ?> <img src="img/<?php echo $tablero[$cont].'.jpg'; ?>" alt="<?php echo $tablero[$cont]; ?>" style="background:#fff;"><?php
                }
            }else{
                if($tablero[$cont]=='vacio'){
                    ?> <img src="img/<?php echo $tablero[$cont].'_n.jpg'; ?>" alt="<?php echo $tablero[$cont]; ?>"><?php
                }else{
                    ?> <img src="img/<?php echo $tablero[$cont].'.jpg'; ?>" alt="<?php echo $tablero[$cont]; ?>" style="background:#000;"><?php
                }
                ?> </td> <?php
            }
            $cont++;
        }
    }else{
        for ($x=0; $x<8; $x++){
            ?> <td> <?php
            if ($cont%2!=0){    
                if($tablero[$cont]=='vacio'){
                    ?> <img src="img/<?php echo $tablero[$cont].'_b.jpg'; ?>" alt="<?php echo $tablero[$cont]; ?>"> <?php
                }else{
                    ?> <img src="img/<?php echo $tablero[$cont].'.jpg'; ?>" alt="<?php echo $tablero[$cont]; ?>"><?php
                }
            }else{
                if($tablero[$cont]=='vacio'){
                    ?> <img src="img/<?php echo $tablero[$cont].'_n.jpg'; ?>" alt="<?php echo $tablero[$cont]; ?>"><?php
                }else{
                    ?> <img src="img/<?php echo $tablero[$cont].'.jpg'; ?>" alt="<?php echo $tablero[$cont]; ?>"><?php
                }
                ?> </td> <?php
            }
            $cont++;
        }
    }
    ?> </tr> <?php
}
?> </table> <?php

require 'php/pie.php';