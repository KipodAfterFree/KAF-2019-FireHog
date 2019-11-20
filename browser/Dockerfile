FROM debian:buster
# Update and install things
RUN apt-get update
RUN apt-get install -y apt-utils
RUN apt-get install -y gcc g++ make
# Copy and compile ncurses
COPY ncurses /home/ncurses
RUN cd /home/ncurses && ./configure && make install
# Copy and compile lynx
COPY lynx /home/lynx
RUN cd /home/lynx && ./configure && make && make install
# Copy copylynx script
COPY copyall.sh /bin/copyall

CMD "copyall"