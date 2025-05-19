int hotpo(unsigned int n){

    if ((n & 1) == 1){
        n = (n*3) + 1;
    }else if((n & 1) == 0){
        n = n/2;
    }

    return n;
}