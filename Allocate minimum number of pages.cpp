

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N){
            return -1;
        }
        
        
        
        int s=0;
        int e=0;
        int mid , ans;
        for(int i=0;i<N;i++){
            e=e+A[i];
            s=max(s , A[i]);
        }
        while(s<=e){
            mid=(s+e)/2;
            int pages=0;int c=1;
            for(int i=0;i<N;i++){
                pages=pages+A[i];
                if(pages>mid){
                    c++;
                    pages=A[i];
                }}
                if(c<=M){
                    ans=mid;
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            
        }
        return ans;
    }
};
