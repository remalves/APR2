let lista = [[1,2,3,-9,-8,-7,-6], [0,-5,3,-4], [1], [5,-5,5,-5,5,-5]];

// function ex1(entrada){
//     let res = [];

//     for(let sublista of entrada){
//         let listpositivos = [];
    
//         for (let numero of sublista) {
//             listpositivos.push(numero);
//         }
//         res.push(listpositivos);
//     }
//     return res;
// }

// console.log("exercicio 1", ex1(lista)); 
let somaLista = lista.reduce((acumulador, sublista) => acumulador + sublista.reduce((acc, elemento) => acc + elemento), 0)
console.log(somaLista)



