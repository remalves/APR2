let lista = [[1,2,3,-9,-8,-7,-6], [0,-5,3,-4], [1], [5,-5,5,-5,5,-5]];

function ex3(entrada){
    let res = [];

    for(let sublista of entrada){
    
        for (let numero of sublista) {
           res = res + numero
        }
    }
    return res;
}

console.log("exercicio 3", ex3(lista)); 


