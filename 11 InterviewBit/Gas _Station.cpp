int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int n = A.size();


for(int i=0; i<n; i++){
    
    int j=i;
    bool can = 1;
    int add = 0;
    
    do{
        if((add + A[j])>=B[j]){
             add = (add + A[j]) - B[j];
             j = (j+1)%n;
        }
        else{
              can = 0;            
              break;
           }
    } while(j!=i);
    
    if(can)
        return i;
}
return -1;

}
