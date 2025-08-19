let lista = [[1,2,3,-9,-8,-7,-6], [0,-5,3,-4], [1], [5,-5,5,-5,5,-5]];

function ex5(entrada){
    let res = [];

    for(let sublista of entrada){
        let soma = 0;

        for (let numero of sublista) {
            if(numero >=0){
                soma = soma + numero;
            }
          
        }
        res.push(soma);
    }
    return res;
}

console.log("exercicio 5", ex5(lista)); 