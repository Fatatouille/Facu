let fuente = document.getElementById('fuente');
let tamano = document.getElementById('tamano');
let letra = document.getElementById('letra');
let fondo = document.getElementById('fondo');

function Fuente(){
    document.body.style.fontFamily = fuente.value;
}
function Tamano(){
    document.body.style.fontSize = tamano.value + "px";
}
function Letra(){
    document.body.style.color = letra.value;
}
function Fondo(){
    document.querySelector('main').style.background = fondo.value;
    document.querySelector('aside').style.background = fondo.value;
}

fuente.addEventListener("change", Fuente);
tamano.addEventListener("input", Tamano);
letra.addEventListener("change", Letra);
fondo.addEventListener("change", Fondo);