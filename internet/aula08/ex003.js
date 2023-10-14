class Pessoa {
    constructor(idade, peso, nome) {
        this.idade = idade
        this.peso = peso
        this.nome = nome
    }

    descricaoDeDados() {
        return `${this.nome} pesa aproximadamente ${this.peso}Kg e tem ${this.idade} Anos`
    }
}


const pessoa1 = new Pessoa(20, 90.7, 'Guilherme');
const pessoa2 = new Pessoa(25, 80.7, 'Maria');

console.log(pessoa1.descricaoDeDados());
console.log(pessoa2.descricaoDeDados());