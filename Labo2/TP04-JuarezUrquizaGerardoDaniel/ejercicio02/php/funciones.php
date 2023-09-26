<?php
function cotizacionDivisa($divisa,$monto){
switch ($divisa){
case "dolar":
    $total=$monto/349.65;
break;
case "euro":
    $total=$monto/373;
break;
case "real":
    $total=$monto/71.82;
break;
case "yuan":
    $total=$monto/47.98;
break;
}
    return $total;
} ?>

