FROM debian:buster-slim
# Update and install things
RUN apt-get update
RUN apt-get install -y apt-utils
RUN apt-get install -y g++ make
# Copy and compile ncurses
COPY ncurses /home/ncurses
RUN cd /home/ncurses && ./configure && make install
# Copy and compile lynx
COPY lynx /home/lynx
RUN cd /home/lynx && ./configure && make && make install
# Uninstall things
RUN apt-get purge -y g++ make
RUN apt-get autoremove -y
RUN apt-get clean -y
# Remove ncurses and lynx
RUN rm -rf /home/*
# Link firehog to lynx
COPY firehog.sh /bin/firehog
# Starting command
CMD ["firehog"]