#include "combination.h"
#include <vector>
#include <iostream>
void getCombination(std::vector < std::string > &v,int level){
    char buffer[6] ;


    for( int i = 0 ; i < 5+level ; i ++ ){
        for( int j = i+1 ; j < 5+level ; j ++){
            for( int k = j+1 ; k < 5+level ; k++){
                    for( int l = k+1 ; l < 5+level ; l++){
                        for( int m = l+1 ; m < 5+level ; m++){
                                sprintf(buffer,"%d%d%d%d%d",i,j,k,l,m);
                                v.push_back(buffer);
                        }
                    }
            }
        }
    }


}
