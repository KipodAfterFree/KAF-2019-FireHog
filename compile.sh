#!/usr/bin/env bash
docker build firehog -t firehog
docker run --rm firehog