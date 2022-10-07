int checkround(int **petrol,int index,int rows){
    int ret=0,i;
    int pet=0,dist=0;
    for(i=index;i!=index-1;i= (i+1) % rows)
    {
        
        // printf("index=%d\n",index);
        // printf("i=%d\n",i);
        dist=petrol[i][1];
        pet+=petrol[i][0];
        // printf("before pet=%d dis=%d\n",pet,dist);
        pet=pet-dist;
        // printf("after pet=%d dis=%d\n",pet,dist);
        if(pet<0)
        {
            return i;
        }
        
    }
    printf("returned \n");
    return -1;
}

int truckTour(int petrolpumps_rows, int petrolpumps_columns, int** petrolpumps) {
    int index,size=petrolpumps_rows;
    for(int i=0;i<petrolpumps_rows;i++)
    {
        int ret=checkround(petrolpumps, i, petrolpumps_rows);
        if(ret==-1)
        {
            return i;
        }
        else {
            i=ret;
        }
    }
    
    return index;
}
