let anterior1 = 1
let anterior2 = 0
let atual = 0

console.log(anterior2)
console.log(anterior1)

for (let i = 0; i < 9; i++) {
    atual = anterior1 + anterior2
    anterior2 = anterior1
    anterior1 = atual
    console.log(atual)
}
