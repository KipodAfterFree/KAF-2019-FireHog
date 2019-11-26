#!/usr/bin/env bash
docker build firehog -t firehog
docker build web -t firehog-server