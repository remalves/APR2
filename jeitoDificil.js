//map recebe uma lista percorre a lista e altera os valores de entrada
//o map nao tira elemento 
//map (function(valor))


//filter -> remove elementos da lista, não altera os elementos que sobrarem

//reduce => obtem um unico valor na totalidade da lista  




// 1 - Imprima a lista mantendo apenas os números POSITIVOS
// 2 - Imprima a soma de todos os números da lista. 
// 3 - Imprima a soma de todos os números POSITIVOS da lista. 
// 4 - Imprima a lista de forma a exibir em cada item a soma dos valores da respectiva sublista
// 5 - Faça o 4, mas some apenas os números positivos.

function filtro(numero) {
    if(numero>=0){
        return true
    }
    else{
        return false
    }
}

function pov(elementos) {
    return elementos.filter(filtro);
}

let lista = [[1,2,3,-9,-8,-7,-6], [0,-5,3,-4], [1], [5,-5,5,-5,5,-5]]

//ex02:

let somaLista = lista.reduce((acumulador, sublista) => acumulador + sublista.reduce((acc, elemento) => acc + elemento), 0)
console.log(somaLista)


//ex03:

let somaPositivos = matriz.filter(numeros >= 0)