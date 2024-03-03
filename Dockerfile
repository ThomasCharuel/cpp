FROM debian:latest

RUN apt-get update && apt-get -y upgrade \
    && apt-get install -y build-essential \
        clang \
        valgrind

WORKDIR /project

CMD ["bash"]

# docker build -t 42 .
# docker run -it -v "$(pwd):/project" 42