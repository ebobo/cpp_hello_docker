FROM ubuntu:latest

# install some packages
RUN ln -fs  /usr/share/zoneinfo/Europe/Oslo /etc/localtime
RUN apt-get -y update && apt-get install -y --no-install-recommends
RUN apt-get install clang cmake git libboost-all-dev -y

WORKDIR /home/cpp/hello

COPY . ./

RUN cmake CMakeLists.txt
RUN make

CMD ./HelloQi