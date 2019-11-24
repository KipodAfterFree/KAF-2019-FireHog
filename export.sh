#!/usr/bin/env bash
docker build firehog -t firehog
docker save firehog | gzip > FireHog.tar.gz
docker build web -t firehog-server
docker save firehog-server | gzip > FireHog-Server.tar.gz