//Declaração de variáveis

var a = 10;
var b = "10";
var resultado = a * b; //coerção de string para number

console.log("resultado de 10 * '10' => ", resultado);
// >> 100

//comparação de valor
console.log("10 == '10' =>", a==b);
// >> true

//comparação de valor e tipo
console.log("10 === '10' =>", a===b);
// >> false

var c =  null;
var d = true;
var e = false;
var f = undefined;

//representação numérica de null e boolean
console.log("\nisNaN(null) => ", isNaN(c));
// >> false
console.log("isNaN(true) => ", isNaN(d));
// >> false
console.log("isNaN(false) => ", isNaN(e));
// >> false
console.log("isNaN(undefined) => ", isNaN(f));
// >> true

//operações com strings
var nome = "fulano";
var sobrenome = "de tal";
var nomeCompleto = nome + " " + sobrenome
console.log("nomeCompleto: ", nomeCompleto) //concatenação
console.log("nomeCompleto.length: ", nomeCompleto.length) //tamanho da string
console.log("nomeCompleto.toUpperCase: ", nomeCompleto.toUpperCase()) //converte para maiúsculo
console.log("nomeCompleto.toLowerCase: ", nomeCompleto.toLowerCase()) //converte para minúsculo
console.log("nomeCompleto.charAt(0): ", nomeCompleto.charAt(0)) //pega o primeiro caractere
console.log("nomeCompleto.charAt(nomeCompleto.length - 1): ", nomeCompleto.charAt(nomeCompleto.length - 1)) //pega o último caractere
console.log("nomeCompleto.indexOf('a'): ", nomeCompleto.indexOf('a')) //pega a posição do caractere
console.log("nomeCompleto.indexOf('a', 1): ", nomeCompleto.indexOf('a', 1)) //pega a posição do caractere a partir da posição 1
console.log("nomeCompleto.substring(0, 3): ", nomeCompleto.substring(0, 3)) //pega a substring de 0 a 3
console.log("nomeCompleto.substring(0, nomeCompleto.length - 1): ", nomeCompleto.substring(0, nomeCompleto.length - 1)) //pega a substring de 0 a nomeCompleto.length - 1
console.log("nomeCompleto.substring(nomeCompleto.indexOf('a'), nomeCompleto.length): ", nomeCompleto.substring(nomeCompleto.indexOf('a'), nomeCompleto.length)) //pega a substring de nomeCompleto.indexOf('a') a nomeCompleto.length
console.log("nomeCompleto.substring(nomeCompleto.indexOf('a'), nomeCompleto.indexOf('a') + 3): ", nomeCompleto.substring(nomeCompleto.indexOf('a'), nomeCompleto.indexOf('a') + 3)) //pega a substring de nomeCompleto.indexOf('a') a nomeCompleto.indexOf('a') + 3

// >> nomeCompleto:  fulano de tal
// >> nomeCompleto.length:  13
// >> nomeCompleto.toUpperCase:  FULANO DE TAL
// >> nomeCompleto.toLowerCase:  fulano de tal
// >> nomeCompleto.charAt(0):  f
// >> nomeCompleto.charAt(nomeCompleto.length - 1):  l
// >> nomeCompleto.indexOf('a'):  3
// >> nomeCompleto.indexOf('a', 1):  3
// >> nomeCompleto.substring(0, 3):  ful
// >> nomeCompleto.substring(0, nomeCompleto.length - 1):  fulano de ta
// >> nomeCompleto.substring(nomeCompleto.indexOf('a'), nomeCompleto.length):  ano de tal
// >> nomeCompleto.substring(nomeCompleto.indexOf('a'), nomeCompleto.indexOf('a') + 3):  ano


var g = {
    nome: "fulano",
    idade: 20
}

var h = [1,2,3]

//array possui tipo object
console.log("\ng: ", g, "tipo de g: ", typeof(g));
// >> g:  { nome: 'fulano', idade: 20 } tipo de g:  object
console.log("h: ", h, "tipo de h: ", typeof(h));
// >> h:  [ 1, 2, 3 ] tipo de h:  object

console.log("tipo de 'a':", typeof(a))
// >> tipo de 'a': number
console.log(a.toString()) //método aplicável a números
// >> 10

//console.log(a.toLowerCase()) linha com erro pois toLowerCase é aplicável somente a strings

a = 'ABC'
console.log("tipo de 'a':", typeof(a))
// >> tipo de 'a': string

//console.log(a.toFixed(5)) linha com erro pois toFixed é aplicável somente a números

console.log(a.toLowerCase()) //método aplicável a strings
// >> abc
