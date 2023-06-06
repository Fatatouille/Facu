let btn = document.getElementById('calcular');
let lista = document.getElementById('lc');
let ensalada = document.getElementById('ensalada');
let pan = document.getElementById('pan');

function Calcular(){    
    let personas = parseInt(document.getElementById('personas').value);

    let asado = 0.5 * personas;
    let morci = (1/4)* personas;
    let chori = personas;
    let gaseosa = personas;
    let panes = 0;
    let tomate = 0;
    let huevo = 0;
    let lechuga = 0;
    if(pan.checked){
        asado = asado - (asado*0.1);
        morci = morci - (morci*0.1);
        chori = chori - (chori*0.1);
        gaseosa = gaseosa - (gaseosa*0.1);
        panes = personas;
    }
    if(ensalada.checked){
        asado = asado - (asado*0.1);
        morci = morci - (morci*0.1);
        chori = chori - (chori*0.1);
        gaseosa = gaseosa - (gaseosa*0.1);
        tomate = personas;
        huevo = personas;
        lechuga = (1/4)* personas;
    }
    lista.innerHTML = `<h2>Lista de compras</h2>Asado: ${asado}kg<br>Morcilla: ${morci}<br>Chorizo: ${chori}<br>Gaseosas: ${gaseosa} lt<br>Pan: ${panes}<br>Tomates: ${tomate}<br>Huevos: ${huevo}<br>Lechuga: ${lechuga}`;
}

btn.addEventListener("click", Calcular);