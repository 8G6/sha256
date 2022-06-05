long long int mod32(long long int a,long long int b){
    return (a+b)%exp_32;
}

unsigned int rotr(unsigned int x, unsigned int n) {
    return (x >> n % 32) | (x << (32-n) % 32);
}

unsigned int sig_0(unsigned int num){
    return rotr(num,7)^rotr(num,18)^(num>>3);
}

unsigned int sig_1(unsigned int num){
    return rotr(num,17)^rotr(num,19)^(num>>10);
}

unsigned int SIG_0(unsigned int num){
    return rotr(num,2)^rotr(num,13)^rotr(num,22);
}

unsigned int SIG_1(unsigned int num){
    return rotr(num,6)^rotr(num,11)^rotr(num,25);
}

unsigned int choice(unsigned int x,unsigned int y,unsigned int z){
    return (x & y) | (~x & z);
}

unsigned int majority(unsigned int x,unsigned int y,unsigned int z){
    return (x & y) | (x & z) | (y & z);
}