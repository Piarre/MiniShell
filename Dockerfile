FROM randomdude/gcc-cross-x86_64-elf

WORKDIR /minishell
COPY main.c /minishell

RUN apt-get update

RUN gcc main.c -o shell.exe

CMD [ "./shell.exe" ]

