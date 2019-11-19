FROM debian:buster
# Update and install things
RUN apt-get update
RUN apt-get install -y apt-utils
RUN apt-get install -y gcc g++ make
# Copy and compile ncurses
COPY ncurses /home/ncurses
RUN cd /home/ncurses && ./configure && make install
# Copt lynx
COPY lynx /home/lynx

COPY build.sh /build.sh

RUN chmod 777 /build.sh

CMD "/build.sh"