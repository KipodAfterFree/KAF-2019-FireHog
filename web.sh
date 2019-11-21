#!/usr/bin/env bash
docker build web -t firehog-server
docker run --rm -p 8000:80 firehog-server