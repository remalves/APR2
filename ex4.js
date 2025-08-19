let lista = [[1,2,3,-9,-8,-7,-6], [0,-5,3,-4], [1], [5,-5,5,-5,5,-5]];

function ex4(entrada){
    let res = [];

    for(let sublista of entrada){
        let soma = 0;

        for (let numero of sublista) {
          soma = soma + numero;
        }
        res.push(soma);
    }
    return res;
}

console.log("exercicio 4", ex4(lista)); 