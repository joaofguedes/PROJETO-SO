#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char* argv[]){
    
    
    for(int i = 0;i < argc - 1; i++ ) //Criar procesos
    {
        createProcesses(argc -1);
    }

    for(int i = 0;i < argc - 1; i++ ) //Fechar procesos
    {
        wait(NULL);
    }

    system("zip ebooks *.epub");

}


void converter(f){
    for (int i = 0; i < argc-1; i++){
    exelp("pandoc", "pandoc", f, "-o", file.epub, (char*)NULL);
    }
}

void createProcesses(n){
        
        if(fork() == 0)
        {
            converter(argv[n+1]);
            printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid());
        }

}