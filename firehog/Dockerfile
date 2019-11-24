FROM debian:buster-slim
# Update and install things
COPY ncurses /home/ncurses
COPY lynx /home/lynx
# Do things
RUN apt-get update && \
    apt-get install -y g++ make --no-install-recommends --no-install-suggests && \
    cd /home/ncurses && ./configure && make install && \
    cd /home/lynx && ./configure && make && make install && \
    rm -rf /home/* && \
    apt-get purge -y g++ make && \
    apt-get autoremove -y && \
    apt-get autoclean -y && \
    apt-get clean -y
# Link firehog to lynx
COPY firehog.sh /bin/firehog
# Starting command
CMD ["firehog"]