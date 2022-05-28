function prime(n){
    let pri=[2,3,5,7]
    for(let i=11;i<n;i++){
        
    }
    return pri
}

function internet(a,b){
    let u=[]
    for (let i = a; i <= b; i++) {
        let flag = 0;
    
        // looping through 2 to user input number
        for (let j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
    
        // if number greater than 1 and not divisible by other numbers
        if (i > 1 && flag == 0) {
            u.push(i)
        }
    }
    return u
}

s=new Date().getTime()
k=prime(30000)
e=new Date().getTime()
console.log(`${k.length} primes found in ${e-s}ms`)

s=new Date().getTime()
k=internet(8,30000)
e=new Date().getTime()
console.log(`${k.length} primes found in ${e-s}ms`)

s=new Date().getTime()
k=prime(30000)
e=new Date().getTime()
console.log(`${k.length} primes found in ${e-s}ms`)

s=new Date().getTime()
k=internet(8,30000)
e=new Date().getTime()
console.log(`${k.length} primes found in ${e-s}ms`)

s=new Date().getTime()
k=prime(30000)
e=new Date().getTime()
console.log(`${k.length} primes found in ${e-s}ms`)

s=new Date().getTime()
k=internet(8,30000)
e=new Date().getTime()
console.log(`${k.length} primes found in ${e-s}ms`)

s=new Date().getTime()
k=prime(30000)
e=new Date().getTime()
console.log(`${k.length} primes found in ${e-s}ms`)

s=new Date().getTime()
k=internet(8,30000)
e=new Date().getTime()
console.log(`${k.length} primes found in ${e-s}ms`)



// k.forEach((n,i,a)=>{
//     console.log(`${i+1} : ${n}`)
// })
