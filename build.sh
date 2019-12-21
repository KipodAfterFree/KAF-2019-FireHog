#!/usr/bin/env bash
docker build firehog -t firehog-fix
docker build web -t firehog-server