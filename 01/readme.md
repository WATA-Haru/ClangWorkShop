# explanations from [resource](https://panda-program.com/posts/set-up-c-lang-with-docker)

hello.c
```
#include <stdio.h>

int main(){
	printf("Hello World\n");
}
```

dir tree
```
├── Dockerfile
└── sample_program
    └── hello.c
```

how to execute
```
$ docker build -t alpine:exec-c .
$ docker run -v "$PWD"/sample_program:/home --rm -ti alpine:exec-c
6a333c246e82:# cd /home
6a333c246e82:# gcc hello.c
6a333c246e82:# ./a.out
Hello world
```
