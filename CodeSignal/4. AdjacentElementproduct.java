int adjacentElementsProduct(int[] arr) {
    int result = -9999;
    
    for(int i = 0; i < arr.length-1; i++) {
        int product = arr[i]*arr[i+1];
        if(product > result)
            result = product;
        
    }
    
    return result;
}
