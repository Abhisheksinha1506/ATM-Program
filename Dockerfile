FROM gcc:4.9
COPY . /program
WORKDIR /program/
RUN gcc -o program main.c
CMD ["./program"]