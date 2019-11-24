#!/usr/bin/env bash
docker build web -t firehog-server
docker run --rm -p 6666:80 firehog-server