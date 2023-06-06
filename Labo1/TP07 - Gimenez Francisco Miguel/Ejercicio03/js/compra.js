let select = document.getElementById('cuotas');
let texto = document.getElementById('totales');
function Cuotas(){
    let precio = parseFloat(document.getElementById('precio').value);
    let cantidad = parseInt(select.value);
    let total = precio;
    if(cantidad==6 || cantidad==9){
        total = precio*1.5;
    }
    if(cantidad==12){
        total = precio*1.4;
    }
    let cuota = total/cantidad;

    texto.innerHTML = `<h2>Detalles de la compra.</h2> Cuotas elegidas: ${cantidad}<br>Precio total final: ${total}<br>Precio de cada cuota: ${cuota}`;
}
select.addEventListener("change", Cuotas);