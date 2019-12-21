#!/usr/bin/env bash
docker build firehog -t firehog-fix
docker run --rm -it firehog-fix