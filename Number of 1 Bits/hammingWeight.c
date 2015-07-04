int hammingWeight(uint32_t n) {
    int counter = 0;
    for(int i=0; i<32; ++i) {
        if(((uint32_t)pow(2, i) & n) != 0 ) {
            ++counter;
        } 
    }
    
    return counter;
}
