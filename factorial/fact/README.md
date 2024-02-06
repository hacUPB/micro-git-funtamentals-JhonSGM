# EVALUACIÓN 1

Descripción: Se clona un script en C desde un repositorio de GitHub. Se adicionan diferentes líneas de código, cada una representando una etapa en la que se realiza un commit. Una vez terminada y corregida cada etapa, se sube al repositorio de GitHub desde el repositorio local. Este debe pasar todas las pruebas establecidas (test).

![Imagen de un microprocesador](https://hardzone.es/app/uploads-hardzone.es/2018/03/procesador-arquitectura-arm.jpg?x=480&y=375&quality=40)

[Enlace a mi perfil de GitHUb](https://github.com/hacUPB/micro-git-funtamentals-JhonSGM).

COMANDOS: 
-Clonar  repositorio de la evaluación: git clone   
-Adicionar el archivo `fact.c` al STAGE: git add  
-Realizar un commit: git commit   
-Sincronizar con el repositorio remoto: git push  


....
....
....

In this directory, you should write the program `fact.c` and compile it into
the binary `fact` (e.g., `gcc -o fact fact.c -Wall -Werror`).

After doing so, you can run the tests from this directory by running the
`test-fact.sh` script. If all goes well, you will see:


```sh
prompt> ./test-fact.sh
test 1: passed
test 2: passed
test 3: passed
test 4: passed
test 5: passed
test 6: passed
test 7: passed
prompt>
```

The `test-fact.sh` script is just a wrapper for the `run-tests.sh` script in
the `tester` directory of this repository. This program has a few options; see
the relevant
[README](https://github.com/remzi-arpacidusseau/ostep-projects/blob/master/tester/README.md)
for details.