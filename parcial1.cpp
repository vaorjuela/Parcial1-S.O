#include <cstring>
#include <cerrno>
#include <cstdio>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
#include <chrono>
#include <thread>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cmath> 

using namespace std;

int main (int argc, char** argv) {

    int numc = 1024582398;
    int num = 398;
    bool primo = true;
    pid_t pid1;

                if ((pid1=fork()) == 0 ){ /* hijo */

                std::cout<< numc <<" : Mil veinticuatro millones quinientos ochenta y dos mil trescientos noventa y ocho: \n"  << "\n";
                printf("Soy el hijo (%d, hijo de %d)\n",  getpid(), getppid());

 
     }          else{
                
                for (int i =2; i < num && primo == true; i++) {
                    if (num % i == 0) primo = false;
                }
                if (primo == false) 

                    std::cout<<"No es primo: "  << num << "\n\n";

                else 
                
                    std::cout<<"Es primo: \n\n\n"  << num << "\n\n\n";
            
                //printf("Soy el proceso padre (%d, padre de %d)\n\n\n\n\n");
                printf("Soy el padre (%d)\n\n\n\n\n", getpid());

                return 0;
    } 
}


