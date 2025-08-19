let lista = [[1,2,3,-9,-8,-7,-6], [0,-5,3,-4], [1], [5,-5,5,-5,5,-5]];

function ex2(entrada){
    let res = [];

    for(let sublista of entrada){
    
        for (let numero of sublista) {
           res = res + numero
        }
    }
    return res;
}

console.log("exercicio 2", ex2(lista)); 