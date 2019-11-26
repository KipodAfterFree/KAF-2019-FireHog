#!/usr/bin/env bash
./build.sh
docker save firehog | gzip > FireHog.tar.gz
docker save firehog-server | gzip > FireHog-Server.tar.gz