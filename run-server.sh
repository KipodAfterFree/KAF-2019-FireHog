#!/usr/bin/env bash
docker build web -t firehog-server
docker run --rm -p 1150:80 firehog-server