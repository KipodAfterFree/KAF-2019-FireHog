#!/usr/bin/env bash
docker build firehog -t firehog
# docker run --rm -it firehog
docker save firehog | gzip > FireHog.tar.gz