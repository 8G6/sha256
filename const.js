

function internet(a,b){
    let u=[]
    for (let i = a; i <= b; i++) {
        let flag = 0;
        for (let j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (i > 1 && flag == 0) {
            u.push(i)
        }
    }
    return u
}

let arr=internet(0,500)

arr.forEach(n=>{
    n=n**(1/3)
    n=n-parseInt(n)
    console.log((n).toString(2).slice(2,34))
})