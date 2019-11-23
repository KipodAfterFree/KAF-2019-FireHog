#!/usr/bin/env bash
docker build firehog -t firehog
#docker run --rm -it firehog
docker run --rm -it -v /home/nadav/Documents/Junktime/:/mnt/ firehog /bin/bash