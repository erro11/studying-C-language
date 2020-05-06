void intBitPrint  (unsigned int num){
    unsigned int size = sizeof(unsigned int);
    unsigned int maxPow = 1<<(size*8-1);
    printf("MAX POW : %u\n",maxPow);
    int i=0,j;
    for(;i<size*8;++i){
    // print last bit  and shift left.
    printf("%u ",num&maxPow ? 1 : 0);
    num = num<<1;
}
}
