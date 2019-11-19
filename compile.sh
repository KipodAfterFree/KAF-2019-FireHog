#!/usr/bin/env bash
docker build browser -t firehog-compiler
docker run --rm -v $PWD/browser/output:/mnt firehog-compiler
cp $PWD/browser/output/lynx $PWD/firehog/browser/lynx
cp $PWD/browser/output/lynx.cfg $PWD/firehog/browser/lynx.cfg