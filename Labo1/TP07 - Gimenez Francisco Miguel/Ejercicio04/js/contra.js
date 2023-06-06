let mostrar = document.getElementById('mostrar');
let ocultar = document.getElementById('ocultar');
let contra = document.getElementById('contra');
function Cambiar(){
    if(contra.type == "password"){
        contra.type = "text";
        mostrar.style.display = "none";
        ocultar.style.display = "inline-block"
    }else{
        contra.type = "password";
        ocultar.style.display = "none";
        mostrar.style.display = "inline-block"
    }
}