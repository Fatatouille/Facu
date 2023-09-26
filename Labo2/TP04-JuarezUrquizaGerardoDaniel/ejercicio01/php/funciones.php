<?php 
function calcularSueldoNeto($jubi,$obra,$porc){
    $au=250000+(250000*$porc)/100;
    $des=$au-($au*($jubi+$obra))/100;

    return $des;
}