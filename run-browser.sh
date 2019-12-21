#!/usr/bin/env bash
docker build fix -t firehog-browser
docker run --rm -it firehog-browser